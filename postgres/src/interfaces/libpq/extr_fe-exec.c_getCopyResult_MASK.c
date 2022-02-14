
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ status; TYPE_1__* result; int asyncStatus; } ;
struct TYPE_7__ {scalar_t__ resultStatus; } ;
typedef int PGresult ;
typedef TYPE_2__ PGconn ;
typedef scalar_t__ ExecStatusType ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*,scalar_t__) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static PGresult *
FUNC_3(PGconn *VAR_2, ExecStatusType VAR_3)
{
 if (VAR_2->status != VAR_0)
 {
  FUNC_2(VAR_2);
  VAR_2->asyncStatus = VAR_1;
  return FUNC_1(VAR_2);
 }


 if (VAR_2->result && VAR_2->result->resultStatus == VAR_3)
  return FUNC_1(VAR_2);


 return FUNC_0(VAR_2, VAR_3);
}
