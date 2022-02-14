
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * STREAM ;
typedef int RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int *,int) ;

STREAM
FUNC_2(RDPCLIENT * VAR_1, int VAR_2)
{
 STREAM VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2 + 7);

 if(VAR_3 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_3, VAR_0, 7);

 return VAR_3;
}
