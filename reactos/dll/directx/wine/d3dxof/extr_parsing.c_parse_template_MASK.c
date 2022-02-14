
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* pdxf; scalar_t__ value; } ;
typedef TYPE_3__ parse_buffer ;
struct TYPE_8__ {size_t nb_xtemplates; TYPE_1__* xtemplates; } ;
struct TYPE_7__ {int class_id; int name; } ;
typedef int GUID ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,size_t,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static BOOL FUNC_5(parse_buffer * VAR_7)
{
  if (FUNC_2(VAR_7) != VAR_5)
    return VAR_0;
  if (FUNC_2(VAR_7) != VAR_3)
    return VAR_0;
  FUNC_4(VAR_7->pdxf->xtemplates[VAR_7->pdxf->nb_xtemplates].name, (char*)VAR_7->value);
  if (FUNC_2(VAR_7) != VAR_4)
    return VAR_0;
  if (FUNC_2(VAR_7) != VAR_2)
    return VAR_0;
  VAR_7->pdxf->xtemplates[VAR_7->pdxf->nb_xtemplates].class_id = *(GUID*)VAR_7->value;
  if (!FUNC_3(VAR_7))
    return VAR_0;
  if (FUNC_2(VAR_7) != VAR_1)
    return VAR_0;

  FUNC_0("%d - %s - %s\n", VAR_7->pdxf->nb_xtemplates, VAR_7->pdxf->xtemplates[VAR_7->pdxf->nb_xtemplates].name, FUNC_1(&VAR_7->pdxf->xtemplates[VAR_7->pdxf->nb_xtemplates].class_id));
  VAR_7->pdxf->nb_xtemplates++;

  return VAR_6;
}
