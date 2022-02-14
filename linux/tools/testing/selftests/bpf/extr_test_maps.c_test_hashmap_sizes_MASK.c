
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int,int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int,int,char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 for (VAR_7 = 1; VAR_7 <= 512; VAR_7 <<= 1)
  for (VAR_8 = 1; VAR_8 <= 1 << 18; VAR_8 <<= 1) {
   VAR_6 = FUNC_0(VAR_0, VAR_7, VAR_8,
         2, VAR_3);
   if (VAR_6 < 0) {
    if (VAR_2 == VAR_1)
     return;
    FUNC_3("Failed to create hashmap key=%d value=%d '%s'\n",
           VAR_7, VAR_8, FUNC_4(VAR_2));
    FUNC_2(1);
   }
   FUNC_1(VAR_6);
   FUNC_5(10);
  }
}
