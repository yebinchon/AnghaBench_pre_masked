
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 long long VAR_0 ;
 long long FUNC_0 (struct timespec,struct timespec) ;
 int FUNC_1 (struct timespec*,struct timespec*) ;
 int FUNC_2 (int) ;

long long FUNC_3(void)
{
 struct timespec VAR_1, VAR_2, VAR_3, VAR_4;
 long long VAR_5, VAR_6, VAR_7;

 FUNC_1(&VAR_1, &VAR_2);

 FUNC_2(15);

 FUNC_1(&VAR_3, &VAR_4);

 VAR_5 = FUNC_0(VAR_1, VAR_3);
 VAR_6 = FUNC_0(VAR_2, VAR_4);

 VAR_7 = (VAR_5*VAR_0)/VAR_6 - VAR_0;

 return VAR_7;
}
