
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; scalar_t__ asyncStatus; int xactStatus; } ;
typedef TYPE_1__ PGconn ;
typedef int PGTransactionStatusType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

PGTransactionStatusType
FUNC_0(const PGconn *VAR_4)
{
 if (!VAR_4 || VAR_4->status != VAR_0)
  return VAR_3;
 if (VAR_4->asyncStatus != VAR_1)
  return VAR_2;
 return VAR_4->xactStatus;
}
