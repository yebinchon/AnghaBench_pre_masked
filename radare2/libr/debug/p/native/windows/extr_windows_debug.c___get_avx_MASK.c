
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {scalar_t__ Low; scalar_t__ High; } ;
typedef TYPE_1__ ut128 ;
typedef int PCONTEXT ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int*) ;
 scalar_t__ FUNC_6 (void*,int,int *,int*) ;
 scalar_t__ FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(HANDLE VAR_6, ut128 VAR_7[16], ut128 VAR_8[16]) {
 int VAR_9 = 0, VAR_10 = 0;
 DWORD VAR_11 = 0;
 DWORD VAR_12 = 0;
 ut64 VAR_13 = 0;
 ut128 *VAR_14 = ((void*)0);
 ut128 *VAR_15 = ((void*)0);
 void *VAR_16 = ((void*)0);
 PCONTEXT VAR_17;
 if (!&FUNC_4) {
  return 0;
 }

 VAR_13 = FUNC_4 ();
 if ((VAR_13 & VAR_5) == 0) {
  return 0;
 }
 if ((FUNC_6 (((void*)0), VAR_0 | VAR_1, ((void*)0), &VAR_11)) || (FUNC_0 () != VAR_2)) {
  return 0;
 }
 VAR_16 = FUNC_3 (VAR_11);
 if (!VAR_16) {
  return 0;
 }
 if (!FUNC_6 (VAR_16, VAR_0 | VAR_1, &VAR_17, &VAR_11)) {
  goto err_get_avx;
 }
 if (!FUNC_8 (VAR_17, VAR_5)) {
  goto err_get_avx;
 }

 if (!FUNC_1 (VAR_6, VAR_17)) {
  goto err_get_avx;
 }
 if (FUNC_5 (VAR_17, &VAR_13)) {
  goto err_get_avx;
 }
 VAR_14 = (ut128 *)FUNC_7 (VAR_17, VAR_4, &VAR_12);
  VAR_9 = VAR_12 / sizeof(*VAR_14);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_8[VAR_10].High = 0;
  VAR_7[VAR_10].High = 0;
  VAR_8[VAR_10].Low = 0;
  VAR_7[VAR_10].Low = 0;
 }
 if (VAR_14 != ((void*)0)) {
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   VAR_7[VAR_10].High = VAR_14[VAR_10].High;
   VAR_7[VAR_10].Low = VAR_14[VAR_10].Low;
  }
 }
 if ((VAR_13 & VAR_5) != 0) {

  VAR_15 = (ut128 *)FUNC_7 (VAR_17, VAR_3, ((void*)0));
  if (!VAR_15) {
   goto err_get_avx;
  }
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   VAR_8[VAR_10].High = VAR_15[VAR_10].High;
   VAR_8[VAR_10].Low = VAR_15[VAR_10].Low;
  }
 }
err_get_avx:
 FUNC_2 (VAR_16);
 return VAR_9;
}
