
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {unsigned long f_flags; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,struct file*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, unsigned int VAR_4,
         unsigned long VAR_5)
{
 const struct cred *VAR_6 = FUNC_0();
 int VAR_7 = 0;

 switch (VAR_4) {
 case 134:
  if ((VAR_3->f_flags & VAR_2) && !(VAR_5 & VAR_2)) {
   VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_1);
   break;
  }

 case 129:
 case 128:
 case 143:
 case 140:
 case 138:
 case 139:

  VAR_7 = FUNC_1(VAR_6, VAR_3, 0);
  break;
 case 142:
 case 133:
 case 131:
 case 137:
 case 136:
 case 135:





  VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_0);
  break;
 }

 return VAR_7;
}
