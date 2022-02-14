
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
struct buf_sparse_priv {int sparse; } ;
typedef int RBuffer ;


 struct buf_sparse_priv* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static ut64 FUNC_2(RBuffer *VAR_0) {
 struct buf_sparse_priv *VAR_1 = FUNC_0 (VAR_0);
 ut64 VAR_2;

 return FUNC_1 (VAR_1->sparse, &VAR_2)? VAR_2: 0;
}
