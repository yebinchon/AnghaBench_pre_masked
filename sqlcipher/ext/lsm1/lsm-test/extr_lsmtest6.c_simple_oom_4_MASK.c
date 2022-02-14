
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int OomTest ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int **,int*) ;
 int FUNC_3 (int *,int *,char*,char*,int*) ;

__attribute__((used)) static void FUNC_4(OomTest *VAR_2){
  int VAR_3 = VAR_1;
  lsm_db *VAR_4;

  FUNC_1(VAR_0);
  FUNC_2(VAR_2, VAR_0, &VAR_4, &VAR_3);

  FUNC_3(VAR_2, VAR_4, "123", "onetwothree", &VAR_3);
  FUNC_3(VAR_2, VAR_4, "456", "fourfivesix", &VAR_3);
  FUNC_3(VAR_2, VAR_4, "789", "seveneightnine", &VAR_3);
  FUNC_3(VAR_2, VAR_4, "123", "teneleventwelve", &VAR_3);
  FUNC_3(VAR_2, VAR_4, "456", "fourteenfifteensixteen", &VAR_3);

  FUNC_0(VAR_4);
}
