
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnep_session {TYPE_1__* sock; int terminate; } ;
struct bnep_conndel_req {int flags; int dst; } ;
struct TYPE_2__ {int sk; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bnep_session* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct bnep_conndel_req *VAR_3)
{
 u32 VAR_4 = 0;
 struct bnep_session *VAR_5;
 int VAR_6 = 0;

 FUNC_0("");

 if (VAR_3->flags & ~VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_2);

 VAR_5 = FUNC_1(VAR_3->dst);
 if (VAR_5) {
  FUNC_2(&VAR_5->terminate);
  FUNC_6(FUNC_4(VAR_5->sock->sk));
 } else
  VAR_6 = -VAR_1;

 FUNC_5(&VAR_2);
 return VAR_6;
}
