
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int LARGE_INTEGER ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,int *,int ) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static BOOL FUNC_4(HANDLE VAR_3, LARGE_INTEGER VAR_4, DWORD VAR_5)
{
 BOOL VAR_6 = VAR_0;
 uint8_t* VAR_7 = FUNC_2(VAR_5, 1);

 if (VAR_7 == ((void*)0))
  return VAR_0;

 if (!FUNC_0(VAR_3, VAR_4, ((void*)0), VAR_1)) {
  FUNC_3(VAR_7);
  return VAR_0;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_7, VAR_5, &VAR_5, VAR_2);
 FUNC_3(VAR_7);
 return VAR_6;
}
