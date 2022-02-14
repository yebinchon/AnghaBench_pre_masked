
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ RIODesc ;
typedef int RIO ;
typedef int RBuffer ;


 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_1(RIO *VAR_0, RIODesc *VAR_1, const ut8 *VAR_2, int VAR_3) {
 if (!VAR_1 || !VAR_2 || VAR_3 < 0 || !VAR_1->data) {
  return -1;
 }
 RBuffer *VAR_4 = VAR_1->data;
 return FUNC_0 (VAR_4, VAR_2, VAR_3);
}
