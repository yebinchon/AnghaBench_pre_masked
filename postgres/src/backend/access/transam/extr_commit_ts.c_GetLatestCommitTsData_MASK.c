
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
typedef int TimestampTz ;
struct TYPE_3__ {int nodeid; int time; } ;
struct TYPE_4__ {TYPE_1__ dataLastCommit; int xidLastCommit; int commitTsActive; } ;
typedef int RepOriginId ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 () ;

TransactionId
FUNC_3(TimestampTz *VAR_3, RepOriginId *VAR_4)
{
 TransactionId VAR_5;

 FUNC_0(VAR_0, VAR_1);


 if (!VAR_2->commitTsActive)
  FUNC_2();

 VAR_5 = VAR_2->xidLastCommit;
 if (VAR_3)
  *VAR_3 = VAR_2->dataLastCommit.time;
 if (VAR_4)
  *VAR_4 = VAR_2->dataLastCommit.nodeid;
 FUNC_1(VAR_0);

 return VAR_5;
}
