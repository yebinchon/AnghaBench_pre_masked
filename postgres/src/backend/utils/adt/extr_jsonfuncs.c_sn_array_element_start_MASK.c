
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* data; int len; } ;
struct TYPE_3__ {TYPE_2__* strval; } ;
typedef TYPE_1__ StripnullState ;


 int FUNC_0 (TYPE_2__*,char) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, bool VAR_1)
{
 StripnullState *VAR_2 = (StripnullState *) VAR_0;

 if (VAR_2->strval->data[VAR_2->strval->len - 1] != '[')
  FUNC_0(VAR_2->strval, ',');
}
