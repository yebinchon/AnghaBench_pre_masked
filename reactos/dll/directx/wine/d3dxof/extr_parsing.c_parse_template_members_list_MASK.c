
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pdxf; scalar_t__ value; } ;
typedef TYPE_3__ parse_buffer ;
struct TYPE_11__ {scalar_t__ type; int idx_template; char* name; int* dim_value; int nb_dims; void** dim_fixed; } ;
typedef TYPE_4__ member ;
struct TYPE_9__ {size_t nb_xtemplates; TYPE_1__* xtemplates; } ;
struct TYPE_8__ {int nb_members; TYPE_4__* members; int name; } ;
typedef int DWORD ;
typedef void* BOOL ;


 int FUNC_0 (char*,...) ;
 void* VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static BOOL FUNC_9(parse_buffer * VAR_10)
{
  int VAR_11 = 0;
  member* VAR_12;

  while (1)
  {
    BOOL VAR_13 = VAR_0;
    int VAR_14 = 0;
    VAR_12 = &VAR_10->pdxf->xtemplates[VAR_10->pdxf->nb_xtemplates].members[VAR_11];

    if (FUNC_4(VAR_10) == VAR_2)
    {
      FUNC_5(VAR_10);
      VAR_13 = VAR_9;
    }

    if (FUNC_4(VAR_10) == VAR_6)
    {
      VAR_12->type = FUNC_5(VAR_10);
      if (!FUNC_7((char*)VAR_10->value, "indexColor"))
      {

        VAR_12->idx_template = 0;
      }
      else
      {
        VAR_12->idx_template = 1;
        while (VAR_12->idx_template < VAR_10->pdxf->nb_xtemplates)
        {
          if (!FUNC_3((char*)VAR_10->value, VAR_10->pdxf->xtemplates[VAR_12->idx_template].name, -1))
            break;
          VAR_12->idx_template++;
        }
        if (VAR_12->idx_template == VAR_10->pdxf->nb_xtemplates)
        {
          FUNC_2("Reference to a nonexistent template '%s'\n", (char*)VAR_10->value);
          return VAR_0;
        }
      }
    }
    else if (FUNC_6(FUNC_4(VAR_10)))
      VAR_12->type = FUNC_5(VAR_10);
    else
      break;

    if (FUNC_5(VAR_10) != VAR_6)
      return VAR_0;
    FUNC_8(VAR_12->name, (char*)VAR_10->value);

    if (VAR_13)
    {
      while (FUNC_4(VAR_10) == VAR_7)
      {
        if (VAR_14 >= VAR_1)
        {
          FUNC_1("Too many dimensions (%d) for multi-dimensional array\n", VAR_14 + 1);
          return VAR_0;
        }
        FUNC_5(VAR_10);
        if (FUNC_4(VAR_10) == VAR_5)
        {
          FUNC_5(VAR_10);
          VAR_12->dim_fixed[VAR_14] = VAR_9;
          VAR_12->dim_value[VAR_14] = *(DWORD*)VAR_10->value;
        }
        else
        {
          int VAR_15;
          if (FUNC_5(VAR_10) != VAR_6)
            return VAR_0;
          for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++)
          {
            if (!FUNC_7((char*)VAR_10->value, VAR_10->pdxf->xtemplates[VAR_10->pdxf->nb_xtemplates].members[VAR_15].name))
            {
              if (VAR_10->pdxf->xtemplates[VAR_10->pdxf->nb_xtemplates].members[VAR_15].nb_dims)
              {
                FUNC_0("Array cannot be used to specify variable array size\n");
                return VAR_0;
              }
              if (VAR_10->pdxf->xtemplates[VAR_10->pdxf->nb_xtemplates].members[VAR_15].type != VAR_4)
              {
                FUNC_1("Only DWORD supported to specify variable array size\n");
                return VAR_0;
              }
              break;
            }
          }
          if (VAR_15 == VAR_11)
          {
            FUNC_0("Reference to unknown member %s\n", (char*)VAR_10->value);
            return VAR_0;
          }
          VAR_12->dim_fixed[VAR_14] = VAR_0;
          VAR_12->dim_value[VAR_14] = VAR_15;
        }
        if (FUNC_5(VAR_10) != VAR_3)
          return VAR_0;
        VAR_14++;
      }
      if (!VAR_14)
        return VAR_0;
      VAR_12->nb_dims = VAR_14;
    }
    if (FUNC_5(VAR_10) != VAR_8)
      return VAR_0;

    VAR_11++;
  }

  VAR_10->pdxf->xtemplates[VAR_10->pdxf->nb_xtemplates].nb_members = VAR_11;

  return VAR_9;
}
