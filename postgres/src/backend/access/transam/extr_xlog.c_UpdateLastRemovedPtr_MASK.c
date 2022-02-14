
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ XLogSegNo ;
struct TYPE_2__ {scalar_t__ lastRemovedSegNo; int info_lck; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,int *,scalar_t__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(char *VAR_2)
{
 uint32 VAR_3;
 XLogSegNo VAR_4;

 FUNC_2(VAR_2, &VAR_3, &VAR_4, VAR_1);

 FUNC_0(&VAR_0->info_lck);
 if (VAR_4 > VAR_0->lastRemovedSegNo)
  VAR_0->lastRemovedSegNo = VAR_4;
 FUNC_1(&VAR_0->info_lck);
}
