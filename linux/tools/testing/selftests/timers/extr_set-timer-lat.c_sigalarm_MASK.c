
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 int FUNC_0 (int ,struct timespec*) ;
 int VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long long FUNC_1 (int ,struct timespec) ;

void FUNC_2(int VAR_7)
{
 long long VAR_8;
 struct timespec VAR_9;

 FUNC_0(VAR_3, &VAR_9);
 VAR_2++;

 VAR_8 = FUNC_1(VAR_5, VAR_9);
 VAR_8 -= VAR_0 * VAR_1 * VAR_2;

 if (VAR_8 < 0)
  VAR_6 = 1;

 if (VAR_8 > VAR_4)
  VAR_4 = VAR_8;
}
