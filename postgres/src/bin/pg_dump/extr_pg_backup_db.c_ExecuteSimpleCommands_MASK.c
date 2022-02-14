
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ len; int data; } ;
struct TYPE_10__ {int state; int backSlash; TYPE_4__* curCmd; } ;
struct TYPE_9__ {int std_strings; } ;
struct TYPE_11__ {TYPE_2__ sqlparse; TYPE_1__ public; } ;
typedef TYPE_3__ ArchiveHandle ;


 int FUNC_0 (TYPE_3__*,int ,char*) ;



 int FUNC_1 (TYPE_4__*,char) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_4(ArchiveHandle *VAR_0, const char *VAR_1, size_t VAR_2)
{
 const char *VAR_3 = VAR_1;
 const char *VAR_4 = VAR_1 + VAR_2;


 if (VAR_0->sqlparse.curCmd == ((void*)0))
  VAR_0->sqlparse.curCmd = FUNC_2();

 for (; VAR_3 < VAR_4; VAR_3++)
 {
  char VAR_5 = *VAR_3;


  if (!(VAR_5 == '\n' && VAR_0->sqlparse.curCmd->len == 0))
   FUNC_1(VAR_0->sqlparse.curCmd, VAR_5);

  switch (VAR_0->sqlparse.state)
  {
   case 128:
    if (VAR_5 == ';')
    {




     FUNC_0(VAR_0, VAR_0->sqlparse.curCmd->data,
           "could not execute query");
     FUNC_3(VAR_0->sqlparse.curCmd);
    }
    else if (VAR_5 == '\'')
    {
     VAR_0->sqlparse.state = 129;
     VAR_0->sqlparse.backSlash = 0;
    }
    else if (VAR_5 == '"')
    {
     VAR_0->sqlparse.state = 130;
    }
    break;

   case 129:

    if (VAR_5 == '\'' && !VAR_0->sqlparse.backSlash)
     VAR_0->sqlparse.state = 128;
    else if (VAR_5 == '\\' && !VAR_0->public.std_strings)
     VAR_0->sqlparse.backSlash = !VAR_0->sqlparse.backSlash;
    else
     VAR_0->sqlparse.backSlash = 0;
    break;

   case 130:

    if (VAR_5 == '"')
     VAR_0->sqlparse.state = 128;
    break;
  }
 }
}
