
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int xmlNodePtr ;
typedef int xmlBufferPtr ;
typedef int encodeTypePtr ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int) ;
 int VAR_3 ;
 char* FUNC_10 (char*) ;
 char* FUNC_11 (int ,int) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,char*,char*) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int *,int ) ;
 int * FUNC_25 (int *) ;

__attribute__((used)) static xmlNodePtr FUNC_26(encodeTypePtr VAR_4, zval *VAR_5, int VAR_6, xmlNodePtr VAR_7)
{
 xmlNodePtr VAR_8, VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_22(((void*)0), FUNC_0("BOGUS"));
 FUNC_16(VAR_7, VAR_8);
 FUNC_1(VAR_5, VAR_8, VAR_6);

 if (FUNC_7(VAR_5) == VAR_1) {
  VAR_10 = FUNC_11(FUNC_6(VAR_5), FUNC_5(VAR_5));
  VAR_11 = FUNC_5(VAR_5);
 } else {
  zend_string *VAR_12 = FUNC_25(VAR_5);
  VAR_10 = FUNC_11(FUNC_4(VAR_12), FUNC_3(VAR_12));
  VAR_11 = FUNC_3(VAR_12);
  FUNC_24(VAR_12, 0);
 }

 if (FUNC_2(VAR_3) != ((void*)0)) {
  xmlBufferPtr VAR_13 = FUNC_19(VAR_10, VAR_11);
  xmlBufferPtr VAR_14 = FUNC_18();
  int VAR_15 = FUNC_21(FUNC_2(VAR_3), VAR_14, VAR_13);

  if (VAR_15 >= 0) {
   FUNC_8(VAR_10);
   VAR_10 = FUNC_10((char*)FUNC_17(VAR_14));
   VAR_11 = VAR_15;
  }
  FUNC_20(VAR_14);
  FUNC_20(VAR_13);
 }

 if (!FUNC_13(FUNC_0(VAR_10))) {
  char *VAR_16 = FUNC_9(VAR_11 + 8);
  char VAR_17;
  int VAR_18;

  FUNC_12(VAR_16, VAR_10, VAR_11+1);
  for (VAR_18 = 0; (VAR_17 = VAR_16[VAR_18++]);) {
   if ((VAR_17 & 0x80) == 0) {
   } else if ((VAR_17 & 0xe0) == 0xc0) {
    if ((VAR_16[VAR_18] & 0xc0) != 0x80) {
     break;
    }
    VAR_18++;
   } else if ((VAR_17 & 0xf0) == 0xe0) {
    if ((VAR_16[VAR_18] & 0xc0) != 0x80 || (VAR_16[VAR_18+1] & 0xc0) != 0x80) {
     break;
    }
    VAR_18 += 2;
   } else if ((VAR_17 & 0xf8) == 0xf0) {
    if ((VAR_16[VAR_18] & 0xc0) != 0x80 || (VAR_16[VAR_18+1] & 0xc0) != 0x80 || (VAR_16[VAR_18+2] & 0xc0) != 0x80) {
     break;
    }
    VAR_18 += 3;
   } else {
    break;
   }
  }
  if (VAR_17) {
   VAR_16[VAR_18-1] = '\\';
   VAR_16[VAR_18++] = 'x';
   VAR_16[VAR_18++] = ((unsigned char)VAR_17 >> 4) + ((((unsigned char)VAR_17 >> 4) > 9) ? ('a' - 10) : '0');
   VAR_16[VAR_18++] = (VAR_17 & 15) + (((VAR_17 & 15) > 9) ? ('a' - 10) : '0');
   VAR_16[VAR_18++] = '.';
   VAR_16[VAR_18++] = '.';
   VAR_16[VAR_18++] = '.';
   VAR_16[VAR_18++] = 0;
  }

  FUNC_15(VAR_0, "Encoding: string '%s' is not a valid utf-8 string", VAR_16);
 }

 VAR_9 = FUNC_23(FUNC_0(VAR_10), VAR_11);
 FUNC_16(VAR_8, VAR_9);
 FUNC_8(VAR_10);

 if (VAR_6 == VAR_2) {
  FUNC_14(VAR_8, VAR_4);
 }
 return VAR_8;
}
