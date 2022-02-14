
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int dummy; } ;


 int FUNC_0 (struct hrtimer*) ;
 int FUNC_1 (struct hrtimer*) ;

int FUNC_2(struct hrtimer *VAR_0)
{
 int VAR_1;

 do {
  VAR_1 = FUNC_1(VAR_0);

  if (VAR_1 < 0)
   FUNC_0(VAR_0);
 } while (VAR_1 < 0);
 return VAR_1;
}
