
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char**,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(int VAR_5, char *VAR_6[])
{
 int VAR_7 = 0;
 int VAR_8, VAR_9 = 0;
 time_t VAR_10;


 while ((VAR_8 = FUNC_1(VAR_5, VAR_6, "d")) != -1) {
  switch (VAR_8) {
  case 'd':
   VAR_9 = 1;
  }
 }

 VAR_10 = FUNC_6(0);


 if (!FUNC_5(VAR_0)) {
  VAR_7 = -1;
  goto out;
 }
 if (!FUNC_5(VAR_4)) {
  VAR_7 = -1;
  goto out;
 }
 if (!FUNC_2() && !FUNC_5(VAR_3)) {
  VAR_7 = -1;
  goto out;
 }


 FUNC_5(VAR_1);
 VAR_7 = FUNC_0();
 if (VAR_7)
  goto out;

 FUNC_5(VAR_2 - 600);
 VAR_7 = FUNC_0();
 if (VAR_7)
  goto out;


 if (FUNC_2() && !VAR_9)
  goto out;

 FUNC_5(VAR_2 - 10);
 VAR_7 = FUNC_0();
 if (VAR_7)
  goto out;

 FUNC_5(VAR_3 - 600);
 VAR_7 = FUNC_0();

out:

 FUNC_5(VAR_10);
 if (VAR_7)
  return FUNC_3();
 return FUNC_4();
}
