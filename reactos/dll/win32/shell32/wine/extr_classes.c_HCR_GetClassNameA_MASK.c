
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int PVOID ;
typedef scalar_t__* LPSTR ;
typedef int LPOLESTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int CHAR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__*,int) ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *,int ,int *,int ,int*) ;
 int FUNC_6 (int ,char*,scalar_t__*,int,int *,int ,int *) ;
 int FUNC_7 (int ,char*,int ,int *,int ,int*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (char*,scalar_t__*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int *,char*,int ) ;

BOOL FUNC_11(REFIID VAR_18, LPSTR VAR_19, DWORD VAR_20)
{ HKEY VAR_21;
 BOOL VAR_22 = VAR_6;
 DWORD VAR_23 = VAR_20;





 VAR_19[0] = 0;
 if (FUNC_1(VAR_18, &VAR_21))

 {
          if (!FUNC_6(VAR_21,"LocalizedString",VAR_19,VAR_20,((void*)0),0,((void*)0)) ||
              !FUNC_7(VAR_21,"",0,((void*)0),(LPBYTE)VAR_19,&VAR_20))
          {
     VAR_22 = VAR_16;
   }
   FUNC_4(VAR_21);
 }

 if (!VAR_22 || !VAR_19[0])
 {
   if(FUNC_2(VAR_18, &VAR_5))
   {
     if (FUNC_3(VAR_17, VAR_10, VAR_19, VAR_23))
       VAR_22 = VAR_16;
   }
   else if (FUNC_2(VAR_18, &VAR_2))
   {
     if(FUNC_3(VAR_17, VAR_11, VAR_19, VAR_23))
       VAR_22 = VAR_16;
   }
 }

 FUNC_9("-- (%s)\n", VAR_19);

 return VAR_22;
}
