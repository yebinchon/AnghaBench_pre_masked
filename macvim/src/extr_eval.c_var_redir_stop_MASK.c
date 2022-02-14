
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* v_string; } ;
struct TYPE_14__ {TYPE_1__ vval; int v_type; } ;
typedef TYPE_2__ typval_T ;
typedef int char_u ;
struct TYPE_16__ {TYPE_3__* ga_data; } ;
struct TYPE_15__ {int * ll_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_8__*,int ) ;
 int * FUNC_2 (TYPE_3__*,int *,TYPE_3__*,int ,int ,int ,int ) ;
 int * VAR_4 ;
 TYPE_8__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_3 (TYPE_3__*,int *,TYPE_2__*,int ,int *) ;
 int FUNC_4 (TYPE_3__*) ;

void
FUNC_5()
{
    typval_T VAR_8;

    if (VAR_6 != ((void*)0))
    {

 if (VAR_4 != ((void*)0))
 {
     FUNC_1(&VAR_5, VAR_2);
     VAR_8.v_type = VAR_3;
     VAR_8.vval.v_string = VAR_5.ga_data;


     VAR_4 = FUNC_2(VAR_7, ((void*)0), VAR_6,
     VAR_0, VAR_0, 0, VAR_1);
     if (VAR_4 != ((void*)0) && VAR_6->ll_name != ((void*)0))
  FUNC_3(VAR_6, VAR_4, &VAR_8, VAR_0, (char_u *)".");
     FUNC_0(VAR_6);
 }


 FUNC_4(VAR_5.ga_data);
 VAR_5.ga_data = ((void*)0);

 FUNC_4(VAR_6);
 VAR_6 = ((void*)0);
    }
    FUNC_4(VAR_7);
    VAR_7 = ((void*)0);
}
