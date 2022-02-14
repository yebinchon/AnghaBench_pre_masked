
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int stats; int * expr; int * varprefix; int argv; scalar_t__ argc; int meta; int type; int * first_line; int lines; } ;
struct TYPE_5__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef TYPE_2__ Command ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static Command *
FUNC_6(PQExpBuffer VAR_2, const char *VAR_3)
{
 Command *VAR_4;
 char *VAR_5 = FUNC_5(VAR_2->data);

 if (VAR_5 == ((void*)0))
  return ((void*)0);


 VAR_4 = (Command *) FUNC_4(sizeof(Command));
 FUNC_1(&VAR_4->lines);
 FUNC_0(&VAR_4->lines, VAR_5);
 VAR_4->first_line = ((void*)0);
 VAR_4->type = VAR_1;
 VAR_4->meta = VAR_0;
 VAR_4->argc = 0;
 FUNC_3(VAR_4->argv, 0, sizeof(VAR_4->argv));
 VAR_4->varprefix = ((void*)0);
 VAR_4->expr = ((void*)0);
 FUNC_2(&VAR_4->stats);

 return VAR_4;
}
