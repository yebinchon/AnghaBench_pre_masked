
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int RHash ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int const*,int) ;
 int FUNC_2 (int *,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(RHash *VAR_2, ut64 VAR_3, const ut8 *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8) {
 if (VAR_5 < 0) {
  return 0;
 }
 int VAR_9 = FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_7) {
  return 1;
 }
 if (VAR_1 > 0) {
  FUNC_2 (VAR_2, VAR_3, VAR_1, VAR_0);
 }
 FUNC_0 (VAR_2, VAR_3, VAR_9, VAR_6, VAR_8);
 return 1;
}
