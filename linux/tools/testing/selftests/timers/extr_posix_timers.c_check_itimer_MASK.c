
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_2__ {int tv_sec; } ;
struct itimerval {TYPE_1__ it_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct timeval,struct timeval) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,struct itimerval*,int *) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ) ;
 int VAR_9 ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(int VAR_10)
{
 int VAR_11;
 struct timeval VAR_12, VAR_13;
 struct itimerval VAR_14 = {
  .it_value.tv_sec = VAR_0,
 };

 FUNC_6("Check itimer ");

 if (VAR_10 == VAR_3)
  FUNC_6("virtual... ");
 else if (VAR_10 == VAR_1)
  FUNC_6("prof... ");
 else if (VAR_10 == VAR_2)
  FUNC_6("real... ");

 FUNC_1(VAR_9);

 VAR_7 = 0;

 if (VAR_10 == VAR_3)
  FUNC_8(VAR_6, VAR_8);
 else if (VAR_10 == VAR_1)
  FUNC_8(VAR_5, VAR_8);
 else if (VAR_10 == VAR_2)
  FUNC_8(VAR_4, VAR_8);

 VAR_11 = FUNC_2(&VAR_12, ((void*)0));
 if (VAR_11 < 0) {
  FUNC_5("Can't call gettimeofday()\n");
  return -1;
 }

 VAR_11 = FUNC_7(VAR_10, &VAR_14, ((void*)0));
 if (VAR_11 < 0) {
  FUNC_5("Can't set timer\n");
  return -1;
 }

 if (VAR_10 == VAR_3)
  FUNC_9();
 else if (VAR_10 == VAR_1)
  FUNC_4();
 else if (VAR_10 == VAR_2)
  FUNC_3();

 VAR_11 = FUNC_2(&VAR_13, ((void*)0));
 if (VAR_11 < 0) {
  FUNC_5("Can't call gettimeofday()\n");
  return -1;
 }

 if (!FUNC_0(VAR_12, VAR_13))
  FUNC_6("[OK]\n");
 else
  FUNC_6("[FAIL]\n");

 return 0;
}
