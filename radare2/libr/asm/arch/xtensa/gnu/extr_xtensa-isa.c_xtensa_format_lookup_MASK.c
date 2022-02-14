
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_formats; TYPE_1__* formats; } ;
typedef TYPE_2__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int xtensa_format ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

xtensa_format
FUNC_3 (xtensa_isa VAR_4, const char *VAR_5)
{
  xtensa_isa_internal *VAR_6 = (xtensa_isa_internal *) VAR_4;
  int VAR_7;

  if (!VAR_5 || !*VAR_5)
    {
      VAR_2 = VAR_1;
      FUNC_2 (VAR_3, "invalid format name");
      return VAR_0;
    }

  for (VAR_7 = 0; VAR_7 < VAR_6->num_formats; VAR_7++)
    {
   if (FUNC_0 (VAR_5, VAR_6->formats[VAR_7].name) == 0) {
    return VAR_7;
   }
    }

  VAR_2 = VAR_1;
  FUNC_1 (VAR_3, "format \"%s\" not recognized", VAR_5);
  return VAR_0;
}
