
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_object ;


 int * FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(json_object *VAR_2, bool VAR_3) {
 if (!FUNC_2(VAR_2, VAR_0)) {
  if (FUNC_2(VAR_2, VAR_1)) {
   return FUNC_3(VAR_2);
  }
  return VAR_3;
 }

 size_t VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4) {
  return VAR_3;
 }

 for (size_t VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  json_object *VAR_6 = FUNC_0(VAR_2, VAR_5);

  if (!FUNC_3(VAR_6)) {
   return 0;
  }
 }

 return 1;
}
