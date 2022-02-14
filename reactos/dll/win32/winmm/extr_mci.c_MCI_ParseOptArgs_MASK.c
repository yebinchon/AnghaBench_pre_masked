
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int WCHAR ;
typedef char* LPWSTR ;
typedef int * LPDWORD ;
typedef scalar_t__ LPCWSTR ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;




 int FUNC_1 (int *,char**) ;
 int FUNC_2 (char**,char**) ;




 int FUNC_3 (char*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (char*,scalar_t__,int) ;

__attribute__((used)) static DWORD FUNC_8(DWORD_PTR *VAR_6, int VAR_7, LPCWSTR VAR_8,
     LPWSTR VAR_9, LPDWORD VAR_10)
{
    int VAR_11, VAR_12;
    const char* VAR_13;
    LPCWSTR VAR_14;
    DWORD VAR_15, VAR_16, VAR_17 = 0;
    WORD VAR_18;
    BOOL VAR_19, VAR_20;


    while (*VAR_9) {
 VAR_13 = (const char*)VAR_8;
 VAR_20 = VAR_19 = VAR_0;
 VAR_12 = VAR_7;


 while (*VAR_9 == ' ') VAR_9++;
 FUNC_3("args=%s offset=%d\n", FUNC_5(VAR_9), VAR_12);

 do {
     VAR_14 = (LPCWSTR)VAR_13;
     VAR_13 += ((VAR_11 = FUNC_6(VAR_14)) + 1) * sizeof(WCHAR);
     VAR_16 = *(const DWORD*)VAR_13;
     VAR_18 = *(const WORD*)(VAR_13 + sizeof(DWORD));
     VAR_13 += sizeof(DWORD) + sizeof(WORD);


     switch (VAR_18) {
     case 136:
  VAR_19 = VAR_5; VAR_17 = VAR_16; break;
     case 133:

  if (VAR_19 && FUNC_1(&(VAR_6[VAR_12]), &VAR_9)) {
      *VAR_10 |= VAR_17;
  }
  VAR_19 = VAR_0; VAR_17 = 0;
  break;
     }

     if (FUNC_7(VAR_9, VAR_14, VAR_11) == 0 &&
                ((VAR_18 == 128 && VAR_11 == 0) || VAR_9[VAR_11] == 0 || VAR_9[VAR_11] == ' ')) {

  VAR_9 += VAR_11;
  while (*VAR_9 == ' ') VAR_9++;
  VAR_20 = VAR_5;

  switch (VAR_18) {
  case 137:
  case 129:
  case 135:
  case 134:
  case 136:
  case 133:
      break;
  case 132:
      *VAR_10 |= VAR_16;
      break;
  case 131:
      if (VAR_19) {
   VAR_6[VAR_12] |= VAR_16;
   *VAR_10 |= VAR_17;
   VAR_19 = VAR_0;
      } else {
   *VAR_10 |= VAR_16;
   if (!FUNC_1(&(VAR_6[VAR_12]), &VAR_9)) {
       return VAR_1;
   }
      }
      break;
  case 130:

      *VAR_10 |= VAR_16;
      if (!FUNC_1(&(VAR_6[VAR_12+0]), &VAR_9) ||
   !FUNC_1(&(VAR_6[VAR_12+1]), &VAR_9) ||
   !FUNC_1(&(VAR_6[VAR_12+2]), &VAR_9) ||
   !FUNC_1(&(VAR_6[VAR_12+3]), &VAR_9)) {
   FUNC_0("Bad rect %s\n", FUNC_5(VAR_9));
   return VAR_1;
      }
      break;
  case 128:
      *VAR_10 |= VAR_16;
      if ((VAR_15 = FUNC_2((LPWSTR*)&VAR_6[VAR_12], &VAR_9)))
   return VAR_15;
      break;
  default: FUNC_0("oops\n");
  }

  if (!VAR_19 || VAR_18 != 136) VAR_18 = 135;
     } else {

  switch (VAR_18) {
  case 137:
  case 129:
  case 135:
  case 134:
  case 136:
  case 132: break;
  case 131: if (!VAR_19) VAR_12++; break;
  case 133:
  case 128: VAR_12++; break;
  case 130: VAR_12 += 4; break;
  default: FUNC_0("oops\n");
  }
     }
 } while (VAR_18 != 135);
 if (!VAR_20) {
     FUNC_4("Optarg %s not found\n", FUNC_5(VAR_9));
     return VAR_3;
 }
 if (VAR_12 == VAR_4) {
     FUNC_0("Internal data[] buffer overflow\n");
     return VAR_2;
 }
    }
    return 0;
}
