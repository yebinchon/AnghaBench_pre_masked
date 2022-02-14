
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int LONG ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int ) ;

void FUNC_5(uint64_t VAR_8)
{
 char VAR_9[64];

 if ((VAR_6 == VAR_0) && (VAR_8 != 0)) {
  FUNC_2(VAR_4);
  FUNC_4(VAR_9, "%ld", (LONG)VAR_8);
 } else {
  FUNC_2(VAR_1);
  FUNC_4(VAR_9, "0 (%s)", FUNC_3(VAR_3));
 }
 VAR_5 = VAR_4;
 FUNC_1(FUNC_0(VAR_7, VAR_2), VAR_9);
}
