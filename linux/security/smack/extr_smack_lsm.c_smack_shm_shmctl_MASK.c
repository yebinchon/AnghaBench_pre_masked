
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct kern_ipc_perm*,int) ;

__attribute__((used)) static int FUNC_1(struct kern_ipc_perm *VAR_3, int VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 133:
 case 130:
 case 129:
  VAR_5 = VAR_1;
  break;
 case 134:
 case 131:
 case 128:
 case 135:
  VAR_5 = VAR_2;
  break;
 case 136:
 case 132:



  return 0;
 default:
  return -VAR_0;
 }
 return FUNC_0(VAR_3, VAR_5);
}
