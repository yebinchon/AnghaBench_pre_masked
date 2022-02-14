
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int argc; struct TYPE_4__* varprefix; struct TYPE_4__** argv; struct TYPE_4__* first_line; int lines; } ;
typedef TYPE_1__ Command ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(Command *VAR_0)
{
 FUNC_1(&VAR_0->lines);
 if (VAR_0->first_line)
  FUNC_0(VAR_0->first_line);
 for (int VAR_1 = 0; VAR_1 < VAR_0->argc; VAR_1++)
  FUNC_0(VAR_0->argv[VAR_1]);
 if (VAR_0->varprefix)
  FUNC_0(VAR_0->varprefix);





 FUNC_0(VAR_0);
}
