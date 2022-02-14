
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int jit_keyring; } ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 (struct cred*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cred*) ;
 int FUNC_4 (struct cred*) ;
 int VAR_2 ;
 struct cred* FUNC_5 () ;

long FUNC_6(int VAR_3)
{
 struct cred *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_2(VAR_2);

 if (VAR_3 == 134)
  return VAR_6;

 VAR_4 = FUNC_5();
 if (!VAR_4)
  return -VAR_1;

 switch (VAR_3) {
 case 130:
  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5 < 0)
   goto error;
  goto set;

 case 133:
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5 < 0)
   goto error;
  goto set;

 case 136:
 case 131:
 case 129:
 case 128:
 case 132:
  goto set;

 case 134:
 case 135:
 default:
  VAR_5 = -VAR_0;
  goto error;
 }

set:
 VAR_4->jit_keyring = VAR_3;
 FUNC_1(VAR_4);
 return VAR_6;
error:
 FUNC_0(VAR_4);
 return VAR_5;
}
