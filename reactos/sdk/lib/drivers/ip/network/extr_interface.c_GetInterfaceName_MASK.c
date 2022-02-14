
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ULONG ;
typedef int UINT ;
struct TYPE_4__ {int Length; int Buffer; } ;
struct TYPE_5__ {TYPE_1__ Name; } ;
typedef TYPE_2__* PIP_INTERFACE ;
typedef scalar_t__* PCHAR ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,int ,size_t*,int ,int ) ;

NTSTATUS FUNC_2( PIP_INTERFACE VAR_0,
      PCHAR VAR_1,
      UINT VAR_2 ) {
    ULONG VAR_3 = 0;
    NTSTATUS VAR_4 =
 FUNC_1( VAR_1,
    VAR_2,
    &VAR_3,
    VAR_0->Name.Buffer,
    VAR_0->Name.Length );

    if( FUNC_0(VAR_4) )
 VAR_1[VAR_3] = 0;
    else
 VAR_1[0] = 0;

    return VAR_4;
}
