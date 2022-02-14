
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t; } ;
typedef TYPE_1__ CType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(CType *VAR_5) {


 VAR_5->t &= ~(VAR_2 | VAR_4);

 VAR_5->t &= ~VAR_0;
 if ((VAR_5->t & VAR_1) == VAR_3) {
  FUNC_0 (VAR_5);
 }
}
