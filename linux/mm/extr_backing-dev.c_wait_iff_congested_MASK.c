
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * VAR_1 ;
 int FUNC_3 (int *,int *) ;
 long FUNC_4 (long) ;
 unsigned long VAR_2 ;
 int FUNC_5 (unsigned long) ;
 int * VAR_3 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;

long FUNC_8(int VAR_5, long VAR_6)
{
 long VAR_7;
 unsigned long VAR_8 = VAR_2;
 FUNC_0(VAR_4);
 wait_queue_head_t *VAR_9 = &VAR_1[VAR_5];





 if (FUNC_1(&VAR_3[VAR_5]) == 0) {
  FUNC_2();


  VAR_7 = VAR_6 - (VAR_2 - VAR_8);
  if (VAR_7 < 0)
   VAR_7 = 0;

  goto out;
 }


 FUNC_6(VAR_9, &VAR_4, VAR_0);
 VAR_7 = FUNC_4(VAR_6);
 FUNC_3(VAR_9, &VAR_4);

out:
 FUNC_7(FUNC_5(VAR_6),
     FUNC_5(VAR_2 - VAR_8));

 return VAR_7;
}
