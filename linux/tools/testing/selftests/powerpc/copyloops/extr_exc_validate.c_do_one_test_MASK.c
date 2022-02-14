
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (char*,char*,unsigned long) ;
 int FUNC_1 (char*,char*,char*,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (char*,char*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(char *VAR_2, char *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);

 if (VAR_5 != VAR_6) {
  VAR_0++;
  FUNC_1("FAIL from=%p to=%p len=%ld returned %ld, expected %ld\n",
         VAR_3, VAR_2, VAR_4, VAR_5, VAR_6);

 } else
  VAR_1++;
}
