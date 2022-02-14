
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPTSTR ;
typedef int LPCTSTR ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static BOOL FUNC_5(const char * VAR_9, LPCTSTR VAR_10, LPCTSTR VAR_11) {
 HANDLE VAR_12;
 BOOL VAR_13 = VAR_1;
 HANDLE VAR_14 = FUNC_2 (((void*)0), ((void*)0), VAR_2);
 if (VAR_14) {
  LPTSTR VAR_15 = FUNC_4 (VAR_9);
  VAR_12 = FUNC_1 (VAR_14, VAR_10, VAR_11, VAR_6 | VAR_0 | VAR_7, VAR_5, VAR_3, VAR_4, VAR_15, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  if (VAR_12) {
   FUNC_0 (VAR_12);
   VAR_13 = VAR_8;
  }
  FUNC_3 (VAR_15);
  FUNC_0 (VAR_14);
 }
 return VAR_13;
}
