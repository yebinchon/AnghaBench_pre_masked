
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu_event_symbol {int type; int symbol; } ;
typedef enum perf_pmu_event_symbol_type { ____Placeholder_perf_pmu_event_symbol_type } perf_pmu_event_symbol_type ;


 int VAR_0 ;
 struct perf_pmu_event_symbol* FUNC_0 (struct perf_pmu_event_symbol*,int ,size_t,int,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;

enum perf_pmu_event_symbol_type
FUNC_5(const char *VAR_4)
{
 struct perf_pmu_event_symbol VAR_5, *VAR_6;


 if (VAR_3 == 0)
  FUNC_1();





 if ((VAR_3 <= 0) || !FUNC_2(VAR_4, "cpu"))
  return VAR_0;

 VAR_5.symbol = FUNC_3(VAR_4);
 VAR_6 = FUNC_0(&VAR_5, VAR_2,
   (size_t) VAR_3,
   sizeof(struct perf_pmu_event_symbol), VAR_1);
 FUNC_4(&VAR_5.symbol);
 return VAR_6 ? VAR_6->type : VAR_0;
}
