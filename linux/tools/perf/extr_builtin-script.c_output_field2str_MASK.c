
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum perf_output_field { ____Placeholder_perf_output_field } perf_output_field ;
struct TYPE_3__ {int field; char* str; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(enum perf_output_field VAR_1)
{
 int VAR_2, VAR_3 = FUNC_0(VAR_0);
 const char *VAR_4 = "";

 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  if (VAR_0[VAR_2].field == VAR_1) {
   VAR_4 = VAR_0[VAR_2].str;
   break;
  }
 }
 return VAR_4;
}
