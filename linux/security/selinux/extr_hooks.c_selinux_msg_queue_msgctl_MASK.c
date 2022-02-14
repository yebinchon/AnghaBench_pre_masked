
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kern_ipc_perm*,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct kern_ipc_perm *VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11;

 switch (VAR_9) {
 case 134:
 case 130:

  return FUNC_0(&VAR_7,
        FUNC_1(), VAR_5,
        VAR_4, VAR_6, ((void*)0));
 case 131:
 case 129:
 case 128:
  VAR_11 = VAR_2 | VAR_0;
  break;
 case 132:
  VAR_11 = VAR_3;
  break;
 case 133:
  VAR_11 = VAR_1;
  break;
 default:
  return 0;
 }

 VAR_10 = FUNC_2(VAR_8, VAR_11);
 return VAR_10;
}
