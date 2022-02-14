
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Data2; int Data3; int* Data4; scalar_t__ Data1; } ;
typedef TYPE_1__ GUID ;


 int FUNC_0 (char*,size_t,char*,unsigned int,int,int,int,int,int,int,int,int,int,int) ;

char *FUNC_1(char *VAR_0, size_t VAR_1, const GUID *VAR_2)
{
    FUNC_0(VAR_0, VAR_1,
             "{%8.8x-%4.4x-%4.4x-%2.2x%2.2x-%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x}",
             (unsigned) VAR_2->Data1, VAR_2->Data2, VAR_2->Data3,
             VAR_2->Data4[0], VAR_2->Data4[1],
             VAR_2->Data4[2], VAR_2->Data4[3],
             VAR_2->Data4[4], VAR_2->Data4[5],
             VAR_2->Data4[6], VAR_2->Data4[7]);
    return VAR_0;
}
