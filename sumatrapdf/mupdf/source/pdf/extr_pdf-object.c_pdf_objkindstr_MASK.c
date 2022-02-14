
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int kind; } ;
typedef TYPE_1__ pdf_obj ;




 TYPE_1__* VAR_0 ;


 TYPE_1__* VAR_1 ;

 TYPE_1__* VAR_2 ;


 TYPE_1__* VAR_3 ;

__attribute__((used)) static char *
FUNC_0(pdf_obj *VAR_4)
{
 if (VAR_4 == VAR_2)
  return "null";
 if (VAR_4 == VAR_3 || VAR_4 == VAR_0)
  return "boolean";
 if (VAR_4 < VAR_1)
  return "name";
 switch (VAR_4->kind)
 {
 case 131: return "integer";
 case 129: return "real";
 case 128: return "string";
 case 130: return "name";
 case 134: return "array";
 case 133: return "dictionary";
 case 132: return "reference";
 }
 return "<unknown>";
}
