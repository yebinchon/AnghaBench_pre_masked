
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int xmlNodePtr ;
typedef int encodeTypePtr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (unsigned char*) ;
 scalar_t__ FUNC_7 (int,int,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (unsigned char*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static xmlNodePtr FUNC_14(encodeTypePtr VAR_2, zval *VAR_3, int VAR_4, xmlNodePtr VAR_5)
{
 static char VAR_6[] = "0123456789ABCDEF";
 xmlNodePtr VAR_7, VAR_8;
 unsigned char *VAR_9;
 zval VAR_10;
 size_t VAR_11, VAR_12;

 VAR_7 = FUNC_10(((void*)0), FUNC_0("BOGUS"));
 FUNC_9(VAR_5, VAR_7);
 FUNC_1(VAR_3, VAR_7, VAR_4);

 if (FUNC_5(VAR_3) != VAR_0) {
  FUNC_2(&VAR_10, FUNC_12(VAR_3));
  VAR_3 = &VAR_10;
 }
 VAR_9 = (unsigned char *) FUNC_7(FUNC_3(VAR_3) * 2, sizeof(char), 1);

 for (VAR_11 = VAR_12 = 0; VAR_11 < FUNC_3(VAR_3); VAR_11++) {
  VAR_9[VAR_12++] = VAR_6[((unsigned char)FUNC_4(VAR_3)[VAR_11]) >> 4];
  VAR_9[VAR_12++] = VAR_6[((unsigned char)FUNC_4(VAR_3)[VAR_11]) & 15];
 }
 VAR_9[VAR_12] = '\0';

 VAR_8 = FUNC_11(VAR_9, FUNC_3(VAR_3) * 2 * sizeof(char));
 FUNC_9(VAR_7, VAR_8);
 FUNC_6(VAR_9);
 if (VAR_3 == &VAR_10) {
  FUNC_13(&VAR_10);
 }

 if (VAR_4 == VAR_1) {
  FUNC_8(VAR_7, VAR_2);
 }
 return VAR_7;
}
