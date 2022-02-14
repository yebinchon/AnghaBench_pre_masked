
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int t; scalar_t__ ref; } ;
typedef TYPE_1__ CType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(CType *VAR_8, CType *VAR_9, int VAR_10) {
 int VAR_11 = VAR_8->t & VAR_5;
 int VAR_12 = VAR_9->t & VAR_5;
 if (VAR_10) {

  VAR_11 &= ~(VAR_1 | VAR_7);
  VAR_12 &= ~(VAR_1 | VAR_7);
 }

 if (VAR_11 != VAR_12) {
  return 0;
 }

 int VAR_13 = VAR_11 & VAR_0;
 if (VAR_13 == VAR_3) {
  VAR_8 = FUNC_2 (VAR_8);
  VAR_9 = FUNC_2 (VAR_9);
  return FUNC_1 (VAR_8, VAR_9);
 } else if (VAR_13 == VAR_4 || VAR_13 == VAR_6) {
  return VAR_8->ref == VAR_9->ref;
 } else if (VAR_13 == VAR_2) {
  return FUNC_0 (VAR_8, VAR_9);
 } else {
  return 1;
 }
}
