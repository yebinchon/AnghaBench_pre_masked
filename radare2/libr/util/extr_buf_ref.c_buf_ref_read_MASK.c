
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
struct buf_ref_priv {scalar_t__ size; scalar_t__ cur; scalar_t__ base; int parent; } ;
typedef int st64 ;
typedef int RBuffer ;


 int FUNC_0 (int ,scalar_t__) ;
 struct buf_ref_priv* FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int *,int ) ;

__attribute__((used)) static st64 FUNC_3(RBuffer *VAR_0, ut8 *VAR_1, ut64 VAR_2) {
 struct buf_ref_priv *VAR_3 = FUNC_1 (VAR_0);
 if (VAR_3->size < VAR_3->cur) {
  return -1;
 }
 VAR_2 = FUNC_0 (VAR_2, VAR_3->size - VAR_3->cur);
 st64 VAR_4 = FUNC_2 (VAR_3->parent, VAR_3->base + VAR_3->cur, VAR_1, VAR_2);
 if (VAR_4 < 0) {
  return VAR_4;
 }
 VAR_3->cur += VAR_4;
 return VAR_4;
}
