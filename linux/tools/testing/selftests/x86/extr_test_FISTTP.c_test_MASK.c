
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_3(void)
{
 int VAR_8;

 FUNC_0(VAR_0|VAR_1|VAR_2|VAR_3|VAR_4);
 asm volatile ("\n"
 "	fld1""\n"
 "	fisttp	res16""\n"
 "	fld1""\n"
 "	fisttpl	res32""\n"
 "	fld1""\n"
 "	fisttpll res64""\n"
 : : : "memory"
 );
 if (VAR_5 != 1 || VAR_6 != 1 || VAR_7 != 1) {
  FUNC_2("[BAD]\tfisttp 1\n");
  return 1;
 }
 VAR_8 = FUNC_1(VAR_0|VAR_1|VAR_2|VAR_3|VAR_4);
 if (VAR_8 != 0) {
  FUNC_2("[BAD]\tfisttp 1: wrong exception state\n");
  return 1;
 }

 FUNC_0(VAR_0|VAR_1|VAR_2|VAR_3|VAR_4);
 asm volatile ("\n"
 "	fldpi""\n"
 "	fisttp	res16""\n"
 "	fldpi""\n"
 "	fisttpl	res32""\n"
 "	fldpi""\n"
 "	fisttpll res64""\n"
 : : : "memory"
 );
 if (VAR_5 != 3 || VAR_6 != 3 || VAR_7 != 3) {
  FUNC_2("[BAD]\tfisttp pi\n");
  return 1;
 }
 VAR_8 = FUNC_1(VAR_0|VAR_1|VAR_2|VAR_3|VAR_4);
 if (VAR_8 != VAR_1) {
  FUNC_2("[BAD]\tfisttp pi: wrong exception state\n");
  return 1;
 }

 FUNC_0(VAR_0|VAR_1|VAR_2|VAR_3|VAR_4);
 asm volatile ("\n"
 "	fldpi""\n"
 "	fchs""\n"
 "	fisttp	res16""\n"
 "	fldpi""\n"
 "	fchs""\n"
 "	fisttpl	res32""\n"
 "	fldpi""\n"
 "	fchs""\n"
 "	fisttpll res64""\n"
 : : : "memory"
 );
 if (VAR_5 != 0xfffd || VAR_6 != 0xfffffffd || VAR_7 != 0xfffffffffffffffdULL) {
  FUNC_2("[BAD]\tfisttp -pi\n");
  return 1;
 }
 VAR_8 = FUNC_1(VAR_0|VAR_1|VAR_2|VAR_3|VAR_4);
 if (VAR_8 != VAR_1) {
  FUNC_2("[BAD]\tfisttp -pi: wrong exception state\n");
  return 1;
 }

 FUNC_0(VAR_0|VAR_1|VAR_2|VAR_3|VAR_4);
 asm volatile ("\n"
 "	fldln2""\n"
 "	fisttp	res16""\n"
 "	fldln2""\n"
 "	fisttpl	res32""\n"
 "	fldln2""\n"
 "	fisttpll res64""\n"
 : : : "memory"
 );

 if (VAR_5 != 0 || VAR_6 != 0 || VAR_7 != 0) {
  FUNC_2("[BAD]\tfisttp ln2\n");
  return 1;
 }
 VAR_8 = FUNC_1(VAR_0|VAR_1|VAR_2|VAR_3|VAR_4);
 if (VAR_8 != VAR_1) {
  FUNC_2("[BAD]\tfisttp ln2: wrong exception state\n");
  return 1;
 }

 return 0;
}
