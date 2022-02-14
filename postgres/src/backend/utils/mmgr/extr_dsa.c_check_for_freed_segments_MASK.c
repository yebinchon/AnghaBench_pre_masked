
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t freed_segment_counter; TYPE_1__* control; } ;
typedef TYPE_2__ dsa_area ;
struct TYPE_6__ {size_t freed_segment_counter; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(dsa_area *VAR_1)
{
 size_t VAR_2;
 FUNC_4();
 VAR_2 = VAR_1->control->freed_segment_counter;
 if (FUNC_5(VAR_1->freed_segment_counter != VAR_2))
 {

  FUNC_1(FUNC_0(VAR_1), VAR_0);
  FUNC_3(VAR_1);
  FUNC_2(FUNC_0(VAR_1));
 }
}
