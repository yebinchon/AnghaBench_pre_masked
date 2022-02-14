
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int*,int*) ;

int FUNC_3(void)
{
 uint64_t VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1("/proc/uptime", VAR_0);
 FUNC_0(VAR_6 >= 0);

 FUNC_2(VAR_6, &VAR_2, &VAR_4);
 VAR_1 = VAR_2;
 do {
  FUNC_2(VAR_6, &VAR_3, &VAR_5);
  FUNC_0(VAR_3 >= VAR_2);
  FUNC_0(VAR_5 >= VAR_4);
  VAR_2 = VAR_3;
  VAR_4 = VAR_5;
 } while (VAR_3 - VAR_1 < 100);

 return 0;
}
