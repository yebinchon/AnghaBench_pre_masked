
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int h; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_8 = VAR_3.w + (VAR_7 ? VAR_2 + 4 : 0) + (VAR_6 ? VAR_0 : 0);
 int VAR_9 = VAR_3.h;
 if (VAR_5 > 0 && VAR_8 > VAR_5)
  VAR_8 = VAR_5;
 if (VAR_4 > 0 && VAR_9 > VAR_4)
  VAR_9 = VAR_4;
 if (VAR_1)
  FUNC_1();
 FUNC_0(VAR_8, VAR_9);
}
