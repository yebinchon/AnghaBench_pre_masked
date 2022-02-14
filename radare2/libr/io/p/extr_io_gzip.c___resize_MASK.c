
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef scalar_t__ ut32 ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__ RIODesc ;
typedef int RIO ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_10(RIO *VAR_0, RIODesc *VAR_1, ut64 VAR_2) {
 ut8 * VAR_3 = ((void*)0);
 if (!VAR_1 || !VAR_1->data || VAR_2 == 0) {
  return 0;
 }
 ut32 VAR_4 = FUNC_5 (VAR_1);
 if (FUNC_2 (VAR_1) > VAR_4) {
  return 0;
 }
 VAR_3 = FUNC_7 (VAR_2);
 if (!VAR_3) {
  return -1;
 }
 FUNC_8 (VAR_3, FUNC_1 (VAR_1), FUNC_0 (VAR_2, VAR_4));
 if (VAR_2 > VAR_4) {
  FUNC_9 (VAR_3 + VAR_4, 0, VAR_2 - VAR_4);
 }
 FUNC_6 (FUNC_1 (VAR_1));
 FUNC_3 (VAR_1, VAR_3);
 FUNC_4 (VAR_1, VAR_2);
 return 1;
}
