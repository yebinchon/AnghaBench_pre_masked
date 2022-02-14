
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vsigproc_t ;
struct TYPE_5__ {int xferType; } ;
struct TYPE_4__ {scalar_t__* noglobargv; } ;
typedef int ConfirmResumeDownloadProc ;
typedef int CommandPtr ;
typedef TYPE_1__* ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char const*,int,int,int,int,int,int,int,int ,int ) ;
 int FUNC_2 (int *,char const*,char const*,int,int,int,int,int,int ,int ) ;
 int FUNC_3 (int *,int,int ,char*,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int const,char const** const,char*) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;
 int FUNC_8 (int const) ;
 int VAR_2 ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*) ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
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

void
FUNC_13(const int VAR_26, const char **const VAR_27, const CommandPtr VAR_28, const ArgvInfoPtr VAR_29)
{
 int VAR_30;
 int VAR_31 = 0;
 int VAR_32 = VAR_17;
 int VAR_33 = VAR_9;
 int VAR_34 = VAR_20;
 int VAR_35 = VAR_22;
 const char *VAR_36 = ((void*)0);
 int VAR_37;
 int VAR_38;
 int VAR_39;
 int VAR_40 = VAR_4.xferType;
 int VAR_41 = 0;
 int VAR_42 = VAR_12;
 char VAR_43[256];
 vsigproc_t VAR_44;
 ConfirmResumeDownloadProc VAR_45;

 VAR_45 = VAR_0;
 VAR_7 = VAR_11;
 FUNC_0(VAR_8);
 FUNC_6();
 while ((VAR_30 = FUNC_5(VAR_26, VAR_27, "aAzfrRTD")) >= 0) switch (VAR_30) {
  case 'a':
   VAR_40 = VAR_23;
   break;
  case 'A':



   VAR_33 = VAR_10;
   break;
  case 'f':
  case 'Z':




   VAR_34 = VAR_19;
   VAR_45 = VAR_1;
   break;
  case 'z':





   VAR_31 = 1;
   break;
  case 'r':
  case 'R':



   VAR_32 = VAR_18;
   break;
  case 'T':
   VAR_35 = VAR_21;
   break;
  case 'D':






   VAR_41++;
   break;
  default:
   FUNC_8(VAR_28);
   return;
 }

 if (VAR_41 >= 2)
  VAR_42 = VAR_13;

 if (VAR_31 != 0) {
  if (VAR_6 > VAR_26 - 2) {
   FUNC_8(VAR_28);
   (void) FUNC_12(VAR_24, "\nFor get with rename, try \"get -z remote-path-name local-path-name\".\n");
   return;
  }
  VAR_44 = FUNC_7(VAR_2, VAR_3);
  VAR_37 = FUNC_2(&VAR_5, VAR_27[VAR_6], VAR_27[VAR_6 + 1], VAR_40, (-1), VAR_34, VAR_33, VAR_42, VAR_1, 0);
  if (VAR_37 < 0)
   FUNC_3(&VAR_5, VAR_37, VAR_14, "get", VAR_27[VAR_6]);
 } else {
  VAR_44 = FUNC_7(VAR_2, VAR_3);
  for (VAR_38=VAR_6; VAR_38<VAR_26; VAR_38++) {
   VAR_39 = (VAR_29->noglobargv[VAR_38] != 0) ? VAR_15: VAR_16;
   FUNC_9(VAR_43, VAR_27[VAR_38]);
   FUNC_10(VAR_43);
   VAR_37 = FUNC_1(&VAR_5, VAR_43, VAR_36, VAR_32, VAR_39, VAR_40, VAR_34, VAR_33, VAR_42, VAR_35, VAR_45, 0);
   if (VAR_37 < 0)
    FUNC_3(&VAR_5, VAR_37, VAR_14, "get", VAR_27[VAR_38]);
  }
 }
 (void) FUNC_7(VAR_2, VAR_44);
 (void) FUNC_11(VAR_25);

 if (VAR_42 == VAR_13) {

  FUNC_4();
 }
}
