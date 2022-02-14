
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int dummy; } ;
struct hidp_conninfo {int bdaddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct hidp_session*,struct hidp_conninfo*) ;
 struct hidp_session* FUNC_1 (int *) ;
 int FUNC_2 (struct hidp_session*) ;

int FUNC_3(struct hidp_conninfo *VAR_1)
{
 struct hidp_session *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->bdaddr);
 if (VAR_2) {
  FUNC_0(VAR_2, VAR_1);
  FUNC_2(VAR_2);
 }

 return VAR_2 ? 0 : -VAR_0;
}
