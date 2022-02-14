
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_6__ {int off; } ;
struct TYPE_5__ {int data; } ;
typedef TYPE_1__ RIODesc ;
typedef TYPE_2__ RIO ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int) ;
 int FUNC_2 (int ,int *,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(RIO *VAR_0, RIODesc *VAR_1, ut8 *VAR_2, int VAR_3) {
 if (!VAR_1) {
  return -1;
 }

 if (FUNC_0 (VAR_1->data)) {
  ut64 VAR_4;
  if (!FUNC_3 (VAR_1->data, VAR_0->off, &VAR_4)) {
   return -1;
  }
  return FUNC_2 (VAR_1->data, VAR_2, VAR_4, VAR_3);
 }

 return FUNC_1 (VAR_1->data, VAR_2, VAR_0->off, VAR_3);
}
