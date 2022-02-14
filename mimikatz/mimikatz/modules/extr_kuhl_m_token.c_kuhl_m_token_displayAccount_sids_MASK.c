
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_3__ {int Attributes; int Sid; } ;
typedef int PWSTR ;
typedef TYPE_1__* PSID_AND_ATTRIBUTES ;
typedef size_t DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(UCHAR VAR_7, DWORD VAR_8, PSID_AND_ATTRIBUTES VAR_9)
{
 DWORD VAR_10;
 PWSTR VAR_11, VAR_12;
 for(VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
 {
  FUNC_1(L"   %c:[%c%c%c%c%c%c%c] ", VAR_7,
    (VAR_9[VAR_10].Attributes & VAR_3) ? L'M' : L' ',
    (VAR_9[VAR_10].Attributes & VAR_1) ? L'D' : L' ',
    (VAR_9[VAR_10].Attributes & VAR_0) ? L'E' : L' ',
    (VAR_9[VAR_10].Attributes & VAR_4) ? L'O' : L' ',
    (VAR_9[VAR_10].Attributes & VAR_6) ? L'U' : L' ',
    (VAR_9[VAR_10].Attributes & VAR_2) ? L'L' : L' ',
    (VAR_9[VAR_10].Attributes & VAR_5) ? L'R' : L' '
    );
  if(FUNC_3(VAR_9[VAR_10].Sid, &VAR_11, &VAR_12, ((void*)0), ((void*)0)))
  {
   if(FUNC_4(VAR_12))
    FUNC_1(L"%s\\", VAR_12);
   FUNC_1(L"%s\n", VAR_11);
   FUNC_0(VAR_11);
   FUNC_0(VAR_12);
  }
  else
  {
   FUNC_2(VAR_9[VAR_10].Sid);
   FUNC_1(L"\n");
  }
 }
}
