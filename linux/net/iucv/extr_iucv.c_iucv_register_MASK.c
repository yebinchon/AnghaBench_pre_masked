
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iucv_handler {int list; int paths; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct iucv_handler *VAR_6, int VAR_7)
{
 int VAR_8;

 if (!VAR_1)
  return -VAR_0;
 FUNC_5(&VAR_4);
 if (!VAR_7)
  VAR_3++;
 if (FUNC_4(&VAR_2)) {
  VAR_8 = FUNC_1();
  if (VAR_8)
   goto out_mutex;
 } else if (!VAR_7 && VAR_3 == 1)
  FUNC_2();
 FUNC_0(&VAR_6->paths);

 FUNC_7(&VAR_5);
 FUNC_3(&VAR_6->list, &VAR_2);
 FUNC_8(&VAR_5);
 VAR_8 = 0;
out_mutex:
 FUNC_6(&VAR_4);
 return VAR_8;
}
