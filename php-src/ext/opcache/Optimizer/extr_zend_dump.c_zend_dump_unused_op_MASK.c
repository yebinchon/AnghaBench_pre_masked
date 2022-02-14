
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; } ;
typedef TYPE_1__ znode_op ;
typedef int zend_op ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_9 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const zend_op *VAR_10, znode_op VAR_11, uint32_t VAR_12) {
 if (VAR_6 == (VAR_12 & VAR_4)) {
  FUNC_0(VAR_9, " %u", VAR_11.num);
 } else if (VAR_8 == (VAR_12 & VAR_4)) {
  if (VAR_11.num != (uint32_t)-1) {
   FUNC_0(VAR_9, " try-catch(%u)", VAR_11.num);
  }
 } else if (VAR_7 == (VAR_12 & VAR_4)) {
  FUNC_0(VAR_9, " THIS");
 } else if (VAR_5 == (VAR_12 & VAR_4)) {
  FUNC_0(VAR_9, " NEXT");
 } else if (VAR_1 == (VAR_12 & VAR_4)) {
  FUNC_1(VAR_11.num);
 } else if (VAR_2 == (VAR_12 & VAR_4)) {
  FUNC_0(VAR_9, " CONSTRUCTOR");
 } else if (VAR_3 == (VAR_12 & VAR_4)) {
  if (VAR_11.num & VAR_0) {
   FUNC_0(VAR_9, " (unqualified-in-namespace)");
  }
 }
}
