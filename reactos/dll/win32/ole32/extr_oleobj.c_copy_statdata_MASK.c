
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwConnection; scalar_t__ pAdvSink; int advf; int formatetc; } ;
typedef TYPE_1__ STATDATA ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_3(STATDATA *VAR_1, const STATDATA *VAR_2)
{
    HRESULT VAR_3;

    VAR_3 = FUNC_2( &VAR_1->formatetc, &VAR_2->formatetc );
    if (FUNC_0(VAR_3)) return VAR_3;
    VAR_1->advf = VAR_2->advf;
    VAR_1->pAdvSink = VAR_2->pAdvSink;
    if (VAR_1->pAdvSink) FUNC_1( VAR_1->pAdvSink );
    VAR_1->dwConnection = VAR_2->dwConnection;
    return VAR_0;
}
