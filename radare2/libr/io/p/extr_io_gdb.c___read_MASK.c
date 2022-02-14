
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_5__ {int data; } ;
struct TYPE_4__ {int off; } ;
typedef int RIODesc ;
typedef TYPE_1__ RIO ;


 int FUNC_0 (int *,int,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int FUNC_2(RIO *VAR_1, RIODesc *VAR_2, ut8 *VAR_3, int VAR_4) {
 if (!VAR_1 || !VAR_2 || !VAR_3 || VAR_4 < 1) {
  return -1;
 }
 FUNC_1 (VAR_3, 0xff, VAR_4);
 ut64 VAR_5 = VAR_1->off;
 if (!VAR_0 || !VAR_0->data) {
  return -1;
 }
 return FUNC_0 (VAR_3, VAR_4, VAR_5);
}
