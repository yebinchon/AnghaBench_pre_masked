
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int hash; int TargetPath; } ;
struct TYPE_6__ {int dwFileHashInfoSize; } ;
typedef TYPE_1__ MSIFILEHASHINFO ;
typedef TYPE_2__ MSIFILE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;

BOOL FUNC_2( MSIFILE *VAR_2 )
{
    UINT VAR_3;
    MSIFILEHASHINFO VAR_4;

    VAR_4.dwFileHashInfoSize = sizeof(MSIFILEHASHINFO);
    VAR_3 = FUNC_1( VAR_2->TargetPath, &VAR_4 );
    if (VAR_3 != VAR_0)
        return VAR_1;

    return !FUNC_0( &VAR_4, &VAR_2->hash, sizeof(MSIFILEHASHINFO) );
}
