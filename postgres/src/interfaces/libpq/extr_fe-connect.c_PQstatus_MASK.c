
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; } ;
typedef TYPE_1__ PGconn ;
typedef int ConnStatusType ;


 int VAR_0 ;

ConnStatusType
FUNC_0(const PGconn *VAR_1)
{
 if (!VAR_1)
  return VAR_0;
 return VAR_1->status;
}
