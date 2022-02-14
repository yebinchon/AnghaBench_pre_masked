
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct flv_output {int stop_ts; int stopping; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, uint64_t VAR_1)
{
 struct flv_output *VAR_2 = VAR_0;
 VAR_2->stop_ts = VAR_1 / 1000;
 FUNC_0(&VAR_2->stopping, 1);
}
