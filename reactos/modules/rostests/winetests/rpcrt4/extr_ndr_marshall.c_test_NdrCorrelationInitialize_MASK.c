
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int stub_msg ;
typedef int buf ;
struct TYPE_6__ {int CorrDespIncrement; } ;
typedef TYPE_1__ MIDL_STUB_MESSAGE ;
typedef TYPE_1__ BYTE ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    MIDL_STUB_MESSAGE VAR_0;
    BYTE VAR_1[256];

    FUNC_2( &VAR_0, 0, sizeof(VAR_0) );
    FUNC_2( VAR_1, 0, sizeof(VAR_1) );

    FUNC_0( &VAR_0, VAR_1, sizeof(VAR_1), 0 );
    FUNC_3( VAR_0.CorrDespIncrement == 2 ||
        FUNC_1(VAR_0.CorrDespIncrement == 0),
        "got %d\n", VAR_0.CorrDespIncrement );

    FUNC_2( &VAR_0, 0, sizeof(VAR_0) );
    FUNC_2( VAR_1, 0, sizeof(VAR_1) );

    VAR_0.CorrDespIncrement = 1;
    FUNC_0( &VAR_0, VAR_1, sizeof(VAR_1), 0 );
    FUNC_3( VAR_0.CorrDespIncrement == 1, "got %d\n", VAR_0.CorrDespIncrement );
}
