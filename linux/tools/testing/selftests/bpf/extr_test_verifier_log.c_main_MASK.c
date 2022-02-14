
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,size_t,size_t,int ,char*) ;

int FUNC_5(int VAR_3, char **VAR_4)
{
 char VAR_5[VAR_2];
 char VAR_6[VAR_2];
 size_t VAR_7;
 int VAR_8;

 FUNC_0(VAR_6, 1, VAR_2);


 FUNC_1("Test log_level 0...\n");
 FUNC_3(VAR_6, VAR_2, 0);

 FUNC_1("Test log_size < 128...\n");
 FUNC_3(VAR_6, 15, 1);

 FUNC_1("Test log_buff = NULL...\n");
 FUNC_3(((void*)0), VAR_2, 1);


 FUNC_1("Test oversized buffer...\n");
 FUNC_4(VAR_5, VAR_2, VAR_2, 0, VAR_0, VAR_5);

 VAR_7 = FUNC_2(VAR_5);

 FUNC_1("Test exact buffer...\n");
 FUNC_4(VAR_6, VAR_2, VAR_7 + 2, VAR_7, VAR_0, VAR_5);

 FUNC_1("Test undersized buffers...\n");
 for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
  VAR_5[VAR_7 - VAR_8 + 1] = 1;
  VAR_5[VAR_7 - VAR_8] = 0;

  FUNC_4(VAR_6, VAR_2, VAR_7 + 1 - VAR_8, VAR_7 - VAR_8,
         VAR_1, VAR_5);
 }

 FUNC_1("test_verifier_log: OK\n");
 return 0;
}
