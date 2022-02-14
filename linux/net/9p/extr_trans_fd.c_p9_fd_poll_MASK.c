
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct p9_trans_fd {scalar_t__ rd; scalar_t__ wr; } ;
struct p9_client {scalar_t__ status; struct p9_trans_fd* trans; } ;
typedef int __poll_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t
FUNC_1(struct p9_client *VAR_5, struct poll_table_struct *VAR_6, int *VAR_7)
{
 __poll_t VAR_8;
 struct p9_trans_fd *VAR_9 = ((void*)0);

 if (VAR_5 && VAR_5->status == VAR_0)
  VAR_9 = VAR_5->trans;

 if (!VAR_9) {
  if (VAR_7)
   *VAR_7 = -VAR_4;
  return VAR_1;
 }

 VAR_8 = FUNC_0(VAR_9->rd, VAR_6);
 if (VAR_9->rd != VAR_9->wr)
  VAR_8 = (VAR_8 & ~VAR_3) | (FUNC_0(VAR_9->wr, VAR_6) & ~VAR_2);
 return VAR_8;
}
