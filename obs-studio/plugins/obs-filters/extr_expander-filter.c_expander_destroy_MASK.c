
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expander_data {struct expander_data* env_in; struct expander_data** gaindB; struct expander_data** runaverage; struct expander_data** envelope_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct expander_data*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct expander_data *VAR_2 = VAR_1;

 for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_2->envelope_buf[VAR_3]);
  FUNC_0(VAR_2->runaverage[VAR_3]);
  FUNC_0(VAR_2->gaindB[VAR_3]);
 }
 FUNC_0(VAR_2->env_in);
 FUNC_0(VAR_2);
}
