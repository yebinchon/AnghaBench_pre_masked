
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int b1 ;
typedef char WCHAR ;
struct TYPE_7__ {int hdrivebar; scalar_t__* drives; int hInstance; int hMainWnd; } ;
struct TYPE_5__ {int member_1; int member_0; } ;
struct TYPE_6__ {int iBitmap; int iString; int idCommand; int member_6; int member_5; TYPE_1__ member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ TBBUTTON ;
typedef scalar_t__* PWSTR ;
typedef int LPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int,int ,int ,TYPE_2__*,int ,int,int,int,int,int) ;




 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int,scalar_t__*) ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
 TBBUTTON VAR_16 = {0, 0, VAR_10, VAR_0, {0, 0}, 0, 0};
 WCHAR VAR_17[VAR_1];
 int VAR_18 = 1;
 PWSTR VAR_19;

 FUNC_2(VAR_1, VAR_3.drives);

 VAR_3.hdrivebar = FUNC_0(VAR_3.hMainWnd, VAR_14|VAR_15|VAR_2|VAR_11,
    VAR_6, 2, VAR_3.hInstance, VAR_4, &VAR_16,
    0, 16, 13, 16, 13, sizeof(TBBUTTON));
 FUNC_4(VAR_17, sizeof(VAR_17)/sizeof(VAR_17[0]), VAR_5);
 VAR_17[FUNC_5(VAR_17)+1] = '\0';
 FUNC_3(VAR_3.hdrivebar, VAR_12, 0, (LPARAM)VAR_17);

 VAR_16.idCommand = VAR_8;
 FUNC_3(VAR_3.hdrivebar, VAR_13, VAR_18++, (LPARAM)&VAR_16);
 VAR_16.iString++;


 FUNC_3(VAR_3.hdrivebar, VAR_12, 0, (LPARAM)VAR_3.drives);

 VAR_16.idCommand = VAR_7;

 for(VAR_19=VAR_3.drives; *VAR_19; ) {
  switch(FUNC_1(VAR_19)) {
   case 128: VAR_16.iBitmap = 1; break;
   case 131: VAR_16.iBitmap = 3; break;
   case 129: VAR_16.iBitmap = 4; break;
   case 130: VAR_16.iBitmap = 5; break;
   default: VAR_16.iBitmap = 2;
  }

  FUNC_3(VAR_3.hdrivebar, VAR_13, VAR_18++, (LPARAM)&VAR_16);
  VAR_16.idCommand++;
  VAR_16.iString++;

  while(*VAR_19++);
 }
}
