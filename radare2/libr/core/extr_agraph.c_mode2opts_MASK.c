
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAGraph ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3(const RAGraph *VAR_3) {
 int VAR_4 = 0;
 if (FUNC_1 (VAR_3)) {
  VAR_4 |= VAR_1;
 }
 if (FUNC_0 (VAR_3)) {
  VAR_4 |= VAR_0;
 }
 if (FUNC_2 (VAR_3)) {
  VAR_4 |= VAR_2;
 }
 return VAR_4;
}
