
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct file {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cred const*,int ,int ,int) ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (struct cred const*,struct file*,int ) ;
 int FUNC_3 (struct cred const*,struct file*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, unsigned int VAR_6,
         unsigned long VAR_7)
{
 const struct cred *VAR_8 = FUNC_1();
 int VAR_9 = 0;

 switch (VAR_6) {
 case 134:

 case 138:

 case 137:

 case 133:

 case 132:
  VAR_9 = FUNC_2(VAR_8, VAR_5, VAR_2);
  break;

 case 131:

 case 130:
  VAR_9 = FUNC_2(VAR_8, VAR_5, VAR_4);
  break;


 case 135:

 case 136:
  VAR_9 = FUNC_2(VAR_8, VAR_5, 0);
  break;

 case 129:
 case 128:
  VAR_9 = FUNC_0(VAR_8, VAR_1,
         VAR_0, 1);
  break;




 default:
  VAR_9 = FUNC_3(VAR_8, VAR_5, VAR_3, (u16) VAR_6);
 }
 return VAR_9;
}
