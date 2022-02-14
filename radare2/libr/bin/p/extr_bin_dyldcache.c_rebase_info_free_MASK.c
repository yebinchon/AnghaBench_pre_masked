
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int version; struct TYPE_4__* one_page_buf; } ;
typedef int RDyldRebaseInfo3 ;
typedef int RDyldRebaseInfo2 ;
typedef int RDyldRebaseInfo1 ;
typedef TYPE_1__ RDyldRebaseInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(RDyldRebaseInfo *VAR_0) {
 if (!VAR_0) {
  return;
 }

 FUNC_0 (VAR_0->one_page_buf);

 ut8 VAR_1 = VAR_0->version;

 if (VAR_1 == 1) {
  FUNC_1 ((RDyldRebaseInfo1*) VAR_0);
 } else if (VAR_1 == 2) {
  FUNC_2 ((RDyldRebaseInfo2*) VAR_0);
 } else if (VAR_1 == 3) {
  FUNC_3 ((RDyldRebaseInfo3*) VAR_0);
 } else {
  FUNC_0 (VAR_0);
 }
}
