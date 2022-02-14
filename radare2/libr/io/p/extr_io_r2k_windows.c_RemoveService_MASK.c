
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCTSTR ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static BOOL FUNC_4(LPCTSTR VAR_6) {
 HANDLE VAR_7;
 BOOL VAR_8 = VAR_1;
 HANDLE VAR_9 = FUNC_2 (((void*)0), ((void*)0), VAR_2);
 if (VAR_9) {
  VAR_7 = FUNC_3 (VAR_9, VAR_6, VAR_3 | VAR_0 | VAR_4);
  if (VAR_7) {
   FUNC_1 (VAR_7);
   FUNC_0 (VAR_7);
   VAR_8 = VAR_5;
  }
  FUNC_0 (VAR_9);
 }
 return VAR_8;
}
