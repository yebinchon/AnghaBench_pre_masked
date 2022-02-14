
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_session {int dummy; } ;
struct j1939_priv {int active_session_list; } ;
struct j1939_addr {int dummy; } ;


 struct j1939_session* FUNC_0 (struct j1939_priv*,int *,struct j1939_addr*,int,int) ;
 int FUNC_1 (struct j1939_priv*) ;
 int FUNC_2 (struct j1939_priv*) ;

__attribute__((used)) static struct
j1939_session *FUNC_3(struct j1939_priv *VAR_0,
      struct j1939_addr *VAR_1,
      bool VAR_2, bool VAR_3)
{
 struct j1939_session *VAR_4;

 FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_0,
         &VAR_0->active_session_list,
         VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0);

 return VAR_4;
}
