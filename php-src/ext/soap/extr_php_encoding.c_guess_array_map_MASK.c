
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int xmlNodePtr ;
typedef int encodeTypePtr ;
typedef int * encodePtr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int ) ;

__attribute__((used)) static xmlNodePtr FUNC_4(encodeTypePtr VAR_4, zval *VAR_5, int VAR_6, xmlNodePtr VAR_7)
{
 encodePtr VAR_8 = ((void*)0);

 if (VAR_5 && FUNC_0(VAR_5) == VAR_1) {
  if (FUNC_2(VAR_5)) {
   VAR_8 = FUNC_1(VAR_0);
  } else {
   VAR_8 = FUNC_1(VAR_3);
  }
 }
 if (!VAR_8) {
  VAR_8 = FUNC_1(VAR_2);
 }

 return FUNC_3(VAR_8, VAR_5, VAR_6, VAR_7);
}
