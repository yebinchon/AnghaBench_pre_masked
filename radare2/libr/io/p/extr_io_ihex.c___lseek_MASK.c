
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct r_io_t {int off; } ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int rbuf; } ;
typedef TYPE_1__ Rihex ;
typedef TYPE_2__ RIODesc ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static ut64 FUNC_1(struct r_io_t *VAR_0, RIODesc *VAR_1, ut64 VAR_2, int VAR_3) {
 Rihex *VAR_4;
 if (!VAR_1 || !VAR_1->data) {
  return -1;
 }
 VAR_4 = VAR_1->data;
 VAR_0->off = FUNC_0 (VAR_4->rbuf, VAR_2, VAR_3);
 return VAR_0->off;
}
