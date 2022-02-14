
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_info {int wait; int retval; int * complete; int work; int path; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct subprocess_info*) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int **,int *) ;

int FUNC_9(struct subprocess_info *VAR_7, int VAR_8)
{
 FUNC_0(VAR_4);
 int VAR_9 = 0;

 if (!VAR_7->path) {
  FUNC_1(VAR_7);
  return -VAR_1;
 }
 FUNC_2();
 if (VAR_6) {
  VAR_9 = -VAR_0;
  goto out;
 }






 if (FUNC_5(VAR_7->path) == 0)
  goto out;






 VAR_7->complete = (VAR_8 == VAR_3) ? ((void*)0) : &VAR_4;
 VAR_7->wait = VAR_8;

 FUNC_4(VAR_5, &VAR_7->work);
 if (VAR_8 == VAR_3)
  goto unlock;

 if (VAR_8 & VAR_2) {
  VAR_9 = FUNC_7(&VAR_4);
  if (!VAR_9)
   goto wait_done;


  if (FUNC_8(&VAR_7->complete, ((void*)0)))
   goto unlock;

 }

 FUNC_6(&VAR_4);
wait_done:
 VAR_9 = VAR_7->retval;
out:
 FUNC_1(VAR_7);
unlock:
 FUNC_3();
 return VAR_9;
}
