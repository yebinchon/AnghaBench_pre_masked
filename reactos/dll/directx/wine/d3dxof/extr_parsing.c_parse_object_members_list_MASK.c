
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {size_t nb_members; TYPE_4__* members; int name; } ;
typedef TYPE_6__ xtemplate ;
struct TYPE_19__ {size_t level; scalar_t__ cur_pstrings; scalar_t__ pstrings; TYPE_3__* pxo; scalar_t__ cur_pos_data; scalar_t__ pdata; scalar_t__ value; TYPE_5__* pdxf; TYPE_6__** pxt; } ;
typedef TYPE_7__ parse_buffer ;
typedef size_t WORD ;
typedef size_t ULONG ;
struct TYPE_17__ {size_t nb_xtemplates; TYPE_6__* xtemplates; } ;
struct TYPE_16__ {size_t nb_dims; size_t* dim_value; scalar_t__ type; size_t idx_template; int name; scalar_t__* dim_fixed; } ;
struct TYPE_15__ {size_t nb_members; TYPE_2__* members; TYPE_1__* root; } ;
struct TYPE_14__ {scalar_t__ start; scalar_t__ size; int name; } ;
struct TYPE_13__ {scalar_t__ pdata; } ;
typedef int LPSTR ;
typedef char* LPCSTR ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*,size_t,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ,int ,int) ;
 size_t FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,int) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,scalar_t__) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static BOOL FUNC_11(parse_buffer * VAR_11)
{
  DWORD VAR_12;
  ULONG VAR_13;
  xtemplate* VAR_14 = VAR_11->pxt[VAR_11->level];

  VAR_11->pxo->nb_members = VAR_14->nb_members;

  for (VAR_13 = 0; VAR_13 < VAR_14->nb_members; VAR_13++)
  {
    ULONG VAR_15;
    ULONG VAR_16 = 1;
    BOOL VAR_17 = VAR_10;

    VAR_11->pxo->members[VAR_13].name = VAR_14->members[VAR_13].name;
    VAR_11->pxo->members[VAR_13].start = VAR_11->cur_pos_data;

    for (VAR_15 = 0; VAR_15 < VAR_14->members[VAR_13].nb_dims; VAR_15++)
    {
      if (VAR_14->members[VAR_13].dim_fixed[VAR_15])
        VAR_16 *= VAR_14->members[VAR_13].dim_value[VAR_15];
      else
        VAR_16 *= *(DWORD*)(VAR_11->pxo->root->pdata + VAR_11->pxo->members[VAR_14->members[VAR_13].dim_value[VAR_15]].start);
    }

    FUNC_2("Elements to consider: %u\n", VAR_16);

    for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
    {
      if (VAR_14->members[VAR_13].type == VAR_7)
      {
        ULONG VAR_18;

        FUNC_2("Found sub-object %s\n", VAR_11->pdxf->xtemplates[VAR_14->members[VAR_13].idx_template].name);
        VAR_17 = VAR_0;
        VAR_11->level++;

        for (VAR_18 = 0; VAR_18 < VAR_11->pdxf->nb_xtemplates; VAR_18++)
        {
          if (!FUNC_4(VAR_11->pdxf->xtemplates[VAR_14->members[VAR_13].idx_template].name, VAR_11->pdxf->xtemplates[VAR_18].name, -1))
          {
            VAR_11->pxt[VAR_11->level] = &VAR_11->pdxf->xtemplates[VAR_18];
            break;
          }
        }
        if (VAR_18 == VAR_11->pdxf->nb_xtemplates)
        {
          FUNC_0("Unknown template %s\n", (char*)VAR_11->value);
          VAR_11->level--;
          return VAR_0;
        }
        FUNC_2("Enter %s\n", VAR_11->pdxf->xtemplates[VAR_14->members[VAR_13].idx_template].name);
        if (!FUNC_8(VAR_11, VAR_0))
        {
          VAR_11->level--;
          return VAR_0;
        }
        VAR_11->level--;
      }
      else
      {
        VAR_12 = FUNC_5(VAR_11);
        if (VAR_12 == VAR_5)
        {
          FUNC_7(VAR_11);
          FUNC_2("%s = %d\n", VAR_14->members[VAR_13].name, *(DWORD*)VAR_11->value);

          if (!FUNC_6(VAR_11, 4))
            return VAR_0;
          if (VAR_14->members[VAR_13].type == VAR_9)
          {
              *(WORD *)(VAR_11->pdata + VAR_11->cur_pos_data) = *(DWORD *)VAR_11->value;
              VAR_11->cur_pos_data += 2;
          }
          else if (VAR_14->members[VAR_13].type == VAR_3)
          {
              *(DWORD *)(VAR_11->pdata + VAR_11->cur_pos_data) = *(DWORD *)VAR_11->value;
              VAR_11->cur_pos_data += 4;
          }
          else
          {
            FUNC_1("Token %d not supported\n", VAR_14->members[VAR_13].type);
            return VAR_0;
          }
        }
        else if (VAR_12 == VAR_4)
        {
          FUNC_7(VAR_11);
          FUNC_2("%s = %f\n", VAR_14->members[VAR_13].name, *(float*)VAR_11->value);
          if (!FUNC_6(VAR_11, 4))
            return VAR_0;
          if (VAR_14->members[VAR_13].type == VAR_4)
          {
              *(float *)(VAR_11->pdata + VAR_11->cur_pos_data) = *(float *)VAR_11->value;
              VAR_11->cur_pos_data += 4;
          }
          else
          {
            FUNC_1("Token %d not supported\n", VAR_14->members[VAR_13].type);
            return VAR_0;
          }
        }
        else if (VAR_12 == VAR_6)
        {
          FUNC_7(VAR_11);
          FUNC_2("%s = %s\n", VAR_14->members[VAR_13].name, (char*)VAR_11->value);
          if (!FUNC_6(VAR_11, sizeof(LPSTR)))
            return VAR_0;
          if (VAR_14->members[VAR_13].type == VAR_6)
          {
            int VAR_19 = FUNC_10((char*)VAR_11->value) + 1;
            if ((VAR_11->cur_pstrings - VAR_11->pstrings + VAR_19) > VAR_1)
            {
              FUNC_1("Buffer too small %p %p %d\n", VAR_11->cur_pstrings, VAR_11->pstrings, VAR_19);
              return VAR_0;
            }
            FUNC_9((char*)VAR_11->cur_pstrings, (char*)VAR_11->value);
            *(((LPCSTR*)(VAR_11->pdata + VAR_11->cur_pos_data))) = (char*)VAR_11->cur_pstrings;
            VAR_11->cur_pstrings += VAR_19;
            VAR_11->cur_pos_data += sizeof(LPSTR);
          }
          else
          {
            FUNC_1("Token %d not supported\n", VAR_14->members[VAR_13].type);
            return VAR_0;
          }
        }
        else
        {
          FUNC_3("Unexpected token %d\n", VAR_12);
          return VAR_0;
        }
      }

      if (VAR_17)
      {

        VAR_12 = FUNC_5(VAR_11);
        if ((VAR_12 != VAR_2) && (VAR_12 != VAR_8))
          return VAR_0;

        while (FUNC_5(VAR_11) == VAR_8)
          FUNC_7(VAR_11);
        if (FUNC_5(VAR_11) == VAR_2)
          FUNC_7(VAR_11);
      }
    }

    VAR_11->pxo->members[VAR_13].size = VAR_11->cur_pos_data - VAR_11->pxo->members[VAR_13].start;
  }

  return VAR_10;
}
