
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppol2tp_ioc_stats {int session_id; } ;
struct l2tp_tunnel {int stats; } ;
struct l2tp_session {scalar_t__ pwtype; int stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct l2tp_session*) ;
 struct l2tp_session* FUNC_1 (struct l2tp_tunnel*,int ) ;
 int FUNC_2 (struct pppol2tp_ioc_stats*,int *) ;

__attribute__((used)) static int FUNC_3(struct pppol2tp_ioc_stats *VAR_2,
          struct l2tp_tunnel *VAR_3)
{
 struct l2tp_session *VAR_4;

 if (!VAR_2->session_id) {
  FUNC_2(VAR_2, &VAR_3->stats);
  return 0;
 }




 VAR_4 = FUNC_1(VAR_3, VAR_2->session_id);
 if (!VAR_4)
  return -VAR_0;

 if (VAR_4->pwtype != VAR_1) {
  FUNC_0(VAR_4);
  return -VAR_0;
 }

 FUNC_2(VAR_2, &VAR_4->stats);
 FUNC_0(VAR_4);

 return 0;
}
