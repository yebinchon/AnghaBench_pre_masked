
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int download ;
struct TYPE_5__ {int cx; } ;
struct TYPE_4__ {scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef int LONG ;
typedef int HWND ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,int ,int *,int) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* FUNC_9 (int ) ;
 int * VAR_9 ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (char*,char*) ;

void FUNC_12(HWND VAR_10)
{
 unsigned int VAR_11;
 RECT VAR_12;
 LONG VAR_13;
 char VAR_14[64];

 FUNC_6(FUNC_2(VAR_10, VAR_9[0]), &VAR_12);
 FUNC_7(((void*)0), VAR_10, (POINT*)&VAR_12, 2);
 VAR_6 = VAR_12.right - VAR_12.left;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9); VAR_11++) {

  VAR_6 = FUNC_10(VAR_6, FUNC_4(VAR_10, VAR_9[VAR_11]) + ((VAR_8 && VAR_11 == 0) ? (3 * VAR_7) / 2 : VAR_7));
 }


 VAR_6 = FUNC_10(VAR_6, FUNC_3(FUNC_2(VAR_10, VAR_2), FUNC_9(VAR_4)).cx + VAR_7);
 if (VAR_8) {
  FUNC_11(VAR_14, FUNC_9(VAR_5));
  FUNC_1(VAR_14, sizeof(VAR_14));
  VAR_6 = FUNC_10(VAR_6, FUNC_3(FUNC_2(VAR_10, VAR_3), VAR_14).cx + (3 * VAR_7) / 2);
  VAR_13 = FUNC_5(FUNC_2(VAR_10, VAR_3), VAR_1);
  VAR_13|= VAR_0;
  FUNC_8(FUNC_2(VAR_10, VAR_3), VAR_1, VAR_13);
 }
}
