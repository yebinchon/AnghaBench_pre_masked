
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; scalar_t__ len; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*) ;
 char* VAR_0 ;

void
FUNC_1(PQExpBuffer VAR_1)
{
 if (VAR_1)
 {
  if (VAR_1->data != VAR_0)
  {
   VAR_1->len = 0;
   VAR_1->data[0] = '\0';
  }
  else
  {

   FUNC_0(VAR_1);
  }
 }
}
