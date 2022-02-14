
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(int VAR_3)
{
 __u64 VAR_4;
 char VAR_5[4];
 int VAR_6, VAR_7;

 VAR_7 = FUNC_2("/dev/urandom", VAR_1);
 if (VAR_7 < 0) {
  FUNC_3("couldn't open /dev/urandom\n");
  FUNC_1(1);
 }
 VAR_4 = FUNC_6();
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (FUNC_4(VAR_7, VAR_5, sizeof(VAR_5)) < 0) {
   FUNC_3("failed to read from /dev/urandom: %s\n", FUNC_5(VAR_2));
   FUNC_0(VAR_7);
   return;
  }
 }
 FUNC_3("urandom_read:%d: %lld events per sec\n",
        VAR_3, VAR_0 * 1000000000ll / (FUNC_6() - VAR_4));
 FUNC_0(VAR_7);
}
