
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {unsigned int buf_end; unsigned int buf_cur; } ;
typedef scalar_t__ int64_t ;


 unsigned int FUNC_0 (scalar_t__,unsigned int) ;
 int FUNC_1 (struct stream*,int) ;

__attribute__((used)) static bool FUNC_2(struct stream *VAR_0, int64_t VAR_1)
{
    while (VAR_1 > 0) {
        unsigned int VAR_2 = VAR_0->buf_end - VAR_0->buf_cur;
        if (!VAR_2) {
            if (!FUNC_1(VAR_0, 1))
                return 0;
            continue;
        }
        unsigned VAR_3 = FUNC_0(VAR_1, VAR_2);
        VAR_0->buf_cur += VAR_3;
        VAR_1 -= VAR_3;
    }
    return 1;
}
