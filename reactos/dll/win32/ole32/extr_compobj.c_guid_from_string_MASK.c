
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Data1; int Data2; int Data3; int* Data4; } ;
typedef char* LPCWSTR ;
typedef TYPE_1__ GUID ;
typedef int CLSID ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int* VAR_2 ;
 int FUNC_2 (char) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_4(LPCWSTR VAR_3, GUID *VAR_4)
{
  int VAR_5;

  if (!VAR_3 || VAR_3[0]!='{') {
    FUNC_3( VAR_4, 0, sizeof (CLSID) );
    if(!VAR_3) return VAR_1;
    return VAR_0;
  }

  FUNC_0("%s -> %p\n", FUNC_1(VAR_3), VAR_4);



  VAR_4->Data1 = 0;
  for (VAR_5 = 1; VAR_5 < 9; VAR_5++) {
    if (!FUNC_2(VAR_3[VAR_5])) return VAR_0;
    VAR_4->Data1 = (VAR_4->Data1 << 4) | VAR_2[VAR_3[VAR_5]];
  }
  if (VAR_3[9]!='-') return VAR_0;

  VAR_4->Data2 = 0;
  for (VAR_5 = 10; VAR_5 < 14; VAR_5++) {
    if (!FUNC_2(VAR_3[VAR_5])) return VAR_0;
    VAR_4->Data2 = (VAR_4->Data2 << 4) | VAR_2[VAR_3[VAR_5]];
  }
  if (VAR_3[14]!='-') return VAR_0;

  VAR_4->Data3 = 0;
  for (VAR_5 = 15; VAR_5 < 19; VAR_5++) {
    if (!FUNC_2(VAR_3[VAR_5])) return VAR_0;
    VAR_4->Data3 = (VAR_4->Data3 << 4) | VAR_2[VAR_3[VAR_5]];
  }
  if (VAR_3[19]!='-') return VAR_0;

  for (VAR_5 = 20; VAR_5 < 37; VAR_5+=2) {
    if (VAR_5 == 24) {
      if (VAR_3[VAR_5]!='-') return VAR_0;
      VAR_5++;
    }
    if (!FUNC_2(VAR_3[VAR_5]) || !FUNC_2(VAR_3[VAR_5+1])) return VAR_0;
    VAR_4->Data4[(VAR_5-20)/2] = VAR_2[VAR_3[VAR_5]] << 4 | VAR_2[VAR_3[VAR_5+1]];
  }

  if (VAR_3[37] == '}' && VAR_3[38] == '\0')
    return VAR_1;

  return VAR_0;
}
