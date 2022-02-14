
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_2__ {char num_sep; int spaceSize; int hfont; } ;
typedef int HWND ;
typedef int HFONT ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char const*,int ,char*,int) ;
 int FUNC_2 (int ,int ,int,int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(HWND VAR_3)
{
 static const WCHAR VAR_4[] = {'1','0','0','0','\0'};
 WCHAR VAR_5[16];
 HFONT VAR_6;
 HDC VAR_7 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_1, 0, VAR_4, 0, VAR_5, 16) > 4)
  VAR_0.num_sep = VAR_5[1];
 else
  VAR_0.num_sep = '.';

 VAR_6 = FUNC_4(VAR_7, VAR_0.hfont);
 FUNC_2(VAR_7, VAR_2, 1, &VAR_0.spaceSize);
 FUNC_4(VAR_7, VAR_6);
 FUNC_3(VAR_3, VAR_7);
}
