
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
struct TYPE_10__ {TYPE_1__ workBuffer; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef TYPE_2__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(PGconn *VAR_1)
{
 PQExpBufferData VAR_2;


 if (FUNC_1(&VAR_1->workBuffer, VAR_1))
  return VAR_0;

 FUNC_0(&VAR_2);
 if (FUNC_1(&VAR_2, VAR_1))
 {
  FUNC_3(&VAR_2);
  return VAR_0;
 }

 FUNC_2(VAR_1, VAR_1->workBuffer.data, VAR_2.data);
 FUNC_3(&VAR_2);
 return 0;
}
