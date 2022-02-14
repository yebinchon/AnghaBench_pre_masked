
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int new_data; } ;
struct s390_cpumsf {TYPE_1__ queues; } ;


 int FUNC_0 (struct s390_cpumsf*,int ) ;

__attribute__((used)) static int FUNC_1(struct s390_cpumsf *VAR_0, u64 VAR_1)
{
 if (!VAR_0->queues.new_data)
  return 0;

 VAR_0->queues.new_data = 0;
 return FUNC_0(VAR_0, VAR_1);
}
