
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_session {TYPE_1__* opt; struct key_state* key; } ;
struct key_state {int remote_addr; int session_id_remote; scalar_t__ must_die; } ;
struct TYPE_2__ {scalar_t__ transition_window; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct key_state*,int) ;
 int FUNC_1 (struct tls_session*,struct key_state*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct tls_session *VAR_3)
{
    struct key_state *VAR_4 = &VAR_3->key[VAR_1];
    struct key_state *VAR_5 = &VAR_3->key[VAR_0];

    VAR_4->must_die = VAR_2 + VAR_3->opt->transition_window;
    FUNC_0(VAR_5, 0);
    *VAR_5 = *VAR_4;

    FUNC_1(VAR_3, VAR_4);
    VAR_4->session_id_remote = VAR_5->session_id_remote;
    VAR_4->remote_addr = VAR_5->remote_addr;
}
