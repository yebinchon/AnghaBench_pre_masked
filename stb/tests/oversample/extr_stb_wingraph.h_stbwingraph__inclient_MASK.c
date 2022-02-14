
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_client; scalar_t__ hide_mouse; } ;
typedef TYPE_1__ stbwingraph__window ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(stbwingraph__window *VAR_0, int VAR_1)
{
   if (VAR_1 != VAR_0->in_client) {
      VAR_0->in_client = VAR_1;
      if (VAR_0->hide_mouse)
         FUNC_0(!VAR_1);
   }
}
