
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {unsigned long locked_shm; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct user_struct*) ;
 unsigned long FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(size_t VAR_6, struct user_struct *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_9 = (VAR_6 + VAR_2 - 1) >> VAR_1;
 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8 == VAR_4)
  VAR_10 = 1;
 VAR_8 >>= VAR_1;
 FUNC_3(&VAR_5);
 if (!VAR_10 &&
     VAR_9 + VAR_7->locked_shm > VAR_8 && !FUNC_0(VAR_0))
  goto out;
 FUNC_1(VAR_7);
 VAR_7->locked_shm += VAR_9;
 VAR_10 = 1;
out:
 FUNC_4(&VAR_5);
 return VAR_10;
}
