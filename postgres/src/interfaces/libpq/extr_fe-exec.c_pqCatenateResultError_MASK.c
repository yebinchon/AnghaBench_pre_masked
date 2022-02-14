
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char const* errMsg; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef TYPE_2__ PGresult ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(PGresult *VAR_0, const char *VAR_1)
{
 PQExpBufferData VAR_2;

 if (!VAR_0 || !VAR_1)
  return;
 FUNC_1(&VAR_2);
 if (VAR_0->errMsg)
  FUNC_0(&VAR_2, VAR_0->errMsg);
 FUNC_0(&VAR_2, VAR_1);
 FUNC_2(VAR_0, VAR_2.data);
 FUNC_3(&VAR_2);
}
