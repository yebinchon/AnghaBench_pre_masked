
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int fDsrSensitivity; unsigned int fOutxDsrFlow; } ;
struct TYPE_6__ {scalar_t__ old_style; scalar_t__ result; } ;
typedef TYPE_1__ TEST ;
typedef unsigned int DWORD ;
typedef TYPE_2__ DCB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,unsigned int,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static void FUNC_2(const char *VAR_28, const TEST *VAR_29, int VAR_30, const DCB *VAR_31, const DCB *VAR_32)
{


 FUNC_1(VAR_2, (DWORD)sizeof(DCB), "%u");


 if(VAR_29->old_style && VAR_29->result)
 {
  FUNC_1(VAR_21, ((unsigned int)VAR_30 & 1), "%u");
  FUNC_1(VAR_15, ((unsigned int)VAR_30 & 3), "%u");
  FUNC_1(VAR_20, ((unsigned int)VAR_30 & 1), "%u");
  FUNC_1(VAR_18, ((unsigned)VAR_30 & 1), "%u");
  FUNC_1(VAR_24, ((unsigned)VAR_30 & 3), "%u");
 }
 else
 {
  FUNC_0(VAR_21, "%u");
  FUNC_0(VAR_15, "%u");
  FUNC_0(VAR_20, "%u");
  FUNC_0(VAR_18, "%u");
  FUNC_0(VAR_24, "%u");
 }

 if(VAR_29->result)
 {


  if(!VAR_29->old_style)
  {
   FUNC_1(VAR_22, VAR_32->fDsrSensitivity, "%u");
   FUNC_1(VAR_14, VAR_32->fOutxDsrFlow, "%u");
  }
  else
  {


   FUNC_1(VAR_22, ((unsigned int)VAR_30 & 1), "%u");
   FUNC_0(VAR_14, "%u");
  }
 }
 else
 {
  FUNC_0(VAR_22, "%u");
  FUNC_0(VAR_14, "%u");
 }


 FUNC_0(VAR_0, "%u");
 FUNC_0(VAR_13, "%u");
 FUNC_0(VAR_23, "%u");
 FUNC_0(VAR_25, "%u");
 FUNC_0(VAR_17, "%u");
 FUNC_0(VAR_19, "%u");
 FUNC_0(VAR_12, "%u");
 FUNC_0(VAR_16, "%u");
 FUNC_0(VAR_26, "%u");
 FUNC_0(VAR_11, "%u");
 FUNC_0(VAR_9, "%u");
 FUNC_0(VAR_1, "%u");
 FUNC_0(VAR_6, "%u");
 FUNC_0(VAR_7, "%u");
 FUNC_0(VAR_10, "%d");
 FUNC_0(VAR_8, "%d");
 FUNC_0(VAR_4, "%d");
 FUNC_0(VAR_3, "%d");
 FUNC_0(VAR_5, "%d");
 FUNC_0(VAR_27, "%u");
}
