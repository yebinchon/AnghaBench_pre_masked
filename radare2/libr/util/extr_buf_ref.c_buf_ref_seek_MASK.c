
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf_ref_priv {int cur; int size; } ;
typedef int st64 ;
typedef int RBuffer ;





 struct buf_ref_priv* FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static st64 FUNC_2(RBuffer *VAR_0, st64 VAR_1, int VAR_2) {
 struct buf_ref_priv *VAR_3 = FUNC_0 (VAR_0);
 switch (VAR_2) {
 case 130:
  VAR_3->cur += VAR_1;
  break;
 case 128:
  VAR_3->cur = VAR_1;
  break;
 case 129:
  VAR_3->cur = VAR_3->size + VAR_1;
  break;
 default:
  FUNC_1 ();
  return -1;
 }
 return VAR_3->cur;
}
