
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t nb_children; void* open; int * children; } ;
typedef TYPE_2__ xtemplate ;
struct TYPE_9__ {scalar_t__ value; TYPE_1__* pdxf; } ;
typedef TYPE_3__ parse_buffer ;
struct TYPE_7__ {size_t nb_xtemplates; TYPE_2__* xtemplates; } ;
typedef void* BOOL ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static BOOL FUNC_3(parse_buffer * VAR_6)
{
  xtemplate* VAR_7 = &VAR_6->pdxf->xtemplates[VAR_6->pdxf->nb_xtemplates];

  if (FUNC_0(VAR_6) == VAR_2)
  {
    FUNC_1(VAR_6);
    if (FUNC_1(VAR_6) != VAR_2)
      return VAR_0;
    if (FUNC_1(VAR_6) != VAR_2)
      return VAR_0;
    VAR_7->open = VAR_5;
  }
  else
  {
    while (1)
    {
      if (FUNC_1(VAR_6) != VAR_4)
        return VAR_0;
      FUNC_2(VAR_7->children[VAR_7->nb_children], (char*)VAR_6->value);
      if (FUNC_0(VAR_6) == VAR_3)
        FUNC_1(VAR_6);
      VAR_7->nb_children++;
      if (FUNC_0(VAR_6) != VAR_1)
        break;
      FUNC_1(VAR_6);
    }
    VAR_7->open = VAR_0;
  }

  return VAR_5;
}
