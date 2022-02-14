
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (char*,double,double) ;

__attribute__((used)) static void FUNC_1(void)
{
 static uint64_t VAR_3, VAR_4;
 double VAR_5, VAR_6;

 VAR_5 = ((VAR_0 - VAR_3) * 8) / (VAR_2*1000.0);
 VAR_6 = ((VAR_1 - VAR_4) * 8) / (VAR_2*1000.0);

 FUNC_0("rate: tx %.1fkbps, rx %.1fkbps\n", VAR_5, VAR_6);

 VAR_3 = VAR_0;
 VAR_4 = VAR_1;
}
