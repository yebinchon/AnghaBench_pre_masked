
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dictionary_entry {void* value; } ;
struct dictionary {int dummy; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,void*,...) ;
 int VAR_1 ;
 struct dictionary_entry** FUNC_1 (struct dictionary*,void const*) ;

BOOL FUNC_2(struct dictionary *VAR_2, const void *VAR_3, void **VAR_4)
{
    struct dictionary_entry **VAR_5;
    BOOL VAR_6 = VAR_0;

    FUNC_0("(%p, %p, %p)\n", VAR_2, VAR_3, VAR_4);
    if (!VAR_2)
        return VAR_0;
    if (!VAR_4)
        return VAR_0;
    if ((VAR_5 = FUNC_1(VAR_2, VAR_3)))
    {
        *VAR_4 = (*VAR_5)->value;
        VAR_6 = VAR_1;
    }
    FUNC_0("returning %d (%p)\n", VAR_6, *VAR_4);
    return VAR_6;
}
