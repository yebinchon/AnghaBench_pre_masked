
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,unsigned long) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_5,
        unsigned long VAR_6, void *VAR_7)
{
 unsigned long VAR_8, VAR_9;

 switch (VAR_6) {
 case 128:

  VAR_8 = VAR_4;
  if (0 < VAR_8 && VAR_8 < (1UL << 17))
   FUNC_2();


  VAR_8 = VAR_3;
  if (0 < VAR_8 && VAR_8 < (1UL << 13))
   FUNC_1();

  break;
 case 129:
  VAR_9 = FUNC_0(VAR_1) << (VAR_2 - 10);

  if (VAR_4 > VAR_9) {
   FUNC_2();
   FUNC_3("vm.user_reserve_kbytes reset to %lu\n",
    VAR_4);
  }

  if (VAR_3 > VAR_9) {
   FUNC_1();
   FUNC_3("vm.admin_reserve_kbytes reset to %lu\n",
    VAR_3);
  }
  break;
 default:
  break;
 }
 return VAR_0;
}
