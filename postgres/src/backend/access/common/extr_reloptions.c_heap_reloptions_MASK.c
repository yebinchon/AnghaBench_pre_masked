
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int bytea ;
struct TYPE_3__ {int analyze_threshold; int analyze_scale_factor; } ;
struct TYPE_4__ {int fillfactor; TYPE_1__ autovacuum; } ;
typedef TYPE_2__ StdRdOptions ;
typedef int Datum ;





 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int,int ) ;

bytea *
FUNC_1(char VAR_2, Datum VAR_3, bool VAR_4)
{
 StdRdOptions *VAR_5;

 switch (VAR_2)
 {
  case 128:
   VAR_5 = (StdRdOptions *)
    FUNC_0(VAR_3, VAR_4, VAR_1);
   if (VAR_5 != ((void*)0))
   {

    VAR_5->fillfactor = 100;
    VAR_5->autovacuum.analyze_threshold = -1;
    VAR_5->autovacuum.analyze_scale_factor = -1;
   }
   return (bytea *) VAR_5;
  case 129:
  case 130:
   return FUNC_0(VAR_3, VAR_4, VAR_0);
  default:

   return ((void*)0);
 }
}
