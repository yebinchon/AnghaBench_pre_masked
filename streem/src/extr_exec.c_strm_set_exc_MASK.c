
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int strm_value ;
struct TYPE_7__ {TYPE_2__* exc; } ;
typedef TYPE_1__ strm_stream ;
struct TYPE_8__ {int type; scalar_t__ lineno; scalar_t__ fname; int arg; } ;
typedef TYPE_2__ node_error ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static node_error*
FUNC_2(strm_stream* VAR_0, int VAR_1, strm_value VAR_2)
{
  node_error* VAR_3 = FUNC_0(sizeof(node_error));

  if (!VAR_3) return ((void*)0);
  VAR_3->type = VAR_1;
  VAR_3->arg = VAR_2;
  VAR_3->fname = 0;
  VAR_3->lineno = 0;
  FUNC_1(VAR_0);
  VAR_0->exc = VAR_3;
  return VAR_3;
}
