
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tx ;
struct timex {int tai; } ;


 int FUNC_0 (struct timex*) ;
 int FUNC_1 (struct timex*,int ,int) ;

int FUNC_2(void)
{
 struct timex VAR_0;

 FUNC_1(&VAR_0, 0, sizeof(VAR_0));

 FUNC_0(&VAR_0);
 return VAR_0.tai;
}
