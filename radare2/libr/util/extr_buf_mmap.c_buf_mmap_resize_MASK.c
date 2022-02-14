
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_3__ {scalar_t__ length; int * buf; } ;
struct buf_mmap_priv {TYPE_1__ bytes_priv; TYPE_2__* mmap; } ;
struct TYPE_4__ {scalar_t__ len; } ;
typedef int RBuffer ;


 struct buf_mmap_priv* FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0, ut64 VAR_1) {
 struct buf_mmap_priv *VAR_2 = FUNC_0 (VAR_0);
 if (VAR_1 > VAR_2->mmap->len) {
  ut8 *VAR_3 = FUNC_1 (VAR_2->mmap, VAR_1);
  if (!VAR_3) {
   return 0;
  }
  VAR_2->bytes_priv.buf = VAR_3;
 }
 VAR_2->bytes_priv.length = VAR_1;
 return 1;
}
