
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_0(void) {
 VAR_5->r &= ~VAR_2;

 if ((VAR_5->r & VAR_4) == VAR_0) {
  VAR_5->r = (VAR_5->r & ~(VAR_4 | VAR_3)) | VAR_1 | VAR_2;
 }
}
