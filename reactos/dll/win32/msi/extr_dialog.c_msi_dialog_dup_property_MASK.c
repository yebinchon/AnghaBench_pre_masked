
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* package; } ;
typedef TYPE_2__ msi_dialog ;
struct TYPE_4__ {int db; } ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static LPWSTR FUNC_2( msi_dialog *VAR_0, LPCWSTR VAR_1, BOOL VAR_2 )
{
    LPWSTR VAR_3 = ((void*)0);

    if (!VAR_1)
        return ((void*)0);

    if (VAR_2)
        VAR_3 = FUNC_0( VAR_0->package->db, VAR_1 );

    if (!VAR_3)
        VAR_3 = FUNC_1( VAR_1 );

    return VAR_3;
}
