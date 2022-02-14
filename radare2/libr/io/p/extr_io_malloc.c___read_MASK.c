
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut32 ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__ RIODesc ;
typedef int RIO ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static int FUNC_5(RIO *VAR_0, RIODesc *VAR_1, ut8 *VAR_2, int VAR_3) {
 FUNC_4 (VAR_2, 0xff, VAR_3);
 if (!VAR_1 || !VAR_1->data) {
  return -1;
 }
 ut32 VAR_4 = FUNC_2 (VAR_1);
 if (FUNC_1 (VAR_1) > VAR_4) {
  return -1;
 }
 if (FUNC_1 (VAR_1) + VAR_3 >= VAR_4) {
  VAR_3 = VAR_4 - FUNC_1 (VAR_1);
 }
 FUNC_3 (VAR_2, FUNC_0 (VAR_1) + FUNC_1 (VAR_1), VAR_3);
 return VAR_3;
}
