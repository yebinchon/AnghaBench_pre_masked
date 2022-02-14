
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sltg_typelib {int typeinfo_size; int typeinfo_count; struct sltg_block* typeinfo; } ;
struct sltg_block {int length; struct sltg_block* next; scalar_t__ index_string; void* data; } ;


 int FUNC_0 (char*,void*,int,char const*) ;
 struct sltg_block* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct sltg_typelib *VAR_0, void *VAR_1, int VAR_2, const char *VAR_3)
{
    struct sltg_block *VAR_4 = FUNC_1(sizeof(*VAR_4));

    FUNC_0("sltg_add_typeinfo: %p,%d,%s\n", VAR_1, VAR_2, VAR_3);

    VAR_4->length = VAR_2;
    VAR_4->data = VAR_1;
    VAR_4->index_string = 0;
    VAR_4->next = ((void*)0);

    if (VAR_0->typeinfo)
    {
        struct sltg_block *VAR_5 = VAR_0->typeinfo;

        while (VAR_5->next)
            VAR_5 = VAR_5->next;

        VAR_5->next = VAR_4;
    }
    else
        VAR_0->typeinfo = VAR_4;

    VAR_0->typeinfo_count++;
    VAR_0->typeinfo_size += VAR_2;
}
