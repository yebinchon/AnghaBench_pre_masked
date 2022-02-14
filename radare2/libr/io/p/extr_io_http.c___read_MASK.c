
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {unsigned int off; } ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__ RIODesc ;
typedef TYPE_2__ RIO ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(RIO *VAR_0, RIODesc *VAR_1, ut8 *VAR_2, int VAR_3) {
 unsigned int VAR_4;
 if (!VAR_1 || !VAR_1->data) {
  return -1;
 }
 VAR_4 = FUNC_1 (VAR_1);
 if (VAR_0->off >= VAR_4) {
  return -1;
 }
 if (VAR_0->off + VAR_3 >= VAR_4) {
  VAR_3 = VAR_4 - VAR_0->off;
 }
 FUNC_2 (VAR_2, FUNC_0 (VAR_1) + VAR_0->off, VAR_3);
 return VAR_3;
}
