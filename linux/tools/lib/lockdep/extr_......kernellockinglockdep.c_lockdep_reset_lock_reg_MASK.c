
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_free {int dummy; } ;
struct lockdep_map {int dummy; } ;


 int FUNC_0 (struct pending_free*,struct lockdep_map*) ;
 int FUNC_1 (struct pending_free*) ;
 struct pending_free* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(struct lockdep_map *VAR_0)
{
 struct pending_free *VAR_1;
 unsigned long VAR_2;
 int VAR_3;

 FUNC_6(VAR_2);
 VAR_3 = FUNC_3();
 if (!VAR_3)
  goto out_irq;

 VAR_1 = FUNC_2();
 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1);

 FUNC_4();
out_irq:
 FUNC_5(VAR_2);
}
