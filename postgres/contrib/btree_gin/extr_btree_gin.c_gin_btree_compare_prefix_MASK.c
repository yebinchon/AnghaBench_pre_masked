
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_5__ {int flinfo; } ;
struct TYPE_4__ {int strategy; int datum; int typecmp; } ;
typedef TYPE_1__ QueryInfo ;
typedef TYPE_2__* FunctionCallInfo ;
typedef int Datum ;







 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static Datum
FUNC_7(FunctionCallInfo VAR_1)
{
 Datum VAR_2 = FUNC_2(0);
 Datum VAR_3 = FUNC_2(1);
 QueryInfo *VAR_4 = (QueryInfo *) FUNC_3(3);
 int32 VAR_5,
    VAR_6;

 VAR_6 = FUNC_1(FUNC_0(
             VAR_4->typecmp,
             VAR_1->flinfo,
             FUNC_4(),
             (VAR_4->strategy == 128 ||
              VAR_4->strategy == 129)
             ? VAR_4->datum : VAR_2,
             VAR_3));

 switch (VAR_4->strategy)
 {
  case 128:

   if (VAR_6 > 0)
    VAR_5 = 0;
   else
    VAR_5 = 1;
   break;
  case 129:

   if (VAR_6 >= 0)
    VAR_5 = 0;
   else
    VAR_5 = 1;
   break;
  case 132:
   if (VAR_6 != 0)
    VAR_5 = 1;
   else
    VAR_5 = 0;
   break;
  case 131:

   if (VAR_6 <= 0)
    VAR_5 = 0;
   else
    VAR_5 = 1;
   break;
  case 130:


   if (VAR_6 < 0)
    VAR_5 = 0;
   else if (VAR_6 == 0)
    VAR_5 = -1;
   else
    VAR_5 = 1;
   break;
  default:
   FUNC_6(VAR_0, "unrecognized strategy number: %d",
     VAR_4->strategy);
   VAR_5 = 0;
 }

 FUNC_5(VAR_5);
}
