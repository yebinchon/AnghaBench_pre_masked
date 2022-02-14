
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int data; } ;
struct TYPE_11__ {TYPE_1__ errorMessage; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef TYPE_2__ PGconn ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(PGconn *VAR_0, PQExpBuffer VAR_1)
{
 FUNC_1(VAR_1, VAR_0->errorMessage.data);
 FUNC_4(&VAR_0->errorMessage);
 FUNC_1(&VAR_0->errorMessage, VAR_1->data);

 if (FUNC_0(VAR_1) ||
  FUNC_0(&VAR_0->errorMessage))
  FUNC_3(&VAR_0->errorMessage,
        FUNC_2("out of memory\n"));
 FUNC_5(VAR_1);
}
