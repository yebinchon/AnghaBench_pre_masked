
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_2__ {int node; int remote_end; int local_end; } ;
typedef TYPE_1__ FlushPosition ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(XLogRecPtr VAR_4)
{
 FlushPosition *VAR_5;


 FUNC_0(VAR_0);


 VAR_5 = (FlushPosition *) FUNC_2(sizeof(FlushPosition));
 VAR_5->local_end = VAR_2;
 VAR_5->remote_end = VAR_4;

 FUNC_1(&VAR_3, &VAR_5->node);
 FUNC_0(VAR_1);
}
