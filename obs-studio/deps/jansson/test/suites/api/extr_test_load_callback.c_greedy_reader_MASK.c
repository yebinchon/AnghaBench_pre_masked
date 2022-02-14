
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_source {size_t cap; size_t off; size_t buf; } ;


 int FUNC_0 (void*,size_t,size_t) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_0, size_t VAR_1, void *VAR_2)
{
    struct my_source *VAR_3 = VAR_2;
    if (VAR_1 > VAR_3->cap - VAR_3->off)
        VAR_1 = VAR_3->cap - VAR_3->off;
    if (VAR_1 > 0) {
        FUNC_0(VAR_0, VAR_3->buf + VAR_3->off, VAR_1);
        VAR_3->off += VAR_1;
        return VAR_1;
    } else {
        return 0;
    }
}
