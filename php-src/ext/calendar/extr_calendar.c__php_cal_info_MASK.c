
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct cal_entry_t {int num_months; int symbol; int name; int max_days_in_month; int * month_name_short; int * month_name_long; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 struct cal_entry_t* VAR_0 ;

__attribute__((used)) static void FUNC_5(int VAR_1, zval *VAR_2)
{
 zval VAR_3, VAR_4;
 int VAR_5;
 const struct cal_entry_t *VAR_6;

 VAR_6 = &VAR_0[VAR_1];
 FUNC_4(VAR_2);

 FUNC_4(&VAR_3);
 FUNC_4(&VAR_4);

 for (VAR_5 = 1; VAR_5 <= VAR_6->num_months; VAR_5++) {
  FUNC_3(&VAR_3, VAR_5, VAR_6->month_name_long[VAR_5]);
  FUNC_3(&VAR_4, VAR_5, VAR_6->month_name_short[VAR_5]);
 }

 FUNC_2(VAR_2, "months", &VAR_3);
 FUNC_2(VAR_2, "abbrevmonths", &VAR_4);
 FUNC_0(VAR_2, "maxdaysinmonth", VAR_6->max_days_in_month);
 FUNC_1(VAR_2, "calname", VAR_6->name);
 FUNC_1(VAR_2, "calsymbol", VAR_6->symbol);

}
