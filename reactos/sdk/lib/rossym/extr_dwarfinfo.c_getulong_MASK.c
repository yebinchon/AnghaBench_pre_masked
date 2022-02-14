
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uvlong ;
typedef int ulong ;
typedef int DwarfBuf ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(DwarfBuf *VAR_3, int VAR_4, ulong VAR_5, ulong *VAR_6, int *VAR_7)
{
 static int VAR_8;
 uvlong VAR_9;

 switch(VAR_4){
 default:
  return -1;


 case 140:
  *VAR_7 = VAR_0;
  *VAR_6 = FUNC_6(VAR_3);
  return 0;


 case 131:

  *VAR_7 = VAR_2;
  *VAR_6 = FUNC_6(VAR_3);
  return 0;
 case 135:
  *VAR_6 = FUNC_0(VAR_3);
  goto relativeref;
 case 134:
  *VAR_6 = FUNC_3(VAR_3);
  goto relativeref;
 case 133:
  *VAR_6 = FUNC_4(VAR_3);
  goto relativeref;
 case 132:
  *VAR_6 = FUNC_5(VAR_3);
  goto relativeref;
 case 130:
  *VAR_6 = FUNC_1(VAR_3);
 relativeref:
  *VAR_6 += VAR_5;
  *VAR_7 = VAR_2;
  return 0;


 case 139:
  *VAR_6 = FUNC_0(VAR_3);
  goto constant;
 case 138:
  *VAR_6 = FUNC_3(VAR_3);
  goto constant;
 case 137:
  *VAR_6 = FUNC_4(VAR_3);
  goto constant;
 case 136:
  VAR_9 = FUNC_5(VAR_3);
  *VAR_6 = VAR_9;
  if(VAR_9 != *VAR_6 && ++VAR_8 == 1)
   FUNC_7("dwarf: truncating 64-bit attribute constants");
  goto constant;
 case 129:
  *VAR_6 = FUNC_2(VAR_3);
  goto constant;
 case 128:
  *VAR_6 = FUNC_1(VAR_3);
 constant:
  *VAR_7 = VAR_1;
  return 0;
 }
}
