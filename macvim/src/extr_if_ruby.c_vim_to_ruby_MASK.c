
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* v_dict; TYPE_5__* v_list; int v_float; int v_number; int * v_string; } ;
struct TYPE_15__ {scalar_t__ v_type; TYPE_2__ vval; } ;
typedef TYPE_3__ typval_T ;
typedef scalar_t__ long_u ;
struct TYPE_16__ {TYPE_3__ li_tv; struct TYPE_16__* li_next; } ;
typedef TYPE_4__ listitem_T ;
struct TYPE_17__ {TYPE_4__* lv_first; } ;
typedef TYPE_5__ list_T ;
struct TYPE_18__ {scalar_t__ ht_used; TYPE_7__* ht_array; } ;
typedef TYPE_6__ hashtab_T ;
struct TYPE_19__ {scalar_t__ hi_key; } ;
typedef TYPE_7__ hashitem_T ;
struct TYPE_20__ {TYPE_3__ di_tv; } ;
typedef TYPE_8__ dictitem_T ;
typedef void* VALUE ;
struct TYPE_13__ {TYPE_6__ dv_hashtab; } ;


 int FUNC_0 (TYPE_7__*) ;
 void* FUNC_1 (int ) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_8__* FUNC_2 (TYPE_7__*) ;
 void* FUNC_3 () ;
 int FUNC_4 (void*,void*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (void*,void*,void*) ;
 void* FUNC_7 () ;
 void* FUNC_8 (char*) ;

__attribute__((used)) static VALUE FUNC_9(typval_T *VAR_6)
{
    VALUE VAR_7 = VAR_0;

    if (VAR_6->v_type == VAR_5)
    {
 VAR_7 = FUNC_8(VAR_6->vval.v_string == ((void*)0)
       ? "" : (char *)(VAR_6->vval.v_string));
    }
    else if (VAR_6->v_type == VAR_4)
    {
 VAR_7 = FUNC_1(VAR_6->vval.v_number);
    }






    else if (VAR_6->v_type == VAR_3)
    {
 list_T *VAR_8 = VAR_6->vval.v_list;
 listitem_T *VAR_9;

 VAR_7 = FUNC_3();

 if (VAR_8 != ((void*)0))
 {
     for (VAR_9 = VAR_8->lv_first; VAR_9 != ((void*)0); VAR_9 = VAR_9->li_next)
     {
  FUNC_4(VAR_7, FUNC_9(&VAR_9->li_tv));
     }
 }
    }
    else if (VAR_6->v_type == VAR_1)
    {
 VAR_7 = FUNC_7();

 if (VAR_6->vval.v_dict != ((void*)0))
 {
     hashtab_T *VAR_10 = &VAR_6->vval.v_dict->dv_hashtab;
     long_u VAR_11 = VAR_10->ht_used;
     hashitem_T *VAR_12;
     dictitem_T *VAR_13;

     for (VAR_12 = VAR_10->ht_array; VAR_11 > 0; ++VAR_12)
     {
  if (!FUNC_0(VAR_12))
  {
      --VAR_11;

      VAR_13 = FUNC_2(VAR_12);
      FUNC_6(VAR_7, FUNC_8((char *)VAR_12->hi_key),
           FUNC_9(&VAR_13->di_tv));
  }
     }
 }
    }

    return VAR_7;
}
