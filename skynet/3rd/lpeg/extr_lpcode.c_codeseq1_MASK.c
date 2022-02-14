
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TTree ;
typedef int CompileState ;
typedef int Charset ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * VAR_1 ;
 int FUNC_2 (int *,int const*,int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 (CompileState *VAR_2, TTree *VAR_3, TTree *VAR_4,
                     int VAR_5, const Charset *VAR_6) {
  if (FUNC_3(VAR_3)) {
    Charset VAR_7;
    FUNC_2(VAR_4, VAR_6, &VAR_7);
    FUNC_0(VAR_2, VAR_3, 0, VAR_5, &VAR_7);
  }
  else
    FUNC_0(VAR_2, VAR_3, 0, VAR_5, VAR_1);
  if (FUNC_1(VAR_3) != 0)
    return VAR_0;
  else return VAR_5;
}
