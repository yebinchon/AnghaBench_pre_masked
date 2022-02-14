
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int va_list ;
typedef char* LPTSTR ;
typedef int DWORD ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned short,unsigned short,int ,int *,int,int ,char**,int *) ;
 int FUNC_2 (char*,unsigned short,unsigned short,int ,int *,int,int ,int **,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*,int ,int ) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (char**,int ,char const*,int ) ;

void FUNC_8(int VAR_11, const char *VAR_12, va_list VAR_13)
{
 LPTSTR VAR_14[2];
 unsigned short VAR_15;
 char *VAR_16 = ((void*)0);
 DWORD VAR_17;
 wchar_t *VAR_18[2];


 if (VAR_3 == FUNC_0(VAR_10))
  FUNC_5("php", VAR_4, VAR_5);

 switch (VAR_11) {
  case 129:
   VAR_15 = VAR_0;
   VAR_17 = VAR_6;
   break;
  case 128:
   VAR_15 = VAR_1;
   VAR_17 = VAR_7;
   break;
  default:
   VAR_15 = VAR_2;
   VAR_17 = VAR_8;
 }

 FUNC_7(&VAR_16, 0, VAR_12, VAR_13);

 VAR_18[0] = FUNC_6(FUNC_0(VAR_9));
 VAR_18[1] = FUNC_6(VAR_16);


 if (VAR_18[0] && VAR_18[1]) {
  FUNC_2(FUNC_0(VAR_10), VAR_15, (unsigned short) VAR_11, VAR_17, ((void*)0), 2, 0, VAR_18, ((void*)0));
  FUNC_4(VAR_18[0]);
  FUNC_4(VAR_18[1]);
  FUNC_3(VAR_16);
  return;
 }

 FUNC_4(VAR_18[0]);
 FUNC_4(VAR_18[1]);

 VAR_14[0] = FUNC_0(VAR_9);
 VAR_14[1] = VAR_16;

 FUNC_1(FUNC_0(VAR_10), VAR_15, (unsigned short) VAR_11, VAR_17, ((void*)0), 2, 0, VAR_14, ((void*)0));
 FUNC_3(VAR_16);
}
