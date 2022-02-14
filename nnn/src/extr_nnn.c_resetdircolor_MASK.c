
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dircolor; scalar_t__ curctx; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static inline void FUNC_2(int VAR_3)
{
 if (VAR_2.dircolor && !(VAR_3 & VAR_1)) {
  FUNC_1(FUNC_0(VAR_2.curctx + 1) | VAR_0);
  VAR_2.dircolor = 0;
 }
}
