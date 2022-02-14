
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
typedef int * STREAM ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static BOOL
FUNC_8(RDPCLIENT * VAR_5, STREAM VAR_6)
{
 uint8 VAR_7;
 int VAR_8;
 STREAM VAR_9;

 VAR_9 = FUNC_4(VAR_5, ((void*)0));
 if (VAR_9 == ((void*)0))
  return VAR_3;

 FUNC_0(VAR_9, VAR_4, &VAR_8);

 FUNC_0(VAR_9, VAR_2, &VAR_8);
 FUNC_2(VAR_9, VAR_7);
 if (VAR_7 != 0)
 {
  FUNC_1("MCS connect: %d\n", VAR_7);
  return VAR_3;
 }

 FUNC_0(VAR_9, VAR_0, &VAR_8);
 FUNC_3(VAR_9, VAR_8);
 FUNC_5(VAR_9);

 FUNC_0(VAR_9, VAR_1, &VAR_8);

 FUNC_7(VAR_5, VAR_9);
 return FUNC_6(VAR_9);
}
