
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IdxT ;


 int FUNC_0 (int) ;

__attribute__((used)) static IdxT FUNC_1 (IdxT VAR_0, IdxT VAR_1, unsigned int VAR_2) {
  IdxT VAR_3 = (VAR_1 - VAR_0) / 4;
  IdxT VAR_4 = VAR_2 % (VAR_3 * 2) + (VAR_0 + VAR_3);
  FUNC_0(VAR_0 + VAR_3 <= VAR_4 && VAR_4 <= VAR_1 - VAR_3);
  return VAR_4;
}
