
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; size_t len; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(StringInfo VAR_0, int VAR_1)
{
 if (VAR_1 > 0)
 {

  FUNC_0(VAR_0, VAR_1);


  while (--VAR_1 >= 0)
   VAR_0->data[VAR_0->len++] = ' ';
  VAR_0->data[VAR_0->len] = '\0';
 }
}
