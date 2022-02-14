
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct priv {int bytes_per_frame; scalar_t__ bytes_to_slide; scalar_t__ bytes_queued; int buf_queue; int bytes_queue; scalar_t__ in; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *,int) ;
 int FUNC_3 (int,int,int) ;
 int ** FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static bool FUNC_7(struct priv *VAR_0)
{
    int VAR_1 = VAR_0->in ? FUNC_5(VAR_0->in) * VAR_0->bytes_per_frame : 0;
    int VAR_2 = 0;

    if (VAR_0->bytes_to_slide > 0) {
        if (VAR_0->bytes_to_slide < VAR_0->bytes_queued) {
            int VAR_3 = VAR_0->bytes_queued - VAR_0->bytes_to_slide;
            FUNC_3(VAR_0->buf_queue, VAR_0->buf_queue + VAR_0->bytes_to_slide, VAR_3);
            VAR_0->bytes_to_slide = 0;
            VAR_0->bytes_queued = VAR_3;
        } else {
            int VAR_4;
            VAR_0->bytes_to_slide -= VAR_0->bytes_queued;
            VAR_4 = FUNC_0(VAR_0->bytes_to_slide, VAR_1);
            VAR_0->bytes_queued = 0;
            VAR_0->bytes_to_slide -= VAR_4;
            VAR_2 += VAR_4;
            VAR_1 -= VAR_4;
        }
    }

    int VAR_5 = VAR_0->bytes_queue - VAR_0->bytes_queued;
    FUNC_1(VAR_5 >= 0);

    int VAR_6 = FUNC_0(VAR_5, VAR_1);
    if (VAR_6 > 0) {
        uint8_t **VAR_7 = FUNC_4(VAR_0->in);
        FUNC_2(VAR_0->buf_queue + VAR_0->bytes_queued, VAR_7[0] + VAR_2, VAR_6);
        VAR_0->bytes_queued += VAR_6;
        VAR_2 += VAR_6;
        VAR_5 -= VAR_6;
    }

    if (VAR_0->in)
        FUNC_6(VAR_0->in, VAR_2 / VAR_0->bytes_per_frame);

    return VAR_5 == 0;
}
