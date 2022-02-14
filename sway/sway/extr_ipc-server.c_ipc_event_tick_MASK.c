
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int) ;
 int * FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_2) {
 if (!FUNC_0(VAR_0)) {
  return;
 }
 FUNC_8(VAR_1, "Sending tick event");

 json_object *VAR_3 = FUNC_3();
 FUNC_5(VAR_3, "first", FUNC_2(0));
 FUNC_5(VAR_3, "payload", FUNC_4(VAR_2));

 const char *VAR_4 = FUNC_7(VAR_3);
 FUNC_1(VAR_4, VAR_0);
 FUNC_6(VAR_3);
}
