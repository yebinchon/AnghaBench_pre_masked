
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_sock {int dummy; } ;
struct rds_connection {int c_npaths; int c_hs_waitq; } ;


 int FUNC_0 (struct rds_sock*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct rds_connection*,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct rds_sock *VAR_1,
          struct rds_connection *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2->c_npaths == 0)
  VAR_4 = FUNC_0(VAR_1, VAR_0);
 else
  VAR_4 = FUNC_0(VAR_1, VAR_2->c_npaths);
 if (VAR_2->c_npaths == 0 && VAR_4 != 0) {
  FUNC_1(VAR_2, 0);






  if (VAR_2->c_npaths == 0) {



   if (VAR_3)
    return 0;
   if (FUNC_2(VAR_2->c_hs_waitq,
           VAR_2->c_npaths != 0))
    VAR_4 = 0;
  }
  if (VAR_2->c_npaths == 1)
   VAR_4 = 0;
 }
 return VAR_4;
}
