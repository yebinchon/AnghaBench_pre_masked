
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int * FUNC_1 (int *,scalar_t__*,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

BOOL
FUNC_5(RDPCLIENT * VAR_3, char *VAR_4, char *VAR_5)
{
 uint8 VAR_6 = 0;

 if (!FUNC_3(VAR_3, VAR_4))
  return VAR_0;

 if (!FUNC_2(VAR_3, VAR_5))
  return VAR_0;

 if (FUNC_1(VAR_3, &VAR_6, ((void*)0)) == ((void*)0))
  return VAR_0;

 if (VAR_6 != VAR_1)
 {
  FUNC_0("expected CC, got 0x%x\n", VAR_6);
  FUNC_4(VAR_3);
  return VAR_0;
 }

 return VAR_2;
}
