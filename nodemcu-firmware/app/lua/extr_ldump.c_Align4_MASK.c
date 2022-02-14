
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wrote; scalar_t__ status; } ;
typedef TYPE_1__ DumpState ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(DumpState *VAR_0)
{
 while(VAR_0->wrote&3 && VAR_0->status==0)
  FUNC_0(0,VAR_0);
}
