
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int xmlNodePtr ;
typedef int encodeTypePtr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int,char,char,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int,int,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static xmlNodePtr FUNC_14(encodeTypePtr VAR_3, zval *VAR_4, int VAR_5, xmlNodePtr VAR_6)
{
 xmlNodePtr VAR_7;
 zval VAR_8;
 char *VAR_9;

 VAR_7 = FUNC_11(((void*)0), FUNC_0("BOGUS"));
 FUNC_10(VAR_6, VAR_7);
 FUNC_2(VAR_4, VAR_7, VAR_5);

 FUNC_3(&VAR_8, FUNC_13(VAR_4));

 VAR_9 = (char *) FUNC_7(FUNC_1(VAR_2) >= 0 ? FUNC_1(VAR_2) : 17, 1, VAR_0 + 1);
 FUNC_6(FUNC_4(VAR_8), FUNC_1(VAR_2), '.', 'E', VAR_9);
 FUNC_12(VAR_7, FUNC_0(VAR_9), FUNC_9(VAR_9));
 FUNC_5(VAR_9);

 if (VAR_5 == VAR_1) {
  FUNC_8(VAR_7, VAR_3);
 }
 return VAR_7;
}
