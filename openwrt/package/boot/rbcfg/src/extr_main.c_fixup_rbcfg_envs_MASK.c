
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbcfg_value {scalar_t__ id; int num_values; struct rbcfg_value const* values; } ;


 int FUNC_0 (struct rbcfg_value*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 struct rbcfg_value* VAR_3 ;
 struct rbcfg_value* VAR_4 ;
 struct rbcfg_value* VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_6, VAR_7, VAR_8;
 const struct rbcfg_value * VAR_9;


 VAR_8 = FUNC_1();


 switch (VAR_8) {
  case 128:
   VAR_9 = VAR_4;
   VAR_7 = FUNC_0(VAR_4);
   break;
  case 129:
   VAR_9 = VAR_3;
   VAR_7 = FUNC_0(VAR_3);
   break;
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++) {
  if (VAR_1 == VAR_5[VAR_6].id) {
   if (VAR_0 == VAR_8)
    VAR_5[VAR_6].id = VAR_2;
   else {
    VAR_5[VAR_6].values = VAR_9;
    VAR_5[VAR_6].num_values = VAR_7;
   }
   break;
  }
 }
}
