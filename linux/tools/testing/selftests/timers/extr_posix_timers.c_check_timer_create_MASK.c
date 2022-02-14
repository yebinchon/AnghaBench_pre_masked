
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int timer_t ;
struct timeval {int dummy; } ;
struct TYPE_2__ {int tv_sec; } ;
struct itimerspec {TYPE_1__ it_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timeval,struct timeval) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int,int *,int *) ;
 int FUNC_7 (int ,int ,struct itimerspec*,int *) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(int VAR_7)
{
 int VAR_8;
 timer_t VAR_9;
 struct timeval VAR_10, VAR_11;
 struct itimerspec VAR_12 = {
  .it_value.tv_sec = VAR_2,
 };

 FUNC_4("Check timer_create() ");
 if (VAR_7 == VAR_1) {
  FUNC_4("per thread... ");
 } else if (VAR_7 == VAR_0) {
  FUNC_4("per process... ");
 }
 FUNC_1(VAR_6);

 VAR_4 = 0;
 VAR_8 = FUNC_6(VAR_7, ((void*)0), &VAR_9);
 if (VAR_8 < 0) {
  FUNC_3("Can't create timer\n");
  return -1;
 }
 FUNC_5(VAR_3, VAR_5);

 VAR_8 = FUNC_2(&VAR_10, ((void*)0));
 if (VAR_8 < 0) {
  FUNC_3("Can't call gettimeofday()\n");
  return -1;
 }

 VAR_8 = FUNC_7(VAR_9, 0, &VAR_12, ((void*)0));
 if (VAR_8 < 0) {
  FUNC_3("Can't set timer\n");
  return -1;
 }

 FUNC_8();

 VAR_8 = FUNC_2(&VAR_11, ((void*)0));
 if (VAR_8 < 0) {
  FUNC_3("Can't call gettimeofday()\n");
  return -1;
 }

 if (!FUNC_0(VAR_10, VAR_11))
  FUNC_4("[OK]\n");
 else
  FUNC_4("[FAIL]\n");

 return 0;
}
