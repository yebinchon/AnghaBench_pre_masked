
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_lock; int f_wb_err; struct address_space* f_mapping; } ;
struct address_space {int flags; int wb_err; } ;
typedef int errseq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct file*,int ) ;

int FUNC_7(struct file *VAR_2)
{
 int VAR_3 = 0;
 errseq_t VAR_4 = FUNC_0(VAR_2->f_wb_err);
 struct address_space *VAR_5 = VAR_2->f_mapping;


 if (FUNC_2(&VAR_5->wb_err, VAR_4)) {

  FUNC_4(&VAR_2->f_lock);
  VAR_4 = VAR_2->f_wb_err;
  VAR_3 = FUNC_3(&VAR_5->wb_err,
      &VAR_2->f_wb_err);
  FUNC_6(VAR_2, VAR_4);
  FUNC_5(&VAR_2->f_lock);
 }






 FUNC_1(VAR_0, &VAR_5->flags);
 FUNC_1(VAR_1, &VAR_5->flags);
 return VAR_3;
}
