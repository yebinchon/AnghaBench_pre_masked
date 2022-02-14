
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int * STREAM ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static BOOL
FUNC_5(RDPCLIENT * VAR_2)
{
 uint8 VAR_3, VAR_4;
 STREAM VAR_5;

 VAR_5 = FUNC_3(VAR_2, ((void*)0));
 if (VAR_5 == ((void*)0))
  return VAR_0;

 FUNC_1(VAR_5, VAR_3);
 if ((VAR_3 >> 2) != VAR_1)
 {
  FUNC_0("expected CJcf, got %d\n", VAR_3);
  return VAR_0;
 }

 FUNC_1(VAR_5, VAR_4);
 if (VAR_4 != 0)
 {
  FUNC_0("CJrq: %d\n", VAR_4);
  return VAR_0;
 }

 FUNC_2(VAR_5, 4);
 if (VAR_3 & 2)
  FUNC_2(VAR_5, 2);

 return FUNC_4(VAR_5);
}
