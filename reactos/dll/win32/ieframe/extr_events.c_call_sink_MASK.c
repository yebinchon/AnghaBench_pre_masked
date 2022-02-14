
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t sinks_size; scalar_t__* sinks; } ;
typedef size_t DWORD ;
typedef int DISPPARAMS ;
typedef int DISPID ;
typedef TYPE_1__ ConnectionPoint ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int *,int ,int ,int *,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(ConnectionPoint *VAR_3, DISPID VAR_4, DISPPARAMS *VAR_5)
{
    DWORD VAR_6;

    for(VAR_6=0; VAR_6<VAR_3->sinks_size; VAR_6++) {
        if(VAR_3->sinks[VAR_6])
            FUNC_0(VAR_3->sinks[VAR_6], VAR_4, &VAR_1, VAR_2,
                             VAR_0, VAR_5, ((void*)0), ((void*)0), ((void*)0));
    }
}
