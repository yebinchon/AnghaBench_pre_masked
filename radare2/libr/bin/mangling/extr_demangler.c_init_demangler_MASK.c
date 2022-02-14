
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int demangle_func ;
struct TYPE_3__ {int demangle; int symbol; } ;
typedef TYPE_1__ SDemangler ;
typedef int EManglingType ;
typedef scalar_t__ EDemanglerErr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;

EDemanglerErr FUNC_2(SDemangler *VAR_5, char *VAR_6)
{
 EManglingType VAR_7 = 128;
 EDemanglerErr VAR_8 = VAR_1;


 demangle_func VAR_9[] = {
  VAR_4,
  0,
  0
 };

 if (VAR_5 == 0) {
  VAR_8 = VAR_0;
  goto init_demangler_err;
 }

 VAR_7 = FUNC_0(VAR_6);
 switch (VAR_7) {
 case 128:
  VAR_8 = VAR_3;
  break;
 case 129:
  VAR_8 = VAR_2;
  break;
 default:
  break;
 }

 if (VAR_8 != VAR_1) {
  goto init_demangler_err;
 }

 VAR_5->symbol = FUNC_1(VAR_6);
 VAR_5->demangle = VAR_9[VAR_7];

init_demangler_err:
 return VAR_8;
}
