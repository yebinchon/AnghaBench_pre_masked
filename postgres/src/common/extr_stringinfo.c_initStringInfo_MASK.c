
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; int maxlen; } ;
typedef TYPE_1__* StringInfo ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(StringInfo VAR_0)
{
 int VAR_1 = 1024;

 VAR_0->data = (char *) FUNC_0(VAR_1);
 VAR_0->maxlen = VAR_1;
 FUNC_1(VAR_0);
}
