
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kern_ipc_perm {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kern_ipc_perm*,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_3(struct kern_ipc_perm *VAR_10, int VAR_11)
{
 int VAR_12;
 u32 VAR_13;

 switch (VAR_11) {
 case 136:
 case 132:

  return FUNC_0(&VAR_9,
        FUNC_1(), VAR_1,
        VAR_0, VAR_8, ((void*)0));
 case 139:
 case 140:
 case 137:
  VAR_13 = VAR_4;
  break;
 case 138:
 case 141:
  VAR_13 = VAR_5;
  break;
 case 128:
 case 129:
  VAR_13 = VAR_7;
  break;
 case 135:
  VAR_13 = VAR_3;
  break;
 case 134:
  VAR_13 = VAR_6;
  break;
 case 133:
 case 131:
 case 130:
  VAR_13 = VAR_4 | VAR_2;
  break;
 default:
  return 0;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_13);
 return VAR_12;
}
