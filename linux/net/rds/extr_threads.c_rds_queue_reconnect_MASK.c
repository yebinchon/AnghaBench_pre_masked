
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_connection {int c_faddr; int c_laddr; TYPE_1__* c_trans; } ;
struct rds_conn_path {unsigned long cp_reconnect_jiffies; int cp_conn_w; struct rds_connection* cp_conn; int cp_flags; } ;
typedef int rand ;
struct TYPE_2__ {scalar_t__ t_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long*,int) ;
 unsigned long FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (struct rds_connection*) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(struct rds_conn_path *VAR_5)
{
 unsigned long VAR_6;
 struct rds_connection *VAR_7 = VAR_5->cp_conn;

 FUNC_7("conn %p for %pI6c to %pI6c reconnect jiffies %lu\n",
   VAR_7, &VAR_7->c_laddr, &VAR_7->c_faddr,
   VAR_5->cp_reconnect_jiffies);


 if (VAR_7->c_trans->t_type == VAR_1 &&
     FUNC_5(&VAR_7->c_laddr, &VAR_7->c_faddr) >= 0)
  return;

 FUNC_8(VAR_0, &VAR_5->cp_flags);
 if (VAR_5->cp_reconnect_jiffies == 0) {
  VAR_5->cp_reconnect_jiffies = VAR_3;
  FUNC_3();
  if (!FUNC_6(VAR_5->cp_conn))
   FUNC_2(VAR_4, &VAR_5->cp_conn_w, 0);
  FUNC_4();
  return;
 }

 FUNC_0(&VAR_6, sizeof(VAR_6));
 FUNC_7("%lu delay %lu ceil conn %p for %pI6c -> %pI6c\n",
   VAR_6 % VAR_5->cp_reconnect_jiffies, VAR_5->cp_reconnect_jiffies,
   VAR_7, &VAR_7->c_laddr, &VAR_7->c_faddr);
 FUNC_3();
 if (!FUNC_6(VAR_5->cp_conn))
  FUNC_2(VAR_4, &VAR_5->cp_conn_w,
       VAR_6 % VAR_5->cp_reconnect_jiffies);
 FUNC_4();

 VAR_5->cp_reconnect_jiffies = FUNC_1(VAR_5->cp_reconnect_jiffies * 2,
     VAR_2);
}
