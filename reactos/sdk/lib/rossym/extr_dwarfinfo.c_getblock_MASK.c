
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_3__ {int data; int len; } ;
typedef int DwarfBuf ;
typedef TYPE_1__ DwarfBlock ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5(DwarfBuf *VAR_1, int VAR_2, DwarfBlock *VAR_3)
{
 ulong VAR_4;

 switch(VAR_2){
 default:
  return -1;
 case 131:
  VAR_4 = FUNC_1(VAR_1);
  goto copyn;
 case 130:
  VAR_4 = FUNC_0(VAR_1);
  goto copyn;
 case 129:
  VAR_4 = FUNC_2(VAR_1);
  goto copyn;
 case 128:
  VAR_4 = FUNC_3(VAR_1);
 copyn:
  VAR_3->data = FUNC_4(VAR_1, VAR_4);
  VAR_3->len = VAR_4;
  if(VAR_3->data == VAR_0)
   return -1;
  return 0;
 }
}
