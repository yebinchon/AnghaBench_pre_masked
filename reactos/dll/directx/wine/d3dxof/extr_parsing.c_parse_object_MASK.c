
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {size_t level; TYPE_3__* pxo; int * value; TYPE_2__* pdxf; TYPE_1__** pxt; int pxo_tab; int cur_pos_data; } ;
typedef TYPE_4__ parse_buffer ;
typedef size_t ULONG ;
struct TYPE_11__ {int class_id; scalar_t__* name; int type; int root; int binary; int * ptarget; int pos_data; } ;
struct TYPE_10__ {size_t nb_xtemplates; TYPE_1__* xtemplates; } ;
struct TYPE_9__ {int class_id; int name; } ;
typedef int BOOL ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (scalar_t__*,char*) ;

BOOL FUNC_8(parse_buffer * VAR_6)
{
  ULONG VAR_7;

  VAR_6->pxo->pos_data = VAR_6->cur_pos_data;
  VAR_6->pxo->ptarget = ((void*)0);
  VAR_6->pxo->binary = VAR_0;
  VAR_6->pxo->root = VAR_6->pxo_tab;

  if (FUNC_3(VAR_6) != VAR_3)
    return VAR_0;


  for (VAR_7 = 0; VAR_7 < VAR_6->pdxf->nb_xtemplates; VAR_7++)
  {
    if (!FUNC_1((char*)VAR_6->value, VAR_6->pdxf->xtemplates[VAR_7].name, -1))
    {
      VAR_6->pxt[VAR_6->level] = &VAR_6->pdxf->xtemplates[VAR_7];
      FUNC_4(&VAR_6->pxo->type, &VAR_6->pdxf->xtemplates[VAR_7].class_id, 16);
      break;
    }
  }
  if (VAR_7 == VAR_6->pdxf->nb_xtemplates)
  {
    FUNC_0("Unknown template %s\n", (char*)VAR_6->value);
    return VAR_0;
  }

  if (FUNC_2(VAR_6) == VAR_3)
  {
    FUNC_3(VAR_6);
    FUNC_7(VAR_6->pxo->name, (char*)VAR_6->value);
  }
  else
    VAR_6->pxo->name[0] = 0;

  if (FUNC_3(VAR_6) != VAR_4)
    return VAR_0;
  if (FUNC_2(VAR_6) == VAR_2)
  {
    FUNC_3(VAR_6);
    FUNC_4(&VAR_6->pxo->class_id, VAR_6->value, 16);
  }
  else
    FUNC_5(&VAR_6->pxo->class_id, 0, 16);

  if (!FUNC_6(VAR_6, VAR_5))
    return VAR_0;
  if (FUNC_3(VAR_6) != VAR_1)
    return VAR_0;


  FUNC_2(VAR_6);

  return VAR_5;
}
