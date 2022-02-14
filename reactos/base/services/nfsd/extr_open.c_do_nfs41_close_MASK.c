
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stateid; int type; int * delegation; TYPE_2__* open; } ;
typedef TYPE_1__ stateid_arg ;
typedef int stateid4 ;
struct TYPE_6__ {int file; int session; int stateid; } ;
typedef TYPE_2__ nfs41_open_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(nfs41_open_state *VAR_2)
{
    int VAR_3;
    stateid_arg VAR_4;
    VAR_4.open = VAR_2;
    VAR_4.delegation = ((void*)0);
    VAR_4.type = VAR_1;
    FUNC_1(&VAR_4.stateid, &VAR_2->stateid, sizeof(stateid4));

    VAR_3 = FUNC_2(VAR_2->session, &VAR_2->file, &VAR_4);
    if (VAR_3) {
        FUNC_0(1, "nfs41_close() failed with error %s.\n",
            FUNC_3(VAR_3));
        VAR_3 = FUNC_4(VAR_3, VAR_0);
    }

    return VAR_3;
}
