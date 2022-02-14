
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_1,
    unsigned long VAR_2, void *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2) {
 case 130:
  VAR_4 = FUNC_2(VAR_3);
  break;
 case 131:
  VAR_4 = FUNC_1(VAR_3);
  break;
 case 129:
 case 132:
  FUNC_3(VAR_3);
  break;
 case 128:
 case 133:
  break;
 }
 if (VAR_4)
  VAR_4 = FUNC_0(VAR_4);
 else
  VAR_4 = VAR_0;
 return VAR_4;
}
