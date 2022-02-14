
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* VacAttrStatsP ;
struct TYPE_7__ {int stats_valid; double stanullfrac; double stawidth; double stadistinct; TYPE_1__* attrtype; } ;
struct TYPE_6__ {int typlen; int typbyval; } ;
typedef int Datum ;
typedef int (* AnalyzeAttrFetchFunc ) (TYPE_2__*,int,int*) ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(VacAttrStatsP VAR_0,
       AnalyzeAttrFetchFunc VAR_1,
       int VAR_2,
       double VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;
 double VAR_7 = 0;
 bool VAR_8 = (!VAR_0->attrtype->typbyval &&
         VAR_0->attrtype->typlen == -1);
 bool VAR_9 = (!VAR_0->attrtype->typbyval &&
          VAR_0->attrtype->typlen < 0);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  Datum VAR_10;
  bool VAR_11;

  FUNC_4();

  VAR_10 = VAR_1(VAR_0, VAR_4, &VAR_11);


  if (VAR_11)
  {
   VAR_5++;
   continue;
  }
  VAR_6++;







  if (VAR_8)
  {
   VAR_7 += FUNC_2(FUNC_1(VAR_10));
  }
  else if (VAR_9)
  {

   VAR_7 += FUNC_3(FUNC_0(VAR_10)) + 1;
  }
 }


 if (VAR_6 > 0)
 {
  VAR_0->stats_valid = 1;

  VAR_0->stanullfrac = (double) VAR_5 / (double) VAR_2;
  if (VAR_9)
   VAR_0->stawidth = VAR_7 / (double) VAR_6;
  else
   VAR_0->stawidth = VAR_0->attrtype->typlen;
  VAR_0->stadistinct = 0.0;
 }
 else if (VAR_5 > 0)
 {

  VAR_0->stats_valid = 1;
  VAR_0->stanullfrac = 1.0;
  if (VAR_9)
   VAR_0->stawidth = 0;
  else
   VAR_0->stawidth = VAR_0->attrtype->typlen;
  VAR_0->stadistinct = 0.0;
 }
}
