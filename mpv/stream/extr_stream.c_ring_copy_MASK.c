
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {int buf_start; int buf_end; int buffer_mask; int * buffer; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct stream *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    FUNC_1(VAR_2 >= 0);

    if (VAR_3 < VAR_0->buf_start || VAR_3 > VAR_0->buf_end)
        return 0;

    int VAR_4 = 0;
    VAR_2 = FUNC_0(VAR_2, VAR_0->buf_end - VAR_3);

    if (VAR_2 && VAR_3 <= VAR_0->buffer_mask) {
        int VAR_5 = FUNC_0(VAR_2, VAR_0->buffer_mask + 1 - VAR_3);
        FUNC_2(VAR_1, &VAR_0->buffer[VAR_3], VAR_5);
        VAR_4 += VAR_5;
        VAR_2 -= VAR_5;
        VAR_3 += VAR_5;
    }

    if (VAR_2) {
        FUNC_2((char *)VAR_1 + VAR_4, &VAR_0->buffer[VAR_3 & VAR_0->buffer_mask], VAR_2);
        VAR_4 += VAR_2;
    }

    return VAR_4;
}
