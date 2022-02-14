
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct world {int delta_count; } ;
struct delta {int dummy; } ;


 int FUNC_0 (struct delta*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1)
{
 struct delta *VAR_2 = VAR_1;
 struct world *VAR_3 = VAR_0;

 VAR_3->delta_count--;
 FUNC_0(VAR_2);
}
