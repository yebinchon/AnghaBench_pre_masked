
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int bits; int tid; } ;
typedef TYPE_1__ RDebug ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int const*,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int ,int ) ;

int FUNC_8(RDebug *VAR_6, int VAR_7, const ut8 *VAR_8, int VAR_9) {
 DWORD VAR_10 = VAR_5 | VAR_4;
 if (VAR_6->bits == VAR_2) {
  VAR_10 |= VAR_3;
 }
 HANDLE VAR_11 = FUNC_7 (VAR_10, VAR_0, VAR_6->tid);
 if (!VAR_11) {
  FUNC_6 ("w32_reg_write/OpenThread");
  return 0;
 }
 bool VAR_12 = FUNC_1 (VAR_6, VAR_6->tid);

 if (VAR_12 && FUNC_4 (VAR_11, VAR_6->bits) == -1) {
  FUNC_0 (VAR_11);
  return 0;
 }
 if (VAR_7 == VAR_1) {
  FUNC_5 (VAR_6, VAR_8);
 }
 bool VAR_13 = FUNC_3 (VAR_11, VAR_8, VAR_9, VAR_6->bits);

 if (VAR_12 && FUNC_2 (VAR_11, VAR_6->bits) == -1) {
  VAR_13 = 0;
 }
 FUNC_0 (VAR_11);
 return VAR_13;
}
