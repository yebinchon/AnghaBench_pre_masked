
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ unk; } ;
struct TYPE_4__ {size_t sinks_size; TYPE_2__* sinks; } ;
typedef size_t DWORD ;
typedef TYPE_1__ ConnectionPoint ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(ConnectionPoint *VAR_0)
{
    DWORD VAR_1;

    for(VAR_1=0; VAR_1<VAR_0->sinks_size; VAR_1++) {
        if(VAR_0->sinks[VAR_1].unk)
            FUNC_0(VAR_0->sinks[VAR_1].unk);
    }

    FUNC_1(VAR_0->sinks);
}
