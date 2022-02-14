
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;
 long long FUNC_1 (struct timespec,struct timespec) ;
 struct timespec FUNC_2 (long long) ;
 int FUNC_3 (struct timespec) ;

void FUNC_4(struct timespec *VAR_2, struct timespec *VAR_3)
{
 struct timespec VAR_4, VAR_5, VAR_6;
 long long VAR_7 = 0, VAR_8;
 int VAR_9;

 FUNC_0(VAR_0, VAR_2);
 FUNC_0(VAR_1, VAR_3);


 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  long long VAR_10;

  FUNC_0(VAR_0, &VAR_4);
  FUNC_0(VAR_1, &VAR_5);
  FUNC_0(VAR_0, &VAR_6);

  VAR_10 = FUNC_1(VAR_4, VAR_6);
  if (VAR_7 == 0 || VAR_10 < VAR_7) {
   VAR_7 = VAR_10;
   *VAR_3 = VAR_5;
   VAR_8 = (FUNC_3(VAR_4) + FUNC_3(VAR_6))/2;
   *VAR_2 = FUNC_2(VAR_8);
  }
 }
}
