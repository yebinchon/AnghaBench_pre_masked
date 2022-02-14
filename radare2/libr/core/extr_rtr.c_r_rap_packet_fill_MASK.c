
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int const*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(ut8 *VAR_0, const ut8* VAR_1, int VAR_2) {
 if (VAR_0 && VAR_1 && VAR_2 > 0) {
  ut32 VAR_3 = FUNC_2 (VAR_0 + 1);
  FUNC_1 (VAR_0 + 5, VAR_1, FUNC_0 (VAR_3, VAR_2));
 }
}
