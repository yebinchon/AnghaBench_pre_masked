
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf_sparse_priv {int sparse; } ;
typedef int RList ;
typedef int RBuffer ;


 struct buf_sparse_priv* FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static RList *FUNC_2(RBuffer *VAR_0) {
 struct buf_sparse_priv *VAR_1 = FUNC_0 (VAR_0);
 return FUNC_1 (VAR_1->sparse);
}
