
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidp_session {int user; int conn; } ;
struct hidp_conndel_req {int flags; int bdaddr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hidp_session*,int,int *,int ) ;
 struct hidp_session* FUNC_2 (int *) ;
 int FUNC_3 (struct hidp_session*) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct hidp_conndel_req *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_4);
 struct hidp_session *VAR_7;

 if (VAR_5->flags & ~VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(&VAR_5->bdaddr);
 if (!VAR_7)
  return -VAR_1;

 if (VAR_5->flags & FUNC_0(VAR_4))
  FUNC_1(VAR_7,
           VAR_3 |
             VAR_2,
           ((void*)0), 0);
 else
  FUNC_4(VAR_7->conn, &VAR_7->user);

 FUNC_3(VAR_7);

 return 0;
}
