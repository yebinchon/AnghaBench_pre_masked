
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TSNode ;
typedef int RCore ;


 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int *,char const*,int ,int) ;
 int FUNC_2 (int *,char const*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static bool FUNC_8(RCore *VAR_0, const char *VAR_1, TSNode VAR_2, bool VAR_3) {
 bool VAR_4 = 0;

 if (VAR_3) {
  FUNC_6 (VAR_1);
 }
 if (FUNC_3 (VAR_2)) {
  VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2);
 } else if (FUNC_5 (VAR_2)) {
  VAR_4 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3);
 } else if (FUNC_4 (VAR_2)) {
  VAR_4 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3);
 }

 FUNC_7 (VAR_0);
 return VAR_4;
}
