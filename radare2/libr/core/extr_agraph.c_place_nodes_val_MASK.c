
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Sdb ;
typedef int RGraphNode ;
typedef int RAGraph ;


 int FUNC_0 (int const*,int const*,int const*) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static int FUNC_2(const RAGraph *VAR_0, const RGraphNode *VAR_1, const RGraphNode *VAR_2, Sdb *VAR_3, int VAR_4) {
 if (VAR_4) {
  return FUNC_1 (VAR_3, VAR_2) + FUNC_0 (VAR_0, VAR_2, VAR_1);
 }
 return FUNC_1 (VAR_3, VAR_2) - FUNC_0 (VAR_0, VAR_1, VAR_2);
}
