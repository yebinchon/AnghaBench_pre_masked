
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* data; int len; } ;
struct TYPE_4__ {int skip_next_null; TYPE_2__* strval; } ;
typedef TYPE_1__ StripnullState ;


 int FUNC_0 (TYPE_2__*,char) ;
 int FUNC_1 (TYPE_2__*,char*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, char *VAR_1, bool VAR_2)
{
 StripnullState *VAR_3 = (StripnullState *) VAR_0;

 if (VAR_2)
 {





  VAR_3->skip_next_null = 1;
  return;
 }

 if (VAR_3->strval->data[VAR_3->strval->len - 1] != '{')
  FUNC_0(VAR_3->strval, ',');





 FUNC_1(VAR_3->strval, VAR_1);

 FUNC_0(VAR_3->strval, ':');
}
