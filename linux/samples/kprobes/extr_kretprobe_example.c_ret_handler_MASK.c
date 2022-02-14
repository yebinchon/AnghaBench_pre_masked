
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct my_data {int entry_stamp; } ;
struct kretprobe_instance {scalar_t__ data; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,unsigned long,long long) ;
 unsigned long FUNC_4 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_5(struct kretprobe_instance *VAR_1, struct pt_regs *VAR_2)
{
 unsigned long VAR_3 = FUNC_4(VAR_2);
 struct my_data *VAR_4 = (struct my_data *)VAR_1->data;
 s64 VAR_5;
 ktime_t VAR_6;

 VAR_6 = FUNC_0();
 VAR_5 = FUNC_2(FUNC_1(VAR_6, VAR_4->entry_stamp));
 FUNC_3("%s returned %lu and took %lld ns to execute\n",
   VAR_0, VAR_3, (long long)VAR_5);
 return 0;
}
