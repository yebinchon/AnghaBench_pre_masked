
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnep_session {int dummy; } ;
struct bnep_conninfo {int dst; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnep_conninfo*,struct bnep_session*) ;
 struct bnep_session* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct bnep_conninfo *VAR_2)
{
 struct bnep_session *VAR_3;
 int VAR_4 = 0;

 FUNC_2(&VAR_1);

 VAR_3 = FUNC_1(VAR_2->dst);
 if (VAR_3)
  FUNC_0(VAR_2, VAR_3);
 else
  VAR_4 = -VAR_0;

 FUNC_3(&VAR_1);
 return VAR_4;
}
