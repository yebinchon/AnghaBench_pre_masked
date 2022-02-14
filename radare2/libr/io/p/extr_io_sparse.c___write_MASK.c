
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_5__ {int data; } ;
typedef TYPE_1__ RIODesc ;
typedef int RIO ;
typedef int RBuffer ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int const*,int) ;

__attribute__((used)) static int FUNC_3(RIO *VAR_0, RIODesc *VAR_1, const ut8 *VAR_2, int VAR_3) {
 ut64 VAR_4;
 RBuffer *VAR_5;
 if (!VAR_1 || !VAR_1->data) {
  return -1;
 }
 VAR_5 = FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_1);
 return FUNC_2 (VAR_5, VAR_4, VAR_2, VAR_3);
}
