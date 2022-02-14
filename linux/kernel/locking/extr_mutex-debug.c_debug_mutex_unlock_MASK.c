
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; int prev; } ;
struct mutex {TYPE_1__ wait_list; struct mutex* magic; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct mutex *VAR_1)
{
 if (FUNC_1(VAR_0)) {
  FUNC_0(VAR_1->magic != VAR_1);
  FUNC_0(!VAR_1->wait_list.prev && !VAR_1->wait_list.next);
 }
}
