
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; int tv_sec; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 int FUNC_0 (int ,struct timespec*) ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 long long FUNC_2 (int ,struct timespec) ;

void FUNC_3(int VAR_7)
{
 long long VAR_8;
 struct timespec VAR_9;

 FUNC_0(VAR_3, &VAR_9);
 VAR_4++;

 VAR_8 = FUNC_2(VAR_6, VAR_9);
 VAR_8 -= VAR_0 * VAR_1 * VAR_4;

 FUNC_1("ALARM(%i): %ld:%ld latency: %lld ns ", VAR_4, VAR_9.tv_sec,
       VAR_9.tv_nsec, VAR_8);

 if (VAR_8 > VAR_2) {
  FUNC_1("[FAIL]\n");
  VAR_5 = -1;
 } else
  FUNC_1("[OK]\n");

}
