
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_trans_fd {scalar_t__ wr; scalar_t__ rd; int conn; } ;
struct p9_client {int status; struct p9_trans_fd* trans; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct p9_trans_fd*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct p9_client *VAR_1)
{
 struct p9_trans_fd *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->trans;
 if (!VAR_2)
  return;

 VAR_1->status = VAR_0;

 FUNC_2(&VAR_2->conn);

 if (VAR_2->rd)
  FUNC_0(VAR_2->rd);
 if (VAR_2->wr)
  FUNC_0(VAR_2->wr);

 FUNC_1(VAR_2);
}
