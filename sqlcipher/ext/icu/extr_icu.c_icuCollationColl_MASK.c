
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCollator ;
typedef int UCollationResult ;
typedef int UChar ;





 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int *,int) ;

__attribute__((used)) static int FUNC_2(
  void *VAR_0,
  int VAR_1,
  const void *VAR_2,
  int VAR_3,
  const void *VAR_4
){
  UCollationResult VAR_5;
  UCollator *VAR_6 = (UCollator *)VAR_0;
  VAR_5 = FUNC_1(VAR_6, (UChar *)VAR_2, VAR_1/2, (UChar *)VAR_4, VAR_3/2);
  switch( VAR_5 ){
    case 128: return -1;
    case 129: return +1;
    case 130: return 0;
  }
  FUNC_0(!"Unexpected return value from ucol_strcoll()");
  return 0;
}
