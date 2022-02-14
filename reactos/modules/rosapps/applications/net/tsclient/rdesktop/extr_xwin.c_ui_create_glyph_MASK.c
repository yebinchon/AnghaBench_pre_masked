
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_10__ {void* bitmap_bit_order; void* byte_order; } ;
typedef TYPE_2__ XImage ;
struct TYPE_9__ {int create_glyph_gc; int visual; } ;
struct TYPE_11__ {TYPE_1__ xwin; int display; int wnd; } ;
typedef TYPE_3__ RDPCLIENT ;
typedef int Pixmap ;
typedef int HGLYPH ;


 void* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 TYPE_2__* FUNC_1 (int ,int ,int,int ,int ,char*,int,int,int,int) ;
 int FUNC_2 (int ,int ,int,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,TYPE_2__*,int ,int ,int ,int ,int,int) ;
 int VAR_1 ;

HGLYPH
FUNC_6(RDPCLIENT * VAR_2, int VAR_3, int VAR_4, const uint8 * VAR_5)
{
 XImage *VAR_6;
 Pixmap VAR_7;
 int VAR_8;

 VAR_8 = (VAR_3 + 7) / 8;

 VAR_7 = FUNC_2(VAR_2->display, VAR_2->wnd, VAR_3, VAR_4, 1);
 if (VAR_2->xwin.create_glyph_gc == 0)
  VAR_2->xwin.create_glyph_gc = FUNC_0(VAR_2->display, VAR_7, 0, ((void*)0));

 VAR_6 = FUNC_1(VAR_2->display, VAR_2->xwin.visual, 1, VAR_1, 0, (char *) VAR_5,
        VAR_3, VAR_4, 8, VAR_8);
 VAR_6->byte_order = VAR_0;
 VAR_6->bitmap_bit_order = VAR_0;
 FUNC_4(VAR_6);

 FUNC_5(VAR_2->display, VAR_7, VAR_2->xwin.create_glyph_gc, VAR_6, 0, 0, 0, 0, VAR_3, VAR_4);

 FUNC_3(VAR_6);
 return (HGLYPH) VAR_7;
}
