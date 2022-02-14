
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int XLogRecPtr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,int *,int) ;

XLogRecPtr
FUNC_3(const char *VAR_2, bool *VAR_3)
{
 int VAR_4,
    VAR_5;
 uint32 VAR_6,
    VAR_7;
 XLogRecPtr VAR_8;

 FUNC_0(VAR_3 != ((void*)0));
 *VAR_3 = 0;


 VAR_4 = FUNC_1(VAR_2, "0123456789abcdefABCDEF");
 if (VAR_4 < 1 || VAR_4 > VAR_1 || VAR_2[VAR_4] != '/')
 {
  *VAR_3 = 1;
  return VAR_0;
 }
 VAR_5 = FUNC_1(VAR_2 + VAR_4 + 1, "0123456789abcdefABCDEF");
 if (VAR_5 < 1 || VAR_5 > VAR_1 || VAR_2[VAR_4 + 1 + VAR_5] != '\0')
 {
  *VAR_3 = 1;
  return VAR_0;
 }


 VAR_6 = (uint32) FUNC_2(VAR_2, ((void*)0), 16);
 VAR_7 = (uint32) FUNC_2(VAR_2 + VAR_4 + 1, ((void*)0), 16);
 VAR_8 = ((uint64) VAR_6 << 32) | VAR_7;

 return VAR_8;
}
