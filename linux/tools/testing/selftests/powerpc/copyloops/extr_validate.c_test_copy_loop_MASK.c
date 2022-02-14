
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,unsigned long,unsigned long,unsigned long,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (unsigned long) ;
 char* FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (char*,int ,unsigned long) ;
 int VAR_4 ;

int FUNC_6(void)
{
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;

 VAR_5 = FUNC_4(VAR_0, VAR_0);
 VAR_6 = FUNC_4(VAR_0, VAR_0);
 VAR_7 = FUNC_3(VAR_0);
 VAR_8 = FUNC_3(VAR_0);

 if (!VAR_5 || !VAR_6 || !VAR_7 || !VAR_8) {
  FUNC_2(VAR_4, "malloc failed\n");
  FUNC_1(1);
 }

 FUNC_5(VAR_7, VAR_3, VAR_0);


 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
  VAR_8[VAR_12] = VAR_12 & 0xff;

 for (VAR_9 = 1; VAR_9 < VAR_1; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
    FUNC_0(VAR_5, VAR_6, VAR_10, VAR_11, VAR_9,
           VAR_7, VAR_8);
   }
  }
 }

 return 0;
}
