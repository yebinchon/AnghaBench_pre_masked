
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fgraph_ops {int entryfunc; int retfunc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(struct fgraph_ops *VAR_10)
{
 int VAR_11 = 0;

 FUNC_1(&VAR_7);


 if (VAR_3) {
  VAR_11 = -VAR_0;
  goto out;
 }

 FUNC_3(&VAR_8);

 VAR_3++;
 VAR_11 = FUNC_4();
 if (VAR_11) {
  VAR_3--;
  goto out;
 }

 VAR_6 = VAR_10->retfunc;







 VAR_2 = VAR_10->entryfunc;
 VAR_4 = VAR_5;
 FUNC_5();

 VAR_11 = FUNC_0(&VAR_9, VAR_1);
out:
 FUNC_2(&VAR_7);
 return VAR_11;
}
