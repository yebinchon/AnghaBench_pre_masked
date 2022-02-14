
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_sink {size_t cap; size_t off; size_t buf; } ;


 int FUNC_0 (size_t,char const*,size_t) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, size_t VAR_1, void *VAR_2) {
    struct my_sink *VAR_3 = VAR_2;
    if (VAR_1 > VAR_3->cap - VAR_3->off) {
        return -1;
    }
    FUNC_0(VAR_3->buf + VAR_3->off, VAR_0, VAR_1);
    VAR_3->off += VAR_1;
    return 0;
}
