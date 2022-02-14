
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fun; } ;
struct TYPE_7__ {char const* key; TYPE_1__ u; } ;
typedef TYPE_2__ xtensa_lookup_entry ;
struct TYPE_8__ {scalar_t__ num_funcUnits; int funcUnit_lookup_table; } ;
typedef TYPE_3__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int xtensa_funcUnit ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int ,scalar_t__,int,int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

xtensa_funcUnit
FUNC_3 (xtensa_isa VAR_5, const char *VAR_6)
{
  xtensa_isa_internal *VAR_7 = (xtensa_isa_internal *) VAR_5;
  xtensa_lookup_entry VAR_8, *VAR_9 = 0;

  if (!VAR_6 || !*VAR_6)
    {
      VAR_3 = VAR_1;
      FUNC_2 (VAR_4, "invalid functional unit name");
      return VAR_0;
    }

  if (VAR_7->num_funcUnits != 0)
    {
      VAR_8.key = VAR_6;
      VAR_9 = FUNC_0 (&VAR_8, VAR_7->funcUnit_lookup_table,
   VAR_7->num_funcUnits, sizeof (xtensa_lookup_entry),
   VAR_2);
    }

  if (!VAR_9)
    {
      VAR_3 = VAR_1;
      FUNC_1 (VAR_4,
        "functional unit \"%s\" not recognized", VAR_6);
      return VAR_0;
    }

  return VAR_9->u.fun;
}
