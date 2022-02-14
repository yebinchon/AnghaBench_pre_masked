
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef int byte_cnt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int,int ) ;
 char* VAR_5 ;
 scalar_t__ FUNC_2 (int,int*,long long*) ;
 int FUNC_3 (int,int,int,int ) ;
 int VAR_6 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 long long VAR_14, VAR_15;

 VAR_11 = FUNC_1(VAR_0,
    sizeof(VAR_13), sizeof(VAR_15),
    256, 0);
 if (VAR_11 < 0) {
  FUNC_4("Failed to create map: '%s'\n", FUNC_7(VAR_6));
  return VAR_1;
 }

 VAR_10 = FUNC_5(VAR_11, VAR_9);
 FUNC_4("Output from kernel verifier:\n%s\n-------\n", VAR_5);

 if (VAR_10 < 0) {
  FUNC_4("Failed to load prog: '%s'\n", FUNC_7(VAR_6));
  return VAR_1;
 }

 VAR_12 = FUNC_3(VAR_10, VAR_7, VAR_8, 0);
 if (VAR_12 < 0) {
  FUNC_4("Failed to attach prog to cgroup: '%s'\n",
         FUNC_7(VAR_6));
  return VAR_1;
 }
 while (1) {
  VAR_13 = VAR_4;
  FUNC_0(FUNC_2(VAR_11, &VAR_13, &VAR_14) == 0);

  VAR_13 = VAR_3;
  FUNC_0(FUNC_2(VAR_11, &VAR_13, &VAR_15) == 0);

  FUNC_4("cgroup received %lld packets, %lld bytes\n",
         VAR_14, VAR_15);
  FUNC_6(1);
 }

 return VAR_2;
}
