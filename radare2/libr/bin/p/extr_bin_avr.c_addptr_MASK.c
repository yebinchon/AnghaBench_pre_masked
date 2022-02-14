
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int RList ;
typedef int RBuffer ;


 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static void FUNC_4(RList *VAR_0, const char *VAR_1, ut64 VAR_2, RBuffer *VAR_3) {
 if (VAR_3 && FUNC_1 (VAR_3, 0)) {
  FUNC_0 (VAR_0, FUNC_3 ("vector.%s", VAR_1), VAR_2);
  ut64 VAR_4 = FUNC_2 (VAR_2, VAR_3);
  FUNC_0 (VAR_0, FUNC_3 ("syscall.%s", VAR_1), VAR_4);
 }
}
