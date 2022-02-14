
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int map_types ;
typedef int map_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int *) ;
 int VAR_6 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,unsigned int) ;
 int FUNC_6 (int,int,unsigned int) ;
 int FUNC_7 (int,int,unsigned int) ;
 int FUNC_8 (int,int,unsigned int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int,unsigned int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;

int FUNC_13(int VAR_7, char **VAR_8)
{
 int VAR_9[] = {VAR_1,
        VAR_2};
 int VAR_10[] = {0, VAR_0};
 int VAR_11, VAR_12;

 FUNC_3(VAR_6, ((void*)0));

 VAR_5 = FUNC_1();
 FUNC_0(VAR_5 != -1);
 FUNC_2("nr_cpus:%d\n\n", VAR_5);

 for (VAR_12 = 0; VAR_12 < sizeof(VAR_10) / sizeof(*VAR_10); VAR_12++) {
  unsigned int VAR_13 = (VAR_10[VAR_12] & VAR_0) ?
   VAR_4 : VAR_3;

  for (VAR_11 = 0; VAR_11 < sizeof(VAR_9) / sizeof(*VAR_9); VAR_11++) {
   FUNC_4(VAR_9[VAR_11], VAR_10[VAR_12]);
   FUNC_5(VAR_9[VAR_11], VAR_10[VAR_12], VAR_13);
   FUNC_6(VAR_9[VAR_11], VAR_10[VAR_12], VAR_13);
   FUNC_7(VAR_9[VAR_11], VAR_10[VAR_12], VAR_13);
   FUNC_8(VAR_9[VAR_11], VAR_10[VAR_12], VAR_13);
   FUNC_9(VAR_9[VAR_11], VAR_10[VAR_12]);
   FUNC_10(VAR_9[VAR_11], VAR_10[VAR_12], VAR_13);
   FUNC_11(VAR_9[VAR_11], VAR_10[VAR_12]);
   FUNC_12(VAR_9[VAR_11], VAR_10[VAR_12]);

   FUNC_2("\n");
  }
 }

 return 0;
}
