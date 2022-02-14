
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int STREAM ;
typedef int RDPCLIENT ;






 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 uint16 VAR_2, VAR_3;

 FUNC_0(VAR_1, VAR_2);

 FUNC_5(VAR_0);
 switch (VAR_2)
 {
  case 130:
   FUNC_1(VAR_1, 2);
   FUNC_0(VAR_1, VAR_3);
   FUNC_1(VAR_1, 2);
   FUNC_3(VAR_0, VAR_1, VAR_3);
   break;

  case 131:
   FUNC_2(VAR_0, VAR_1);
   break;

  case 129:
   FUNC_4(VAR_0, VAR_1);
   break;

  case 128:
   break;

  default:
   FUNC_7("update %d\n", VAR_2);
 }
 FUNC_6(VAR_0);
}
