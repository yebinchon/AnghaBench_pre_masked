
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
struct TYPE_5__ {TYPE_3__ errorMessage; } ;
typedef int PQExpBuffer ;
typedef TYPE_1__ PGconn ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_6(PGconn *VAR_0, PQExpBuffer VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_1(VAR_1,
       VAR_0->errorMessage.data);
 if (FUNC_0(VAR_1))
 {
  FUNC_4(&VAR_0->errorMessage,
        FUNC_3("out of memory\n"));
  return 0;
 }

 FUNC_5(&VAR_0->errorMessage);
 return 1;
}
