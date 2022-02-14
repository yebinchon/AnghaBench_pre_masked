
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {int off; int Oxff; } ;
struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {int rbuf; } ;
typedef TYPE_1__ Rihex ;
typedef TYPE_2__ RIODesc ;
typedef TYPE_3__ RIO ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(RIO *VAR_0, RIODesc *VAR_1, ut8 *VAR_2, int VAR_3) {
 if (!VAR_1 || !VAR_1->data || (VAR_3 <= 0)) {
  return -1;
 }
 Rihex *VAR_4 = VAR_1->data;
 FUNC_0 (VAR_2, VAR_0->Oxff, VAR_3);
 return FUNC_1 (VAR_4->rbuf, VAR_0->off, VAR_2, VAR_3);
}
