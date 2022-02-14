
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
struct buf_bytes_priv {int * buf; int length; } ;
typedef int RBuffer ;


 struct buf_bytes_priv* FUNC_0 (int *) ;

__attribute__((used)) static ut8 *FUNC_1(RBuffer *VAR_0, ut64 *VAR_1) {
 struct buf_bytes_priv *VAR_2 = FUNC_0 (VAR_0);
 if (VAR_1) {
  *VAR_1 = VAR_2->length;
 }
 return VAR_2->buf;
}
