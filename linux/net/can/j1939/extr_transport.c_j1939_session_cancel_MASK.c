
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pgn; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct j1939_session {int err; scalar_t__ sk; TYPE_2__ skcb; int transmission; int state; struct j1939_priv* priv; } ;
struct j1939_priv {int dummy; } ;
typedef enum j1939_xtp_abort { ____Placeholder_j1939_xtp_abort } j1939_xtp_abort ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct j1939_priv*,int) ;
 int FUNC_4 (struct j1939_priv*,TYPE_2__*,int,int,int ) ;

__attribute__((used)) static void FUNC_5(struct j1939_session *VAR_1,
     enum j1939_xtp_abort VAR_2)
{
 struct j1939_priv *VAR_3 = VAR_1->priv;

 FUNC_0(!VAR_2);

 VAR_1->err = FUNC_3(VAR_3, VAR_2);

 if (!FUNC_1(&VAR_1->skcb)) {
  VAR_1->state = VAR_0;
  FUNC_4(VAR_3, &VAR_1->skcb,
       !VAR_1->transmission,
       VAR_2, VAR_1->skcb.addr.pgn);
 }

 if (VAR_1->sk)
  FUNC_2(VAR_1->sk, VAR_1->err);
}
