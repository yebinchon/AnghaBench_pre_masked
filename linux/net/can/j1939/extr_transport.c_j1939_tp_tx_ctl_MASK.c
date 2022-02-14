
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int pgn; } ;
struct TYPE_4__ {TYPE_1__ addr; } ;
struct j1939_session {TYPE_2__ skcb; struct j1939_priv* priv; } ;
struct j1939_priv {int dummy; } ;


 int FUNC_0 (struct j1939_priv*,TYPE_2__*,int,int ,int const*) ;

__attribute__((used)) static inline int FUNC_1(struct j1939_session *VAR_0,
      bool VAR_1, const u8 *VAR_2)
{
 struct j1939_priv *VAR_3 = VAR_0->priv;

 return FUNC_0(VAR_3, &VAR_0->skcb,
       VAR_1,
       VAR_0->skcb.addr.pgn, VAR_2);
}
