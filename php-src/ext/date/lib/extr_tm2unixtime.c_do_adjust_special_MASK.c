
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int type; } ;
struct TYPE_7__ {TYPE_4__ special; scalar_t__ have_special_relative; } ;
struct TYPE_8__ {TYPE_1__ relative; } ;
typedef TYPE_2__ timelib_time ;



 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(timelib_time* VAR_0)
{
 if (VAR_0->relative.have_special_relative) {
  switch (VAR_0->relative.special.type) {
   case 128:
    FUNC_0(VAR_0);
    break;
  }
 }
 FUNC_2(VAR_0);
 FUNC_1(&(VAR_0->relative.special), 0, sizeof(VAR_0->relative.special));
}
