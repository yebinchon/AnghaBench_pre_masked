
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
struct buf_ref_priv {scalar_t__ base; int size; int parent; } ;
typedef int RBuffer ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 struct buf_ref_priv* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(RBuffer *VAR_0, ut64 VAR_1) {
 struct buf_ref_priv *VAR_2 = FUNC_1 (VAR_0);
 ut64 VAR_3 = FUNC_2 (VAR_2->parent);
 VAR_2->size = FUNC_0 (VAR_3 - VAR_2->base, VAR_1);
 return 1;
}
