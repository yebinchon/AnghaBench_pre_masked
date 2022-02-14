
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct buf_bytes_priv {scalar_t__ length; scalar_t__ offset; scalar_t__ buf; } ;
typedef scalar_t__ st64 ;
typedef int RBuffer ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 struct buf_bytes_priv* FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static st64 FUNC_3(RBuffer *VAR_0, ut8 *VAR_1, ut64 VAR_2) {
 struct buf_bytes_priv *VAR_3 = FUNC_1 (VAR_0);
 ut64 VAR_4 = VAR_3->length < VAR_3->offset? 0: FUNC_0 (VAR_3->length - VAR_3->offset, VAR_2);
 FUNC_2 (VAR_1, VAR_3->buf + VAR_3->offset, VAR_4);
 VAR_3->offset += VAR_4;
 return VAR_4;
}
