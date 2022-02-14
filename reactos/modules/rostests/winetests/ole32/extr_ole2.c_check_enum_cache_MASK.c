
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tymed; int lindex; int dwAspect; int ptd; int cfFormat; } ;
struct TYPE_6__ {scalar_t__ pAdvSink; int dwConnection; int advf; TYPE_1__ formatetc; } ;
typedef TYPE_2__ STATDATA ;
typedef int IOleCache2 ;
typedef int IEnumSTATDATA ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int,TYPE_2__*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_4(IOleCache2 *VAR_1, const STATDATA *VAR_2, int VAR_3)
{
    IEnumSTATDATA *VAR_4;
    STATDATA VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_2( VAR_1, &VAR_4 );
    FUNC_3( VAR_6 == VAR_0, "got %08x\n", VAR_6 );

    while (FUNC_0(VAR_4, 1, &VAR_5, ((void*)0)) == VAR_0)
    {
        FUNC_3( VAR_5.formatetc.cfFormat == VAR_2->formatetc.cfFormat, "got %d expect %d\n",
            VAR_5.formatetc.cfFormat, VAR_2->formatetc.cfFormat );
        FUNC_3( !VAR_5.formatetc.ptd == !VAR_2->formatetc.ptd, "got %p expect %p\n",
            VAR_5.formatetc.ptd, VAR_2->formatetc.ptd );
        FUNC_3( VAR_5.formatetc.dwAspect == VAR_2->formatetc.dwAspect, "got %d expect %d\n",
            VAR_5.formatetc.dwAspect, VAR_2->formatetc.dwAspect );
        FUNC_3( VAR_5.formatetc.lindex == VAR_2->formatetc.lindex, "got %d expect %d\n",
            VAR_5.formatetc.lindex, VAR_2->formatetc.lindex );
        FUNC_3( VAR_5.formatetc.tymed == VAR_2->formatetc.tymed, "got %d expect %d\n",
            VAR_5.formatetc.tymed, VAR_2->formatetc.tymed );
        FUNC_3( VAR_5.advf == VAR_2->advf, "got %d expect %d\n", VAR_5.advf, VAR_2->advf );
        FUNC_3( VAR_5.pAdvSink == 0, "got %p\n", VAR_5.pAdvSink );
        FUNC_3( VAR_5.dwConnection == VAR_2->dwConnection, "got %d expect %d\n", VAR_5.dwConnection, VAR_2->dwConnection );
        VAR_3--;
        VAR_2++;
    }

    FUNC_3( VAR_3 == 0, "incorrect number. num %d\n", VAR_3 );

    FUNC_1( VAR_4 );
}
