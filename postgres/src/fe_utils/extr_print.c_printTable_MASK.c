
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {TYPE_1__* opt; } ;
typedef TYPE_2__ printTableContent ;
struct TYPE_20__ {int format; int expanded; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__ const*,int ,int,int **,int*) ;






 int VAR_1 ;



 char* FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__ const*,int *,int) ;
 int FUNC_6 (TYPE_2__ const*,int *,int) ;
 int FUNC_7 (TYPE_2__ const*,int *) ;
 int FUNC_8 (TYPE_2__ const*,int *) ;
 int FUNC_9 (TYPE_2__ const*,int *) ;
 int FUNC_10 (TYPE_2__ const*,int *) ;
 int FUNC_11 (TYPE_2__ const*,int *) ;
 int FUNC_12 (TYPE_2__ const*,int *) ;
 int FUNC_13 (TYPE_2__ const*,int *) ;
 int FUNC_14 (TYPE_2__ const*,int *) ;
 int FUNC_15 (TYPE_2__ const*,int *) ;
 int FUNC_16 (TYPE_2__ const*,int *) ;
 int FUNC_17 (TYPE_2__ const*,int *) ;
 int FUNC_18 (TYPE_2__ const*,int *) ;
 int FUNC_19 (TYPE_2__ const*,int *) ;
 int VAR_3 ;

void
FUNC_20(const printTableContent *VAR_4,
     FILE *VAR_5, bool VAR_6, FILE *VAR_7)
{
 bool VAR_8 = 0;

 if (VAR_2)
  return;

 if (VAR_4->opt->format == VAR_1)
  return;


 if (!VAR_6 &&
  VAR_4->opt->format != 136 &&
  VAR_4->opt->format != 128)
 {
  FUNC_1(VAR_4, 0, (VAR_4->opt->expanded == 1), &VAR_5, &VAR_6);
  VAR_8 = VAR_6;
 }



 if (VAR_7)
  FUNC_5(VAR_4, VAR_7, 0);

 switch (VAR_4->opt->format)
 {
  case 129:
   if (VAR_4->opt->expanded == 1)
    FUNC_19(VAR_4, VAR_5);
   else
    FUNC_18(VAR_4, VAR_5);
   break;
  case 136:
  case 128:






   if (VAR_4->opt->expanded == 1 ||
    (VAR_4->opt->expanded == 2 && VAR_6))
    FUNC_6(VAR_4, VAR_5, VAR_6);
   else
    FUNC_5(VAR_4, VAR_5, VAR_6);
   break;
  case 134:
   if (VAR_4->opt->expanded == 1)
    FUNC_10(VAR_4, VAR_5);
   else
    FUNC_9(VAR_4, VAR_5);
   break;
  case 133:
   if (VAR_4->opt->expanded == 1)
    FUNC_12(VAR_4, VAR_5);
   else
    FUNC_11(VAR_4, VAR_5);
   break;
  case 135:
   if (VAR_4->opt->expanded == 1)
    FUNC_8(VAR_4, VAR_5);
   else
    FUNC_7(VAR_4, VAR_5);
   break;
  case 132:
   if (VAR_4->opt->expanded == 1)
    FUNC_15(VAR_4, VAR_5);
   else
    FUNC_14(VAR_4, VAR_5);
   break;
  case 131:
   if (VAR_4->opt->expanded == 1)
    FUNC_15(VAR_4, VAR_5);
   else
    FUNC_13(VAR_4, VAR_5);
   break;
  case 130:
   if (VAR_4->opt->expanded == 1)
    FUNC_17(VAR_4, VAR_5);
   else
    FUNC_16(VAR_4, VAR_5);
   break;
  default:
   FUNC_4(VAR_3, FUNC_2("invalid output format (internal error): %d"),
     VAR_4->opt->format);
   FUNC_3(VAR_0);
 }

 if (VAR_8)
  FUNC_0(VAR_5);
}
