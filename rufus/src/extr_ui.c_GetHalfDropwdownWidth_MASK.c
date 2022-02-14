
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cx; } ;
struct TYPE_4__ {scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef int HWND ;


 int FUNC_0 (int ,int ) ;
 TYPE_3__ FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *,int ,int *,int) ;
 scalar_t__ VAR_13 ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 char* FUNC_5 (unsigned int,...) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (char*,int,char*,unsigned int,char*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

void FUNC_8(HWND VAR_18)
{
 RECT VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22;
 char VAR_23[256];


 FUNC_3(FUNC_0(VAR_18, VAR_2), &VAR_19);
 FUNC_4(((void*)0), VAR_18, (POINT*)&VAR_19, 2);
 VAR_15 = VAR_19.right - VAR_19.left - VAR_13;


 VAR_15 = FUNC_6(VAR_15, FUNC_1(FUNC_0(VAR_18, VAR_2), (char*)VAR_16).cx);


 for (VAR_20 = 512, VAR_21 = 1, VAR_22 = VAR_6; VAR_21<VAR_5; VAR_20 <<= 1, VAR_21++) {
  if (VAR_20 > 8192) {
   VAR_20 /= 1024;
   VAR_22++;
  }
  FUNC_7(VAR_23, 64, "%d %s", VAR_20, FUNC_5(VAR_22));
  VAR_15 = FUNC_6(VAR_15, FUNC_1(FUNC_0(VAR_18, VAR_1), FUNC_5(VAR_7, VAR_23)).cx);
 }


 for (VAR_22 = VAR_8; VAR_22 <= VAR_9; VAR_22++)
  VAR_15 = FUNC_6(VAR_15, FUNC_1(FUNC_0(VAR_18, VAR_4), FUNC_5(VAR_22)).cx);


 for (VAR_20 = 1; VAR_20 <= 5; VAR_20++) {
  char* VAR_24 = (VAR_20 == 1) ? FUNC_5(VAR_10, 1) : FUNC_5(VAR_11, (VAR_20 == 2) ? 2 : 4, (VAR_20 == 2) ? "" : FUNC_5(VAR_12, VAR_14[VAR_20 - 3]));
  VAR_15 = FUNC_6(VAR_15, FUNC_1(FUNC_0(VAR_18, VAR_4), VAR_24).cx);
 }



 VAR_15 = FUNC_6(VAR_15, FUNC_2(VAR_18, VAR_3) - VAR_17);
 VAR_15 = FUNC_6(VAR_15, FUNC_2(VAR_18, VAR_0) - VAR_17);


 VAR_15 += VAR_13;
}
