
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int timelib_format_specifier_code ;
struct TYPE_3__ {char specifier; int code; } ;
typedef TYPE_1__ timelib_format_specifier ;


 int VAR_0 ;

__attribute__((used)) static timelib_format_specifier_code FUNC_0(char VAR_1, const timelib_format_specifier* VAR_2)
{
 while (VAR_2 && VAR_2->specifier != '\0') {
  if (VAR_2->specifier == VAR_1) {
   return VAR_2->code;
  }
  VAR_2++;
 }
 return VAR_0;
}
