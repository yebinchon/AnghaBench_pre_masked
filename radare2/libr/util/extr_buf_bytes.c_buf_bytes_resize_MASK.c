
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct buf_bytes_priv {scalar_t__ length; int * buf; } ;
struct TYPE_4__ {int Oxff_priv; } ;
typedef TYPE_1__ RBuffer ;


 struct buf_bytes_priv* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int * FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(RBuffer *VAR_0, ut64 VAR_1) {
 struct buf_bytes_priv *VAR_2 = FUNC_0 (VAR_0);
 if (VAR_1 > VAR_2->length) {
  ut8 *VAR_3 = FUNC_2 (VAR_2->buf, VAR_1);
  if (!VAR_3) {
   return 0;
  }
  VAR_2->buf = VAR_3;
  FUNC_1 (VAR_2->buf + VAR_2->length, VAR_0->Oxff_priv, VAR_1 - VAR_2->length);
 }
 VAR_2->length = VAR_1;
 return 1;
}
