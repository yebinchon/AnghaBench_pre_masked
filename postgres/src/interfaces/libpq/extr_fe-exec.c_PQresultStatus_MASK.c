
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resultStatus; } ;
typedef TYPE_1__ PGresult ;
typedef int ExecStatusType ;


 int VAR_0 ;

ExecStatusType
FUNC_0(const PGresult *VAR_1)
{
 if (!VAR_1)
  return VAR_0;
 return VAR_1->resultStatus;
}
