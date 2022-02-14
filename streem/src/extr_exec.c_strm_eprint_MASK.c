
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int strm_value ;
struct TYPE_6__ {TYPE_2__* exc; } ;
typedef TYPE_1__ strm_stream ;
struct TYPE_7__ {scalar_t__ type; char* fname; int lineno; int arg; } ;
typedef TYPE_2__ node_error ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,int *,int *) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(strm_stream* VAR_2)
{
  strm_value VAR_3;
  node_error* VAR_4 = VAR_2->exc;

  if (!VAR_4) return;
  if (VAR_4->type == VAR_0) return;
  if (VAR_4->fname) {
    FUNC_1(VAR_1, "%s:%d:", VAR_4->fname, VAR_4->lineno);
  }
  FUNC_0(VAR_2, VAR_1, 1, &VAR_4->arg, &VAR_3);

  FUNC_2(VAR_2);
}
