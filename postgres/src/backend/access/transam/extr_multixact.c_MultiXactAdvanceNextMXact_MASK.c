
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* nextOffset; void* nextMXact; } ;
typedef void* MultiXactOffset ;
typedef void* MultiXactId ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (void*,void*) ;
 scalar_t__ FUNC_3 (void*,void*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int ,char*,void*) ;

void
FUNC_5(MultiXactId VAR_4,
        MultiXactOffset VAR_5)
{
 FUNC_0(VAR_2, VAR_1);
 if (FUNC_2(VAR_3->nextMXact, VAR_4))
 {
  FUNC_4(VAR_0, "MultiXact: setting next multi to %u", VAR_4);
  VAR_3->nextMXact = VAR_4;
 }
 if (FUNC_3(VAR_3->nextOffset, VAR_5))
 {
  FUNC_4(VAR_0, "MultiXact: setting next offset to %u",
     VAR_5);
  VAR_3->nextOffset = VAR_5;
 }
 FUNC_1(VAR_2);
}
