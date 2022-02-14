
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int session_id; } ;
typedef TYPE_1__ nfs41_session ;
struct TYPE_7__ {int sa_cachethis; int sa_sessionid; int sa_highest_slotid; int sa_sequenceid; int sa_slotid; } ;
typedef TYPE_2__ nfs41_sequence_args ;
typedef int bool_t ;


 int FUNC_0 (TYPE_1__*,int *,int *,int *) ;

void FUNC_1(
    nfs41_sequence_args *VAR_0,
    nfs41_session *VAR_1,
    bool_t VAR_2)
{
    FUNC_0(VAR_1, &VAR_0->sa_slotid,
        &VAR_0->sa_sequenceid, &VAR_0->sa_highest_slotid);
    VAR_0->sa_sessionid = VAR_1->session_id;
    VAR_0->sa_cachethis = VAR_2;
}
