
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pcpu; } ;
struct parallel_data {TYPE_1__ cpumask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct parallel_data *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_0(VAR_0->cpumask.pcpu);
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_3 = FUNC_1(VAR_3, VAR_0->cpumask.pcpu);

 return VAR_3;
}
