
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int cConnections; } ;
struct TYPE_8__ {TYPE_3__ connections_list; TYPE_3__* connections; } ;
typedef TYPE_1__ instrument_articulation ;
typedef int ULONG ;
struct TYPE_9__ {int nb_articulations; TYPE_1__* articulations; } ;
typedef int IStream ;
typedef TYPE_2__ IDirectMusicInstrumentImpl ;
typedef int HRESULT ;
typedef int CONNECTIONLIST ;
typedef int CONNECTION ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 TYPE_1__* FUNC_4 (int ,int ,TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_5 (int *,TYPE_3__*,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static HRESULT FUNC_7(IDirectMusicInstrumentImpl *VAR_2, IStream *VAR_3, ULONG VAR_4)
{
    HRESULT VAR_5;
    instrument_articulation *VAR_6;

    if (!VAR_2->articulations)
        VAR_2->articulations = FUNC_2(FUNC_1(), 0, sizeof(*VAR_2->articulations));
    else
        VAR_2->articulations = FUNC_4(FUNC_1(), 0, VAR_2->articulations, sizeof(*VAR_2->articulations) * (VAR_2->nb_articulations + 1));
    if (!VAR_2->articulations)
        return VAR_0;

    VAR_6 = &VAR_2->articulations[VAR_2->nb_articulations];

    VAR_5 = FUNC_5(VAR_3, &VAR_6->connections_list, sizeof(CONNECTIONLIST));
    if (FUNC_0(VAR_5))
        return VAR_5;

    VAR_6->connections = FUNC_2(FUNC_1(), 0, sizeof(CONNECTION) * VAR_6->connections_list.cConnections);
    if (!VAR_6->connections)
        return VAR_0;

    VAR_5 = FUNC_5(VAR_3, VAR_6->connections, sizeof(CONNECTION) * VAR_6->connections_list.cConnections);
    if (FUNC_0(VAR_5))
    {
        FUNC_3(FUNC_1(), 0, VAR_6->connections);
        return VAR_5;
    }

    FUNC_6(VAR_4, sizeof(CONNECTIONLIST) + sizeof(CONNECTION) * VAR_6->connections_list.cConnections);

    VAR_2->nb_articulations++;

    return VAR_1;
}
