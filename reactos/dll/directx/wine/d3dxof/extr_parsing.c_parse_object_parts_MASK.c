
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {size_t nb_children; TYPE_2__* root; struct TYPE_12__** children; scalar_t__ binary; TYPE_1__* ptarget; scalar_t__ pos_data; scalar_t__ size; } ;
typedef TYPE_3__ xobject ;
struct TYPE_13__ {int nb_pxo_globals; TYPE_3__* pxo; int level; scalar_t__ value; TYPE_3__* pxo_tab; TYPE_1__** pxo_globals; scalar_t__ cur_pos_data; } ;
typedef TYPE_4__ parse_buffer ;
typedef int ULONG ;
struct TYPE_11__ {scalar_t__ nb_subobjects; } ;
struct TYPE_10__ {int nb_subobjects; int name; } ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static BOOL FUNC_8(parse_buffer * VAR_7, BOOL VAR_8)
{
  VAR_7->pxo->nb_children = 0;

  if (!FUNC_6(VAR_7))
    return VAR_0;

  if (VAR_8)
  {
    VAR_7->pxo->size = VAR_7->cur_pos_data - VAR_7->pxo->pos_data;

    while (1)
    {
      if (FUNC_3(VAR_7) == VAR_5)
      {
        ULONG VAR_9, VAR_10;
        FUNC_4(VAR_7);
        if (FUNC_4(VAR_7) != VAR_4)
          return VAR_0;
        if (FUNC_4(VAR_7) != VAR_3)
          return VAR_0;
        FUNC_2("Found optional reference %s\n", (char*)VAR_7->value);
        for (VAR_9 = 0; VAR_9 < (VAR_7->nb_pxo_globals+1); VAR_9++)
        {
          for (VAR_10 = 0; VAR_10 < (VAR_7->pxo_globals[VAR_9])[0].nb_subobjects; VAR_10++)
          {
            if (!FUNC_7((VAR_7->pxo_globals[VAR_9])[VAR_10].name, (char*)VAR_7->value))
              goto _exit;
          }
        }
_exit:
        if (VAR_9 == (VAR_7->nb_pxo_globals+1))
        {
          FUNC_0("Reference to unknown object %s\n", (char*)VAR_7->value);
          return VAR_0;
        }

        if (VAR_7->pxo->root->nb_subobjects >= VAR_2)
        {
            FUNC_1("Too many sub-objects\n");
            return VAR_0;
        }

        VAR_7->pxo->children[VAR_7->pxo->nb_children] = &VAR_7->pxo_tab[VAR_7->pxo->root->nb_subobjects++];
        VAR_7->pxo->children[VAR_7->pxo->nb_children]->ptarget = &(VAR_7->pxo_globals[VAR_9])[VAR_10];
        VAR_7->pxo->children[VAR_7->pxo->nb_children]->binary = VAR_0;
        VAR_7->pxo->nb_children++;
      }
      else if (FUNC_3(VAR_7) == VAR_4)
      {
        xobject* VAR_11 = VAR_7->pxo;

        if (VAR_7->pxo->root->nb_subobjects >= VAR_2)
        {
            FUNC_1("Too many sub-objects\n");
            return VAR_0;
        }

        VAR_7->pxo = VAR_7->pxo->children[VAR_7->pxo->nb_children] = &VAR_7->pxo_tab[VAR_7->pxo->root->nb_subobjects];
        VAR_11->root->nb_subobjects++;

        FUNC_2("Enter optional %s\n", (char*)VAR_7->value);
        VAR_7->level++;
        if (!FUNC_5(VAR_7))
        {
          VAR_7->level--;
          return VAR_0;
        }
        VAR_7->level--;
        VAR_7->pxo = VAR_11;
        VAR_7->pxo->nb_children++;
      }
      else
        break;
    }
  }

  if (VAR_7->pxo->nb_children > VAR_1)
  {
    FUNC_1("Too many children %d\n", VAR_7->pxo->nb_children);
    return VAR_0;
  }

  return VAR_6;
}
