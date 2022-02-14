
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_buffer {int size; int * ptr; int * str; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*,char const*,char const*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(struct debug_buffer *VAR_0, const char *VAR_1, const char *VAR_2)
{
    int VAR_3;

    if (!VAR_2 || VAR_0->ptr == VAR_0->str)
        VAR_2 = "";
    VAR_3 = FUNC_1(VAR_0->ptr, VAR_0->size, "%s%s", VAR_2, VAR_1);
    if (VAR_3 == -1 || VAR_3 >= VAR_0->size)
    {
        VAR_0->size = 0;
        FUNC_2(&VAR_0->str[FUNC_0(VAR_0->str) - 4], "...");
        return;
    }

    VAR_0->ptr += VAR_3;
    VAR_0->size -= VAR_3;
}
