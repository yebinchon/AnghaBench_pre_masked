
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
typedef size_t UINT ;
struct TYPE_3__ {char* lfn; char* fn; } ;
typedef char TCHAR ;
typedef int FRESULT ;
typedef TYPE_1__ DIR ;
typedef char BYTE ;


 char VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 size_t VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ FUNC_4 (char*,char) ;
 char FUNC_5 (char,int) ;
 char FUNC_6 (char) ;
 int FUNC_7 (char*,char,int) ;

__attribute__((used)) static
FRESULT FUNC_8 (
 DIR* VAR_14,
 const TCHAR** VAR_15
)
{
 BYTE VAR_16, VAR_17, VAR_18, *VAR_19;
 UINT VAR_20, VAR_21, VAR_22;
 const char *VAR_23;


 for (VAR_23 = *VAR_15; *VAR_23 == '/' || *VAR_23 == '\\'; VAR_23++) ;
 VAR_19 = VAR_14->fn;
 FUNC_7(VAR_19, ' ', 11);
 VAR_21 = VAR_22 = VAR_16 = 0; VAR_20 = 8;
 for (;;) {
  VAR_17 = (BYTE)VAR_23[VAR_21++];
  if (VAR_17 <= ' ' || VAR_17 == '/' || VAR_17 == '\\') break;
  if (VAR_17 == '.' || VAR_22 >= VAR_20) {
   if (VAR_20 != 8 || VAR_17 != '.') return VAR_2;
   VAR_22 = 8; VAR_20 = 11;
   VAR_16 <<= 2; continue;
  }
  if (VAR_17 >= 0x80) {
   VAR_16 |= 3;




   return VAR_2;


  }
  if (FUNC_0(VAR_17)) {
   VAR_18 = (BYTE)VAR_23[VAR_21++];
   if (!FUNC_1(VAR_18) || VAR_22 >= VAR_20 - 1)
    return VAR_2;
   VAR_19[VAR_22++] = VAR_17;
   VAR_19[VAR_22++] = VAR_18;
  } else {
   if (FUNC_4("\"*+,:;<=>\?[]|\x7F", VAR_17))
    return VAR_2;
   if (FUNC_3(VAR_17)) {
    VAR_16 |= 2;
   } else {
    if (FUNC_2(VAR_17)) {
     VAR_16 |= 1; VAR_17 -= 0x20;
    }
   }
   VAR_19[VAR_22++] = VAR_17;
  }
 }
 *VAR_15 = &VAR_23[VAR_21];
 VAR_17 = (VAR_17 <= ' ') ? VAR_8 : 0;

 if (!VAR_22) return VAR_2;
 if (VAR_19[0] == VAR_0) VAR_19[0] = VAR_11;

 if (VAR_20 == 8) VAR_16 <<= 2;
 if ((VAR_16 & 0x03) == 0x01) VAR_17 |= VAR_7;
 if ((VAR_16 & 0x0C) == 0x04) VAR_17 |= VAR_5;

 VAR_19[VAR_4] = VAR_17;

 return VAR_3;

}
