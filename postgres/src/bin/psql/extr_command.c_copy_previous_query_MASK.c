
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; int data; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(PQExpBuffer VAR_0, PQExpBuffer VAR_1)
{
 if (VAR_0 && VAR_0->len == 0)
  FUNC_0(VAR_0, VAR_1->data);
}
