
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmtp_session {int dummy; } ;
struct cmtp_conninfo {int bdaddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmtp_session*,struct cmtp_conninfo*) ;
 struct cmtp_session* FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct cmtp_conninfo *VAR_2)
{
 struct cmtp_session *VAR_3;
 int VAR_4 = 0;

 FUNC_2(&VAR_1);

 VAR_3 = FUNC_1(&VAR_2->bdaddr);
 if (VAR_3)
  FUNC_0(VAR_3, VAR_2);
 else
  VAR_4 = -VAR_0;

 FUNC_3(&VAR_1);
 return VAR_4;
}
