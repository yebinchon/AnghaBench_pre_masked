
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,char const*) ;

void FUNC_8(const char *VAR_2) {
 if (!FUNC_0(VAR_0)) {
  return;
 }
 FUNC_7(VAR_1, "Sending shutdown::%s event", VAR_2);

 json_object *VAR_3 = FUNC_2();
 FUNC_4(VAR_3, "change", FUNC_3(VAR_2));

 const char *VAR_4 = FUNC_6(VAR_3);
 FUNC_1(VAR_4, VAR_0);
 FUNC_5(VAR_3);
}
