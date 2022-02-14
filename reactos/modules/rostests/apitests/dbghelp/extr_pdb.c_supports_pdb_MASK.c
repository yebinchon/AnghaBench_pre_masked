
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int SizeOfStruct; scalar_t__ SymType; } ;
typedef int ModuleInfo ;
typedef TYPE_1__ IMAGEHLP_MODULE64 ;
typedef int HANDLE ;
typedef int DWORD64 ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_2(HANDLE VAR_1, DWORD64 VAR_2)
{
    IMAGEHLP_MODULE64 VAR_3;
    BOOL VAR_4;

    FUNC_1(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.SizeOfStruct = sizeof(VAR_3);
    VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3);

    return VAR_4 && VAR_3.SymType == VAR_0;
}
