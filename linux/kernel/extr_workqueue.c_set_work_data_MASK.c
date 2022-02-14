
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct work_struct*) ;
 unsigned long FUNC_3 (struct work_struct*) ;

__attribute__((used)) static inline void FUNC_4(struct work_struct *VAR_0, unsigned long VAR_1,
     unsigned long VAR_2)
{
 FUNC_0(!FUNC_2(VAR_0));
 FUNC_1(&VAR_0->data, VAR_1 | VAR_2 | FUNC_3(VAR_0));
}
