
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int data; } ;
struct TYPE_8__ {TYPE_1__ recv; } ;
struct TYPE_7__ {int reg; } ;
typedef TYPE_2__ RDebug ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int * FUNC_2 (int,int) ;
 TYPE_4__* VAR_1 ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,int,int*) ;
 int * FUNC_9 (int *,int) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_10 (RDebug *VAR_3, int VAR_4, ut8 *VAR_5, int VAR_6) {
 int VAR_7;
 int VAR_8 = 0;
 if (!VAR_1) {
  return -1;
 }
 int VAR_9 = FUNC_7 (VAR_1);
 if (VAR_9 <= 0) {
  return -1;
 }

 FUNC_4 (FUNC_8 (VAR_3->reg, VAR_4, &VAR_8));
 if (VAR_6 < VAR_9) {
  FUNC_3 ("r_debug_qnx_reg_read: small buffer %d vs %d\n",
    (int)VAR_6, (int)VAR_9);
 }
 VAR_7 = FUNC_1 (VAR_9, VAR_6);
 VAR_8 = FUNC_0 (VAR_9, VAR_8);
 if (VAR_2) {
  if (VAR_0 < VAR_7) {
   ut8 *VAR_10 = FUNC_9 (VAR_2, VAR_7);
   if (!VAR_10) {
    return -1;
   }
   VAR_2 = VAR_10;
   VAR_8 = VAR_7;
   VAR_0 = VAR_9;
  }
 } else {
  VAR_2 = FUNC_2 (VAR_8, 1);
  if (!VAR_2) {
   return -1;
  }
  VAR_0 = VAR_8;
 }
 FUNC_6 ((void *)(volatile void *) VAR_5, 0, VAR_6);
 FUNC_5 ((void *)(volatile void *) VAR_5, VAR_1->recv.data, VAR_7);
 FUNC_6 ((void *)(volatile void *) VAR_2, 0, VAR_8);
 FUNC_5 ((void *)(volatile void *) VAR_2, VAR_1->recv.data, VAR_7);

 return VAR_9;
}
