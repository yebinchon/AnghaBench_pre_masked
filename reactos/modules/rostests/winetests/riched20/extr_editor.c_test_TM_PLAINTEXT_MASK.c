
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cbSize; int dwMask; int dwEffects; } ;
struct TYPE_3__ {int cpMin; int cpMax; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_1__ CHARRANGE ;
typedef TYPE_2__ CHARFORMAT2A ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_4(void)
{


  HWND VAR_17 = FUNC_2(((void*)0));
  CHARFORMAT2A VAR_18, VAR_19;
  CHARRANGE VAR_20;
  int VAR_21 = 0;



  FUNC_1(VAR_17, VAR_16, 0, (LPARAM)"");
  FUNC_1(VAR_17, VAR_7, VAR_12, 0);



  FUNC_1(VAR_17, VAR_16, 0, (LPARAM)"Is Wine an emulator? No it's not");



  VAR_20.cpMin = 10;
  VAR_20.cpMax = 20;
  FUNC_1(VAR_17, VAR_4, 0, (LPARAM)&VAR_20);
  VAR_18 = sizeof(CHARFORMAT2A);
  FUNC_1(VAR_17, VAR_5, VAR_9, (LPARAM)&VAR_18);

  VAR_18 = VAR_2 | VAR_18;
  VAR_18 = VAR_0 ^ VAR_18;

  VAR_21 = FUNC_1(VAR_17, VAR_6, VAR_10, (LPARAM)&VAR_18);
  FUNC_3(VAR_21 == 0, "EM_SETCHARFORMAT returned %d instead of 0\n", VAR_21);

  VAR_21 = FUNC_1(VAR_17, VAR_6, VAR_11 | VAR_10, (LPARAM)&VAR_18);
  FUNC_3(VAR_21 == 0, "EM_SETCHARFORMAT returned %d instead of 0\n", VAR_21);

  VAR_21 = FUNC_1(VAR_17, VAR_6, VAR_8, (LPARAM)&VAR_18);
  FUNC_3(VAR_21 == 1, "EM_SETCHARFORMAT returned %d instead of 1\n", VAR_21);



  FUNC_1(VAR_17, VAR_5, VAR_10, (LPARAM)&VAR_18);


  VAR_19.cbSize = sizeof(CHARFORMAT2A);
  VAR_20.cpMin = 21;
  VAR_20.cpMax = 30;
  FUNC_1(VAR_17, VAR_4, 0, (LPARAM)&VAR_20);
  FUNC_1(VAR_17, VAR_5, VAR_10, (LPARAM)&VAR_19);



  FUNC_3((VAR_18 == VAR_19.dwMask) && (VAR_18 == VAR_19.dwEffects),
     "two selections' formats differ - cf2.dwMask: %x, cf2test.dwMask %x, cf2.dwEffects: %x, cf2test.dwEffects: %x\n",
     VAR_18, VAR_19.dwMask, VAR_18, VAR_19.dwEffects);



  FUNC_1(VAR_17, VAR_16, 0, (LPARAM)"wine");



  VAR_20.cpMin = 0;
  VAR_20.cpMax = 4;
  FUNC_1(VAR_17, VAR_4, 0, (LPARAM)&VAR_20);
  FUNC_1(VAR_17, VAR_14, 0, 0);



  FUNC_1(VAR_17, VAR_16, 0, (LPARAM)"");
  FUNC_1(VAR_17, VAR_7, VAR_13, 0);



  FUNC_1(VAR_17, VAR_5, VAR_9, (LPARAM)&VAR_18);
  VAR_18 |= VAR_3;
  VAR_18 ^= VAR_1;
  VAR_21 = FUNC_1(VAR_17, VAR_6, VAR_8, (LPARAM)&VAR_18);
  FUNC_3(VAR_21 == 1, "EM_SETCHARFORMAT returned %d instead of 1\n", VAR_21);



  FUNC_1(VAR_17, VAR_16, 0, (LPARAM)"wine");




  FUNC_1(VAR_17, VAR_15, 0, 0);



  VAR_20.cpMin = 1;
  VAR_20.cpMax = 3;
  FUNC_1(VAR_17, VAR_4, 0, (LPARAM)&VAR_20);
  FUNC_1(VAR_17, VAR_5, VAR_10, (LPARAM)&VAR_18);



  VAR_20.cpMin = 5;
  VAR_20.cpMax = 7;
  FUNC_1(VAR_17, VAR_4, 0, (LPARAM)&VAR_20);
  FUNC_1(VAR_17, VAR_5, VAR_10, (LPARAM)&VAR_19);



  FUNC_3((VAR_18 == VAR_19.dwMask) && (VAR_18 == VAR_19.dwEffects),
     "Copied text retained formatting - cf2.dwMask: %x, cf2test.dwMask: %x, cf2.dwEffects: %x, cf2test.dwEffects: %x\n",
     VAR_18, VAR_19.dwMask, VAR_18, VAR_19.dwEffects);
  FUNC_0(VAR_17);
}
