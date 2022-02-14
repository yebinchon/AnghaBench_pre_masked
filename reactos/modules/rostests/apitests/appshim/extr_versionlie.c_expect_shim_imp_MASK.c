
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FunctionName; int LibraryName; } ;
typedef TYPE_1__* PHOOKAPI ;
typedef int PCSTR ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,int ,int ,int ) ;

void FUNC_2(PHOOKAPI VAR_0, PCSTR VAR_1, PCSTR VAR_2, PCSTR VAR_3, int* VAR_4)
{
    int VAR_5 = FUNC_0(VAR_1, VAR_0->LibraryName);
    int VAR_6 = FUNC_0(VAR_2, VAR_0->FunctionName);
    FUNC_1(VAR_5 == 0, "Expected LibrarayName to be %s, was: %s for %s\n", VAR_1, VAR_0->LibraryName, VAR_3);
    FUNC_1(VAR_6 == 0, "Expected FunctionName to be %s, was: %s for %s\n", VAR_2, VAR_0->FunctionName, VAR_3);
    *VAR_4 = (VAR_5 == 0 && VAR_6 == 0);
}
