
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
struct buf_sparse_priv {int offset; int sparse; } ;
typedef scalar_t__ st64 ;
typedef int RBuffer ;


 struct buf_sparse_priv* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int const*,int ) ;

__attribute__((used)) static st64 FUNC_2(RBuffer *VAR_0, const ut8 *VAR_1, ut64 VAR_2) {
 struct buf_sparse_priv *VAR_3 = FUNC_0 (VAR_0);
 st64 VAR_4 = FUNC_1 (VAR_3->sparse, VAR_3->offset, VAR_1, VAR_2);
 VAR_3->offset += VAR_4;
 return VAR_4;
}
