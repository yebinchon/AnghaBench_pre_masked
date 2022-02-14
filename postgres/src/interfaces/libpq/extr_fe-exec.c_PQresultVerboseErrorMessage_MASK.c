
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ resultStatus; } ;
struct TYPE_9__ {char* data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef TYPE_2__ PGresult ;
typedef int PGVerbosity ;
typedef int PGContextVisibility ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__ const*,int ,int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

char *
FUNC_6(const PGresult *VAR_2,
       PGVerbosity VAR_3,
       PGContextVisibility VAR_4)
{
 PQExpBufferData VAR_5;






 if (!VAR_2 ||
  (VAR_2->resultStatus != VAR_0 &&
   VAR_2->resultStatus != VAR_1))
  return FUNC_4(FUNC_2("PGresult is not an error result\n"));

 FUNC_1(&VAR_5);
 FUNC_3(&VAR_5, VAR_2, VAR_3, VAR_4);


 if (FUNC_0(VAR_5))
 {
  FUNC_5(&VAR_5);
  return FUNC_4(FUNC_2("out of memory\n"));
 }

 return VAR_5.data;
}
