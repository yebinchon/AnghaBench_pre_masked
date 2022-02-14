
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RGraphNode ;
typedef int RAGraph ;


 int FUNC_0 (int const*,int,int const*,int const*,int,int,int) ;
 int FUNC_1 (int const*,int,int const*,int const*,int,int) ;

__attribute__((used)) static void FUNC_2(const RAGraph *VAR_0, int VAR_1, const RGraphNode *VAR_2, const RGraphNode *VAR_3, int VAR_4, int VAR_5, int VAR_6) {
 if (VAR_6 == VAR_5 + 1) {
  FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 } else if (VAR_6 > VAR_5 + 1) {
  int VAR_7 = (VAR_6 + VAR_5) / 2;
  FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
  FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_7, VAR_6);
  FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
