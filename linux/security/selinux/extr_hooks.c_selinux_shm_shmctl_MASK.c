
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
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kern_ipc_perm*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct kern_ipc_perm *VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;

 switch (VAR_10) {
 case 136:
 case 132:

  return FUNC_0(&VAR_8,
        FUNC_1(), VAR_1,
        VAR_0, VAR_7, ((void*)0));
 case 133:
 case 130:
 case 129:
  VAR_11 = VAR_4 | VAR_2;
  break;
 case 134:
  VAR_11 = VAR_6;
  break;
 case 131:
 case 128:
  VAR_11 = VAR_5;
  break;
 case 135:
  VAR_11 = VAR_3;
  break;
 default:
  return 0;
 }

 VAR_12 = FUNC_2(VAR_9, VAR_11);
 return VAR_12;
}
