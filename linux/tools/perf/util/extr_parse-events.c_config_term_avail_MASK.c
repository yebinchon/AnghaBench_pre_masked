
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_error {int * str; } ;
 int VAR_0 ;
 int FUNC_0 (int **,char*,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (char*) ;

__attribute__((used)) static bool
FUNC_2(int VAR_3, struct parse_events_error *VAR_4)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_0) {
  VAR_4->str = FUNC_1("Invalid term_type");
  return 0;
 }
 if (!VAR_2)
  return 1;

 switch (VAR_3) {
 case 133:
 case 132:
 case 131:
 case 130:
 case 128:
 case 129:
  return 1;
 default:
  if (!VAR_4)
   return 0;


  if (FUNC_0(&VAR_4->str, "'%d' is not usable in 'perf stat'",
        VAR_1[VAR_3]) < 0)
   VAR_4->str = ((void*)0);
  return 0;
 }
}
