
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int string_len; int * string; } ;
typedef TYPE_1__ FT_SfntName ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (size_t) ;
 char* FUNC_2 (int*,size_t) ;

__attribute__((used)) static char *FUNC_3(FT_SfntName *VAR_0)
{
 size_t VAR_1 = VAR_0->string_len / 2;
 wchar_t *VAR_2 = FUNC_1((VAR_1 + 1) * sizeof(wchar_t));
 char *VAR_3 = ((void*)0);

 VAR_2[VAR_1] = 0;


 for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  size_t VAR_5 = VAR_4 * 2;
  wchar_t VAR_6 = *(wchar_t *)&VAR_0->string[VAR_5];

  VAR_2[VAR_4] = ((VAR_6 >> 8) & 0xFF) | ((VAR_6 << 8) & 0xFF00);
 }

 VAR_3 = FUNC_2(VAR_2, VAR_1);

 FUNC_0(VAR_2);
 return VAR_3;
}
