
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {int buf_end; int buf_cur; int requested_buffer_size; int buf_start; int buffer_mask; scalar_t__ eof; int * buffer; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct stream*,int *,int) ;
 int FUNC_4 (struct stream*,int) ;

__attribute__((used)) static bool FUNC_5(struct stream *VAR_0, int VAR_1)
{
    FUNC_2(VAR_1 >= 0);

    int VAR_2 = VAR_0->buf_end - VAR_0->buf_cur;
    if (VAR_2 >= VAR_1)
        return 0;


    VAR_1 = FUNC_0(VAR_1, VAR_0->requested_buffer_size / 2);


    int VAR_3 = FUNC_1(VAR_0->buf_cur - VAR_0->buf_start, VAR_0->requested_buffer_size / 2);

    if (!FUNC_4(VAR_0, VAR_3 + VAR_1))
        return 0;

    int VAR_4 = VAR_0->buffer_mask + 1;

    FUNC_2(VAR_0->buf_start <= VAR_0->buf_cur);
    FUNC_2(VAR_0->buf_cur <= VAR_0->buf_end);
    FUNC_2(VAR_0->buf_cur < VAR_4 * 2);
    FUNC_2(VAR_0->buf_end < VAR_4 * 2);
    FUNC_2(VAR_0->buf_start < VAR_4);




    int VAR_5 = VAR_4 - VAR_3 - VAR_2;

    int VAR_6 = VAR_0->buf_end & VAR_0->buffer_mask;
    VAR_5 = FUNC_1(VAR_5, VAR_4 - VAR_6);




    VAR_5 = FUNC_3(VAR_0, &VAR_0->buffer[VAR_6], VAR_5);

    VAR_0->buf_end += VAR_5;


    if (VAR_0->buf_end - VAR_0->buf_start >= VAR_4) {
        FUNC_2(VAR_0->buf_end >= VAR_4);

        VAR_0->buf_start = VAR_0->buf_end - VAR_4;

        FUNC_2(VAR_0->buf_start <= VAR_0->buf_cur);
        FUNC_2(VAR_0->buf_cur <= VAR_0->buf_end);

        if (VAR_0->buf_start >= VAR_4) {
            VAR_0->buf_start -= VAR_4;
            VAR_0->buf_cur -= VAR_4;
            VAR_0->buf_end -= VAR_4;
        }
    }


    FUNC_2(VAR_0->buf_cur - VAR_0->buf_start >= VAR_3);

    if (VAR_0->buf_cur < VAR_0->buf_end)
        VAR_0->eof = 0;

    return !!VAR_5;
}
