
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; int len; int cursor; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;

void
FUNC_2(StringInfo VAR_0)
{

 (void) FUNC_1(VAR_0->cursor, VAR_0->data, VAR_0->len);

 FUNC_0(VAR_0->data);
 VAR_0->data = ((void*)0);
}
