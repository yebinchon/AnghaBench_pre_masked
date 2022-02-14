
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_5__ {int numatts; char const** attnames; TYPE_1__ dobj; } ;
typedef TYPE_2__ TableInfo ;
 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_0, TableInfo *VAR_1)
{
 if (VAR_0 > 0 && VAR_0 <= VAR_1->numatts)
  return VAR_1->attnames[VAR_0 - 1];
 switch (VAR_0)
 {
  case 129:
   return "ctid";
  case 130:
   return "xmin";
  case 131:
   return "cmin";
  case 132:
   return "xmax";
  case 133:
   return "cmax";
  case 128:
   return "tableoid";
 }
 FUNC_0("invalid column number %d for table \"%s\"",
    VAR_0, VAR_1->dobj.name);
 return ((void*)0);
}
