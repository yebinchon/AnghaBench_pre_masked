
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wgl_dc_data {struct sw_framebuffer* sw_data; } ;
struct sw_framebuffer {int Hdc; int gl_visual; int gl_buffer; struct pixel_format const* pixel_format; } ;
struct pixel_format {scalar_t__ iPixelType; unsigned long cAlphaBits; int dwFlags; unsigned long cRedBits; unsigned long cGreenBits; unsigned long cBlueBits; int cColorBits; int cAccumAlphaBits; int cAccumBlueBits; int cAccumGreenBits; int cAccumRedBits; int cDepthBits; } ;
typedef int INT ;
typedef int HDC ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 struct sw_framebuffer* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,struct sw_framebuffer*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_6 ;
 struct pixel_format* FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int,int,int ,int ,int ,int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

BOOL FUNC_10(HDC VAR_7, struct wgl_dc_data* VAR_8, INT VAR_9)
{
    struct sw_framebuffer* VAR_10;
    const struct pixel_format *VAR_11;


    FUNC_4("OpenGL software implementation START for hdc %p, format %i!\n", VAR_7, VAR_9);

    VAR_11 = FUNC_5(VAR_9, ((void*)0));
    if (!VAR_11)
        return VAR_0;


    VAR_10 = FUNC_2(FUNC_1(), VAR_1, sizeof(*VAR_10));
    if(!VAR_10)
    {
        FUNC_0("HeapAlloc FAILED!\n");
        return VAR_0;
    }

    VAR_10->pixel_format = VAR_11;

    VAR_10->gl_visual = FUNC_7(
            VAR_11->iPixelType == VAR_4,
            VAR_11->cAlphaBits != 0,
            (VAR_11->dwFlags & VAR_2) != 0,
            VAR_11->cDepthBits,
            VAR_5,
            FUNC_9(FUNC_9(FUNC_9(VAR_11->cAccumRedBits, VAR_11->cAccumGreenBits), VAR_11->cAccumBlueBits), VAR_11->cAccumAlphaBits),
            VAR_11->iPixelType == VAR_3 ? VAR_11->cColorBits : 0,
            ((1ul << VAR_11->cRedBits) - 1),
            ((1ul << VAR_11->cGreenBits) - 1),
            ((1ul << VAR_11->cBlueBits) - 1),
            VAR_11->cAlphaBits != 0 ? ((1ul << VAR_11->cAlphaBits) - 1) : 255.0f,
            VAR_11->cRedBits,
            VAR_11->cGreenBits,
            VAR_11->cBlueBits,
            VAR_11->cAlphaBits);

    if(!VAR_10->gl_visual)
    {
        FUNC_0("Failed to allocate a GL visual.\n");
        FUNC_3(FUNC_1(), 0, VAR_10);
        return VAR_0;
    }


    VAR_10->gl_buffer = FUNC_6(VAR_10->gl_visual);
    if (!VAR_10->gl_buffer) {
        FUNC_0("Failed to allocate the mesa framebuffer structure.\n");
        FUNC_8( VAR_10->gl_visual );
        FUNC_3(FUNC_1(), 0, VAR_10);
        return VAR_0;
    }


    VAR_10->Hdc = VAR_7;


    VAR_8->sw_data = VAR_10;
    return VAR_6;
}
