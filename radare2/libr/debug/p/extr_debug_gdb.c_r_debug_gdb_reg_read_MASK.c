
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {int data_len; int data; } ;
struct TYPE_6__ {int reg; } ;
typedef TYPE_1__ RDebug ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (void*,int ,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ,int,int*) ;
 int* FUNC_11 (int*,int) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_12(RDebug *VAR_4, int VAR_5, ut8 *VAR_6, int VAR_7) {
 int VAR_8;
 int VAR_9 = 0;
 FUNC_3 (VAR_4);
 if (!VAR_2) {
  return VAR_0;
 }
 FUNC_6 (VAR_2);
 if (!VAR_2 || !VAR_2->data) {
  return -1;
 }

 FUNC_5 (FUNC_10 (VAR_4->reg, VAR_5, &VAR_9));
 if (VAR_7 < VAR_2->data_len) {
  FUNC_4 ("r_debug_gdb_reg_read: small buffer %d vs %d\n",
   (int)VAR_7, (int)VAR_2->data_len);

 }
 VAR_8 = FUNC_1 (VAR_2->data_len, VAR_7);
 VAR_9 = FUNC_0 (VAR_2->data_len, VAR_9);
 if (VAR_3) {

  if (VAR_9 > VAR_1) {
   ut8* VAR_10 = FUNC_11 (VAR_3, VAR_9);
   if (!VAR_10) {
    return -1;
   }
   VAR_3 = VAR_10;
   VAR_1 = VAR_9;
  }
 } else {
  VAR_3 = FUNC_2 (VAR_9, 1);
  if (!VAR_3) {
   return -1;
  }
  VAR_1 = VAR_9;
 }
 FUNC_8 ((void*)(volatile void*)VAR_6, 0, VAR_7);
 FUNC_7 ((void*)(volatile void*)VAR_6, VAR_2->data, FUNC_1 (VAR_8, VAR_7));
 FUNC_8 ((void*)(volatile void*)VAR_3, 0, VAR_9);
 FUNC_7 ((void*)(volatile void*)VAR_3, VAR_2->data, VAR_8);
 return VAR_2->data_len;
}
