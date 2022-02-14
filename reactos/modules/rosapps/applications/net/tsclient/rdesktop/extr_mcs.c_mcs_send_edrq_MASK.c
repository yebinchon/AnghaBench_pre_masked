
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * STREAM ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static BOOL
FUNC_5(RDPCLIENT * VAR_2)
{
 STREAM VAR_3;

 VAR_3 = FUNC_0(VAR_2, 5);

 if(VAR_3 == ((void*)0))
  return VAR_0;

 FUNC_3(VAR_3, (VAR_1 << 2));
 FUNC_2(VAR_3, 1);
 FUNC_2(VAR_3, 1);

 FUNC_4(VAR_3);
 return FUNC_1(VAR_2, VAR_3);
}
