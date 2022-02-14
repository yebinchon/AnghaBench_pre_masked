
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sltg_typelib {short typeinfo_count; struct sltg_block* typeinfo; } ;
struct sltg_block {int length; short* data; struct sltg_block* next; } ;
typedef int count ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (short*,int) ;

__attribute__((used)) static void FUNC_3(struct sltg_typelib *VAR_0)
{
    int VAR_1;
    struct sltg_block *VAR_2;
    short VAR_3 = VAR_0->typeinfo_count;

    FUNC_2(&VAR_3, sizeof(VAR_3));

    VAR_2 = VAR_0->typeinfo;
    for (VAR_1 = 0; VAR_1 < VAR_0->typeinfo_count; VAR_1++)
    {
        FUNC_1("sltg_write_typeinfo: writing block %d: %d bytes\n", VAR_1, VAR_2->length);

        FUNC_2(VAR_2->data, VAR_2->length);
        VAR_2 = VAR_2->next;
    }
    FUNC_0(VAR_2 == ((void*)0));
}
