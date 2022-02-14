
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_trans_fd {TYPE_1__* wr; } ;
struct p9_client {scalar_t__ status; struct p9_trans_fd* trans; } ;
typedef int ssize_t ;
struct TYPE_2__ {int f_flags; int f_pos; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,void*,int,int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct p9_client *VAR_6, void *VAR_7, int VAR_8)
{
 ssize_t VAR_9;
 struct p9_trans_fd *VAR_10 = ((void*)0);

 if (VAR_6 && VAR_6->status != VAR_0)
  VAR_10 = VAR_6->trans;

 if (!VAR_10)
  return -VAR_2;

 if (!(VAR_10->wr->f_flags & VAR_4))
  FUNC_1(VAR_5, "blocking write ...\n");

 VAR_9 = FUNC_0(VAR_10->wr, VAR_7, VAR_8, &VAR_10->wr->f_pos);
 if (VAR_9 <= 0 && VAR_9 != -VAR_3 && VAR_9 != -VAR_1)
  VAR_6->status = VAR_0;
 return VAR_9;
}
