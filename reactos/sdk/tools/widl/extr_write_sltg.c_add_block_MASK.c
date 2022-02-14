
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sltg_typelib {int index; } ;
struct sltg_block {int dummy; } ;


 int FUNC_0 (struct sltg_typelib*,void*,int,int) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (char*,void*,int,char const*) ;
 struct sltg_block* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct sltg_typelib *VAR_0, void *VAR_1, int VAR_2, const char *VAR_3)
{
    struct sltg_block *VAR_4 = FUNC_3(sizeof(*VAR_4));
    int VAR_5;

    FUNC_2("add_block: %p,%d,\"%s\"\n", VAR_1, VAR_2, VAR_3);

    VAR_5 = FUNC_1(&VAR_0->index, VAR_3);

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);
}
