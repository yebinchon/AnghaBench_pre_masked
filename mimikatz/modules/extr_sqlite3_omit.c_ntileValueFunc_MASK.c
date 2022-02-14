
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NtileCtx {int nParam; int nTotal; int iRow; } ;
typedef int sqlite3_context ;
typedef int i64 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(sqlite3_context *VAR_0){
  struct NtileCtx *VAR_1;
  VAR_1 = (struct NtileCtx*)FUNC_1(VAR_0, sizeof(*VAR_1));
  if( VAR_1 && VAR_1->nParam>0 ){
    int VAR_2 = (VAR_1->nTotal / VAR_1->nParam);
    if( VAR_2==0 ){
      FUNC_2(VAR_0, VAR_1->iRow);
    }else{
      i64 VAR_3 = VAR_1->nTotal - VAR_1->nParam*VAR_2;
      i64 VAR_4 = VAR_3*(VAR_2+1);
      i64 VAR_5 = VAR_1->iRow-1;

      FUNC_0( (VAR_3*(VAR_2+1) + (VAR_1->nParam-VAR_3)*VAR_2)==VAR_1->nTotal );

      if( VAR_5<VAR_4 ){
        FUNC_2(VAR_0, 1 + VAR_5/(VAR_2+1));
      }else{
        FUNC_2(VAR_0, 1 + VAR_3 + (VAR_5-VAR_4)/VAR_2);
      }
    }
  }
}
