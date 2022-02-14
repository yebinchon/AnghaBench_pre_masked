
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torture_random_state {int dummy; } ;
struct rt_read_seg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct torture_random_state*) ;
 int FUNC_2 () ;
 int FUNC_3 (int*,int,struct torture_random_state*,struct rt_read_seg*) ;
 int FUNC_4 (struct torture_random_state*) ;

__attribute__((used)) static struct rt_read_seg *
FUNC_5(int *VAR_1, struct torture_random_state *VAR_2,
         struct rt_read_seg *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6 = FUNC_2();

 FUNC_0(!*VAR_1);
 if (!((VAR_6 - 1) & VAR_6))
  return VAR_3;

 VAR_4 = (FUNC_4(VAR_2) >> 3);
 VAR_4 = ((VAR_4 | (VAR_4 >> 3)) & VAR_0) + 1;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_1(*VAR_1, VAR_2);
  FUNC_3(VAR_1, VAR_6, VAR_2, &VAR_3[VAR_5]);
 }
 return &VAR_3[VAR_5];
}
