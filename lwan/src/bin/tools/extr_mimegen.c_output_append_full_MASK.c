
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output {size_t used; size_t capacity; char* ptr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,size_t) ;
 char* FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct output *VAR_1, const char *VAR_2, size_t VAR_3)
{
    size_t VAR_4 = VAR_1->used + VAR_3;

    if (VAR_4 >= VAR_1->capacity) {
        char *VAR_5;

        while (VAR_4 >= VAR_1->capacity)
            VAR_1->capacity *= 2;

        VAR_5 = FUNC_1(VAR_1->ptr, VAR_1->capacity);
        if (!VAR_5)
            return -VAR_0;

        VAR_1->ptr = VAR_5;
    }

    FUNC_0(VAR_1->ptr + VAR_1->used, VAR_2, VAR_3);
    VAR_1->used = VAR_4;

    return 0;
}
