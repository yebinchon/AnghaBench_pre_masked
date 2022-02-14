
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SERVICE_STATUS ;
typedef int LPCTSTR ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int *) ;
 int VAR_6 ;
 int FUNC_6 (char*) ;

BOOL FUNC_7(LPCTSTR VAR_7, BOOL VAR_8) {
 HANDLE VAR_9;
 HANDLE VAR_10;
 SERVICE_STATUS VAR_11;
 BOOL VAR_12 = VAR_1;
 VAR_9 = FUNC_3 (((void*)0), ((void*)0), VAR_2);
 if (VAR_9) {
  VAR_10 = FUNC_4 (VAR_9, VAR_7, VAR_4 | VAR_0 | VAR_5);
  if (VAR_10) {
   if (!VAR_8) {
    if (FUNC_5 (VAR_10, 0, ((void*)0))) {
     FUNC_6 ("Service started [OK]\n");
     VAR_12 = VAR_6;
    } else {
     FUNC_6 ("Service started [FAIL]\n");
    }
   } else {
    if (FUNC_1 (VAR_10, VAR_3, &VAR_11)) {
     FUNC_6 ("Service Stopped [OK]\n");
     VAR_12 = VAR_6;
    } else {
     FUNC_6 ("Service Stopped [FAIL]\n");
    }
   }
   FUNC_0 (VAR_10);
   FUNC_2 (VAR_10);
  }
  FUNC_0 (VAR_9);
 }
 return VAR_12;
}
