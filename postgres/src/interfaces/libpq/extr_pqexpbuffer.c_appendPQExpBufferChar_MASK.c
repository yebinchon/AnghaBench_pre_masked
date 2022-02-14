
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; size_t len; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(PQExpBuffer VAR_0, char VAR_1)
{

 if (!FUNC_0(VAR_0, 1))
  return;


 VAR_0->data[VAR_0->len] = VAR_1;
 VAR_0->len++;
 VAR_0->data[VAR_0->len] = '\0';
}
