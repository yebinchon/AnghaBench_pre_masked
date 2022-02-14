
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_3__ {int version; } ;
typedef int RDyldRebaseInfo3 ;
typedef int RDyldRebaseInfo2 ;
typedef int RDyldRebaseInfo1 ;
typedef TYPE_1__ RDyldRebaseInfo ;


 int FUNC_0 (int *,int *,int ,int,int ) ;
 int FUNC_1 (int *,int *,int ,int,int ) ;
 int FUNC_2 (int *,int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(RDyldRebaseInfo *VAR_0, ut8 *VAR_1, ut64 VAR_2, int VAR_3, ut64 VAR_4) {
 if (!VAR_0 || !VAR_1) {
  return;
 }

 if (VAR_0->version == 3) {
  FUNC_2 ((RDyldRebaseInfo3*) VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 } else if (VAR_0->version == 2) {
  FUNC_1 ((RDyldRebaseInfo2*) VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 } else if (VAR_0->version == 1) {
  FUNC_0 ((RDyldRebaseInfo1*) VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
