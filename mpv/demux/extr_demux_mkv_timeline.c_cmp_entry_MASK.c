
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct find_entry {int matchlen; int size; } ;
typedef int off_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const struct find_entry *VAR_2 = VAR_0, *VAR_3 = VAR_1;

    int VAR_4 = VAR_3->matchlen - VAR_2->matchlen;
    if (VAR_4)
        return FUNC_0(VAR_4);

    off_t VAR_5 = VAR_2->size - VAR_3->size;
    if (VAR_5)
        return FUNC_0(VAR_5);
    return 0;
}
