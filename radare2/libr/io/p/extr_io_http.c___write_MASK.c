
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {scalar_t__ off; } ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__ RIODesc ;
typedef TYPE_2__ RIO ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_3(RIO *VAR_0, RIODesc *VAR_1, const ut8 *VAR_2, int VAR_3) {
 if (!VAR_1 || !VAR_1->data) {
  return -1;
 }
 if (VAR_0->off + VAR_3 > FUNC_1 (VAR_1)) {
  return -1;
 }
 FUNC_2 (FUNC_0 (VAR_1)+VAR_0->off, VAR_2, VAR_3);
 return VAR_3;
}
