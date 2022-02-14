
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pg_time_t ;
typedef int XLogRecPtr ;
struct TYPE_2__ {int lastSegSwitchLSN; int lastSegSwitchTime; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

pg_time_t
FUNC_2(XLogRecPtr *VAR_3)
{
 pg_time_t VAR_4;


 FUNC_0(VAR_1, VAR_0);
 VAR_4 = VAR_2->lastSegSwitchTime;
 *VAR_3 = VAR_2->lastSegSwitchLSN;
 FUNC_1(VAR_1);

 return VAR_4;
}
