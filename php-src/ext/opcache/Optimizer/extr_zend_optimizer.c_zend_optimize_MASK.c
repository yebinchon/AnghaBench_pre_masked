
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int debug_level; int optimization_level; } ;
typedef TYPE_1__ zend_optimizer_ctx ;
struct TYPE_24__ {scalar_t__ type; } ;
typedef TYPE_2__ zend_op_array ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(zend_op_array *VAR_23,
                          zend_optimizer_ctx *VAR_24)
{
 if (VAR_23->type == VAR_12) {
  return;
 }

 if (VAR_24->debug_level & VAR_10) {
  FUNC_0(VAR_23, VAR_11, "before optimizer", ((void*)0));
 }
 if (VAR_13 & VAR_24->optimization_level) {
  FUNC_8(VAR_23, VAR_24);
  if (VAR_24->debug_level & VAR_1) {
   FUNC_0(VAR_23, 0, "after pass 1", ((void*)0));
  }
 }




 if (VAR_17 & VAR_24->optimization_level) {
  FUNC_9(VAR_23, VAR_24);
  if (VAR_24->debug_level & VAR_5) {
   FUNC_0(VAR_23, 0, "after pass 3", ((void*)0));
  }
 }




 if (VAR_18 & VAR_24->optimization_level) {
  FUNC_3(VAR_23, VAR_24);
  if (VAR_24->debug_level & VAR_6) {
   FUNC_0(VAR_23, 0, "after pass 4", ((void*)0));
  }
 }




 if (VAR_19 & VAR_24->optimization_level) {
  FUNC_1(VAR_23, VAR_24);
  if (VAR_24->debug_level & VAR_7) {
   FUNC_0(VAR_23, 0, "after pass 5", ((void*)0));
  }
 }




 if ((VAR_20 & VAR_24->optimization_level) &&
     !(VAR_21 & VAR_24->optimization_level)) {
  FUNC_2(VAR_23, VAR_24);
  if (VAR_24->debug_level & VAR_8) {
   FUNC_0(VAR_23, 0, "after pass 6", ((void*)0));
  }
 }




 if (VAR_22 & VAR_24->optimization_level) {
  FUNC_4(VAR_23, VAR_24);
  if (VAR_24->debug_level & VAR_9) {
   FUNC_0(VAR_23, 0, "after pass 9", ((void*)0));
  }
 }




 if (((VAR_14|VAR_19) & VAR_24->optimization_level) == VAR_14) {
  FUNC_7(VAR_23, VAR_24);
  if (VAR_24->debug_level & VAR_2) {
   FUNC_0(VAR_23, 0, "after pass 10", ((void*)0));
  }
 }




 if ((VAR_15 & VAR_24->optimization_level) &&
     (!(VAR_20 & VAR_24->optimization_level) ||
      !(VAR_21 & VAR_24->optimization_level))) {
  FUNC_5(VAR_23, VAR_24);
  if (VAR_24->debug_level & VAR_3) {
   FUNC_0(VAR_23, 0, "after pass 11", ((void*)0));
  }
 }

 if ((VAR_16 & VAR_24->optimization_level) &&
     (!(VAR_20 & VAR_24->optimization_level) ||
      !(VAR_21 & VAR_24->optimization_level))) {
  FUNC_6(VAR_23);
  if (VAR_24->debug_level & VAR_4) {
   FUNC_0(VAR_23, 0, "after pass 13", ((void*)0));
  }
 }

 if (VAR_21 & VAR_24->optimization_level) {
  return;
 }

 if (VAR_24->debug_level & VAR_0) {
  FUNC_0(VAR_23, 0, "after optimizer", ((void*)0));
 }
}
