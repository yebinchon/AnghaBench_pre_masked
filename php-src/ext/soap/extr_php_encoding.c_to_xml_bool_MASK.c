
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int xmlNodePtr ;
typedef int encodeTypePtr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static xmlNodePtr FUNC_7(encodeTypePtr VAR_1, zval *VAR_2, int VAR_3, xmlNodePtr VAR_4)
{
 xmlNodePtr VAR_5;

 VAR_5 = FUNC_4(((void*)0), FUNC_0("BOGUS"));
 FUNC_3(VAR_4, VAR_5);
 FUNC_1(VAR_2, VAR_5, VAR_3);

 if (FUNC_6(VAR_2)) {
  FUNC_5(VAR_5, FUNC_0("true"));
 } else {
  FUNC_5(VAR_5, FUNC_0("false"));
 }

 if (VAR_3 == VAR_0) {
  FUNC_2(VAR_5, VAR_1);
 }
 return VAR_5;
}
