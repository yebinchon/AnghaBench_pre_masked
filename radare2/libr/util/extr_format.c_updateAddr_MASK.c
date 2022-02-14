
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef scalar_t__ ut32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int,int) ;
 scalar_t__ FUNC_1 (int const*,int) ;
 scalar_t__ FUNC_2 (int const*,int) ;

__attribute__((used)) static float FUNC_3(const ut8 *VAR_1, int VAR_2, int VAR_3, ut64 *VAR_4, ut64 *VAR_5) {
 float VAR_6 = 0.0;


 if (VAR_2 >= VAR_0 - 7 && VAR_2 < VAR_0) {
  VAR_2 = VAR_2 + VAR_0;
 } else {
  VAR_2 = 999;
 }
 if (VAR_2 >= sizeof (float)) {
  FUNC_0 ((ut8*)&VAR_6, VAR_1, sizeof (float), VAR_3);
 }
 if (VAR_4 && VAR_2 > 3) {
  ut32 VAR_7 = FUNC_1 (VAR_1, VAR_3);
  *VAR_4 = (ut64)VAR_7;
 }
 if (VAR_5 && VAR_2 > 7) {
  *VAR_5 = FUNC_2 (VAR_1, VAR_3);
 }
 return VAR_6;
}
