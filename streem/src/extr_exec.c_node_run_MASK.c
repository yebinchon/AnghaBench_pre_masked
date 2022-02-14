
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int strm_value ;
struct TYPE_8__ {scalar_t__ lval; } ;
typedef TYPE_1__ parser_state ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_2__ node_error ;
typedef int node ;
struct TYPE_10__ {TYPE_2__* exc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;

int
FUNC_4(parser_state* VAR_4)
{
  strm_value VAR_5;
  node_error* VAR_6;

  FUNC_1(&VAR_2);

  FUNC_0(&VAR_3, &VAR_2, (node*)VAR_4->lval, &VAR_5);
  VAR_6 = VAR_3.exc;
  if (VAR_6 != ((void*)0)) {
    if (VAR_6->type != VAR_0) {
      FUNC_3(&VAR_3);
    }
    FUNC_2(&VAR_3);
  }
  return VAR_1;
}
