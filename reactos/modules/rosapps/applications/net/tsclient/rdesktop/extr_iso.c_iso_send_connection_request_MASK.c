
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * STREAM ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static BOOL
FUNC_8(RDPCLIENT * VAR_2, char *VAR_3)
{
 STREAM VAR_4;
 int VAR_5 = (int)FUNC_5(VAR_3);
 int VAR_6 = 11 + VAR_5;

 VAR_4 = FUNC_6(VAR_2, VAR_6);

 if(VAR_4 == ((void*)0))
  return VAR_0;

 FUNC_2(VAR_4, 3);
 FUNC_2(VAR_4, 0);
 FUNC_1(VAR_4, VAR_6);

 FUNC_2(VAR_4, VAR_6 - 5);
 FUNC_2(VAR_4, VAR_1);
 FUNC_0(VAR_4, 0);
 FUNC_0(VAR_4, 0);
 FUNC_2(VAR_4, 0);

 FUNC_3(VAR_4, VAR_3, VAR_5);

 FUNC_4(VAR_4);
 return FUNC_7(VAR_2, VAR_4);
}
