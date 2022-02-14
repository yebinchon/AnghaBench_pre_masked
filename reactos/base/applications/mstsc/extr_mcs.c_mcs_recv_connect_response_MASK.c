
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
typedef int * STREAM ;
typedef int RD_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static RD_BOOL
FUNC_8(STREAM VAR_5)
{
 uint8 VAR_6;
 int VAR_7;
 STREAM VAR_8;

 VAR_8 = FUNC_4(((void*)0));
 if (VAR_8 == ((void*)0))
  return VAR_3;

 FUNC_0(VAR_8, VAR_4, &VAR_7);

 FUNC_0(VAR_8, VAR_2, &VAR_7);
 FUNC_2(VAR_8, VAR_6);
 if (VAR_6 != 0)
 {
  FUNC_1("MCS connect: %d\n", VAR_6);
  return VAR_3;
 }

 FUNC_0(VAR_8, VAR_0, &VAR_7);
 FUNC_3(VAR_8, VAR_7);
 FUNC_5(VAR_8);

 FUNC_0(VAR_8, VAR_1, &VAR_7);

 FUNC_7(VAR_8);
 return FUNC_6(VAR_8);
}
