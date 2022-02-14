
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
typedef int map_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int VAR_6 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,struct rlimit*) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int,int,int) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int *) ;

int FUNC_15(int VAR_8, char **VAR_9)
{
 struct rlimit VAR_10 = {VAR_3, VAR_3};
 int VAR_11[] = {0, VAR_0};
 const char *VAR_12;
 int VAR_13 = 1;
 int VAR_14;
 int VAR_15;

 if (VAR_8 < 4) {
  FUNC_5("Usage: %s <dist-file> <lru-size> <nr-tasks>\n",
         VAR_9[0]);
  return -1;
 }

 VAR_12 = VAR_9[1];
 VAR_14 = FUNC_1(VAR_9[2]);
 VAR_13 = FUNC_1(VAR_9[3]);

 FUNC_7(VAR_7, ((void*)0));

 FUNC_0(!FUNC_8(VAR_2, &VAR_10));

 FUNC_9(FUNC_14(((void*)0)));

 VAR_6 = FUNC_2();
 FUNC_0(VAR_6 != -1);
 FUNC_5("nr_cpus:%d\n\n", VAR_6);

 VAR_13 = FUNC_4(VAR_13, VAR_6);

 VAR_4 = FUNC_6(VAR_12, &VAR_5);
 if (!VAR_4) {
  FUNC_5("%s has no key\n", VAR_12);
  return -1;
 }

 for (VAR_15 = 0; VAR_15 < sizeof(VAR_11) / sizeof(*VAR_11); VAR_15++) {
  FUNC_10(VAR_1, VAR_11[VAR_15]);
  FUNC_11(VAR_1, VAR_11[VAR_15]);
  FUNC_13(VAR_1, VAR_11[VAR_15],
           VAR_13);
  FUNC_12(VAR_1, VAR_11[VAR_15],
           VAR_13, VAR_14);
  FUNC_5("\n");
 }

 FUNC_3(VAR_5);

 return 0;
}
