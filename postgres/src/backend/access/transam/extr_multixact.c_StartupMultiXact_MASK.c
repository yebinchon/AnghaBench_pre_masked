
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* shared; } ;
struct TYPE_9__ {TYPE_1__* shared; } ;
struct TYPE_8__ {int nextOffset; int nextMXact; } ;
struct TYPE_7__ {int latest_page_number; } ;
struct TYPE_6__ {int latest_page_number; } ;
typedef int MultiXactOffset ;
typedef int MultiXactId ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_5__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;

void
FUNC_2(void)
{
 MultiXactId VAR_3 = VAR_2->nextMXact;
 MultiXactOffset VAR_4 = VAR_2->nextOffset;
 int VAR_5;




 VAR_5 = FUNC_1(VAR_3);
 VAR_1->shared->latest_page_number = VAR_5;




 VAR_5 = FUNC_0(VAR_4);
 VAR_0->shared->latest_page_number = VAR_5;
}
