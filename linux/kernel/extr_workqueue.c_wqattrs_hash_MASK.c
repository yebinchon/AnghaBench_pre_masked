
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct workqueue_attrs {int cpumask; int nice; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static u32 FUNC_4(const struct workqueue_attrs *VAR_1)
{
 u32 VAR_2 = 0;

 VAR_2 = FUNC_3(VAR_1->nice, VAR_2);
 VAR_2 = FUNC_2(FUNC_1(VAR_1->cpumask),
       FUNC_0(VAR_0) * sizeof(long), VAR_2);
 return VAR_2;
}
