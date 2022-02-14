
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int key; } ;
typedef int RStrBuf ;
typedef int CPU_MODEL ;
typedef TYPE_1__ CPU_CONST ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int ,char*) ;

__attribute__((used)) static RStrBuf *FUNC_5(ut8 VAR_1, int VAR_2, CPU_MODEL *VAR_3) {
 RStrBuf *VAR_4 = FUNC_2 ("");
 CPU_CONST *VAR_5 = FUNC_0 (VAR_3, VAR_0, VAR_1);
 if (VAR_5 != ((void*)0)) {
  FUNC_3 (VAR_4, VAR_5->key);
  if (VAR_2) {
   FUNC_1 (VAR_4, ",=");
  }
 } else {
  FUNC_4 (VAR_4, "_io,%d,+,%s[1]", VAR_1, VAR_2 ? "=" : "");
 }

 return VAR_4;
}
