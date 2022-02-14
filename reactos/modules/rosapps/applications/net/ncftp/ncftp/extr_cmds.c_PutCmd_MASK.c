
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vsigproc_t ;
struct TYPE_5__ {int xferType; } ;
struct TYPE_4__ {scalar_t__* noglobargv; } ;
typedef int ConfirmResumeUploadProc ;
typedef int CommandPtr ;
typedef TYPE_1__* ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ,char*,char const*) ;
 int FUNC_2 (int *,char*,char const*,int,int,int,int,int *,int *,int,int,int ,int ) ;
 int FUNC_3 (int *,char const*,char const*,int,int,int,int *,int *,int,int,int ,int ) ;
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

void
FUNC_13(const int VAR_24, const char **const VAR_25, const CommandPtr VAR_26, const ArgvInfoPtr VAR_27)
{
 int VAR_28;
 int VAR_29 = 0;
 int VAR_30 = VAR_17;
 int VAR_31 = VAR_9;
 const char *VAR_32 = ((void*)0);
 int VAR_33;
 int VAR_34;
 int VAR_35;
 int VAR_36 = VAR_4.xferType;
 int VAR_37 = 0;
 int VAR_38 = VAR_12;
 int VAR_39 = VAR_20;
 char VAR_40[256];
 vsigproc_t VAR_41;
 ConfirmResumeUploadProc VAR_42;

 VAR_42 = VAR_0;
 VAR_7 = VAR_11;
 FUNC_0(VAR_8);
 FUNC_6();
 while ((VAR_28 = FUNC_5(VAR_24, VAR_25, "AafZzrRD")) >= 0) switch (VAR_28) {
  case 'a':
   VAR_36 = VAR_21;
   break;
  case 'A':



   VAR_31 = VAR_10;
   break;
  case 'f':
  case 'Z':




   VAR_39 = VAR_19;
   VAR_42 = VAR_1;
   break;
  case 'z':





   VAR_29 = 1;
   break;
  case 'r':
  case 'R':
   VAR_30 = VAR_18;



   VAR_30 = VAR_18;
   break;
  case 'D':






   VAR_37++;
   break;
  default:
   FUNC_8(VAR_26);
   return;
 }

 if (VAR_37 >= 2)
  VAR_38 = VAR_13;

 if (VAR_29 != 0) {
  if (VAR_6 > (VAR_24 - 2)) {
   FUNC_8(VAR_26);
   (void) FUNC_12(VAR_22, "\nFor put with rename, try \"put -z local-path-name remote-path-name\".\n");
   return;
  }
  VAR_41 = FUNC_7(VAR_2, VAR_3);
  VAR_33 = FUNC_3(&VAR_5, VAR_25[VAR_6], VAR_25[VAR_6 + 1], VAR_36, (-1), VAR_31, ((void*)0), ((void*)0), VAR_39, VAR_38, VAR_42, 0);
  if (VAR_33 < 0)
   FUNC_1(&VAR_5, VAR_33, VAR_14, "put", VAR_25[VAR_6 + 1]);
 } else {
  VAR_41 = FUNC_7(VAR_2, VAR_3);
  for (VAR_34=VAR_6; VAR_34<VAR_24; VAR_34++) {
   VAR_35 = (VAR_27->noglobargv[VAR_34] != 0) ? VAR_15: VAR_16;
   FUNC_9(VAR_40, VAR_25[VAR_34]);
   FUNC_10(VAR_40);
   VAR_33 = FUNC_2(&VAR_5, VAR_40, VAR_32, VAR_30, VAR_35, VAR_36, VAR_31, ((void*)0), ((void*)0), VAR_39, VAR_38, VAR_42, 0);
   if (VAR_33 < 0)
    FUNC_1(&VAR_5, VAR_33, VAR_14, "put", VAR_25[VAR_34]);
  }
 }


 FUNC_4();

 (void) FUNC_7(VAR_2, VAR_41);
 (void) FUNC_11(VAR_23);
}
