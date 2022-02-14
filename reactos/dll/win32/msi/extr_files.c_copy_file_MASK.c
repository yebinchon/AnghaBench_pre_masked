
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int TargetPath; } ;
typedef TYPE_1__ MSIFILE ;
typedef int LPWSTR ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static UINT FUNC_3(MSIFILE *VAR_3, LPWSTR VAR_4)
{
    BOOL VAR_5;

    VAR_5 = FUNC_0(VAR_4, VAR_3->TargetPath, VAR_1);
    if (!VAR_5)
        return FUNC_1();

    FUNC_2(VAR_3->TargetPath, VAR_2);
    return VAR_0;
}
