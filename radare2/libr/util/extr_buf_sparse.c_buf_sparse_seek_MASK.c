
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
struct buf_sparse_priv {int offset; int sparse; } ;
typedef int st64 ;
typedef int RBuffer ;





 struct buf_sparse_priv* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static st64 FUNC_3(RBuffer *VAR_0, st64 VAR_1, int VAR_2) {
 struct buf_sparse_priv *VAR_3 = FUNC_0 (VAR_0);
 ut64 VAR_4;
 if (VAR_1 < 0 && (-VAR_1) > (st64)VAR_3->offset) {
  return -1;
 }

 switch (VAR_2) {
 case 130:
  VAR_3->offset += VAR_1;
  break;
 case 128:
  VAR_3->offset = VAR_1;
  break;
 case 129:
  if (!FUNC_2 (VAR_3->sparse, &VAR_4)) {
   VAR_4 = 0;
  }
  VAR_3->offset = VAR_4 + VAR_1;
  break;
 default:
  FUNC_1 ();
  return -1;
 }
 return VAR_3->offset;
}
