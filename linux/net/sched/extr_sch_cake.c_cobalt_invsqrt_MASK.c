
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cobalt_vars {size_t count; int rec_inv_sqrt; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct cobalt_vars*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(struct cobalt_vars *VAR_2)
{
 if (VAR_2->count < VAR_0)
  VAR_2->rec_inv_sqrt = VAR_1[VAR_2->count];
 else
  FUNC_0(VAR_2);
}
