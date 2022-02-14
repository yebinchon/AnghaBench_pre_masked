
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,struct super_block*,int ,int *) ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3, int VAR_4, struct super_block *VAR_5)
{
 const struct cred *VAR_6 = FUNC_0();
 int VAR_7 = 0;

 if (!VAR_5)
  return 0;

 switch (VAR_2) {
 case 128:
 case 131:
 case 132:
 case 130:
 case 129:
  VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_1, ((void*)0));
  break;
 case 135:
 case 134:
 case 133:
  VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_0, ((void*)0));
  break;
 default:
  VAR_7 = 0;
  break;
 }
 return VAR_7;
}
