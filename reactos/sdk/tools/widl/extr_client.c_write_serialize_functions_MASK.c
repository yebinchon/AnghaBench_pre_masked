
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int attrs; } ;
typedef TYPE_1__ type_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_1__ const*,TYPE_1__ const*,char*,char*) ;

void FUNC_2(FILE *VAR_2, const type_t *VAR_3, const type_t *VAR_4)
{
    if (FUNC_0(VAR_3->attrs, VAR_1))
    {
        FUNC_1(VAR_2, VAR_3, VAR_4, "AlignSize", "SIZE_T");
        FUNC_1(VAR_2, VAR_3, VAR_4, "Encode", ((void*)0));
    }
    if (FUNC_0(VAR_3->attrs, VAR_0))
    {
        FUNC_1(VAR_2, VAR_3, VAR_4, "Decode", ((void*)0));
        FUNC_1(VAR_2, VAR_3, VAR_4, "Free", ((void*)0));
    }
}
