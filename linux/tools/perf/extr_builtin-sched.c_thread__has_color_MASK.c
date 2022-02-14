
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union map_priv {int color; int ptr; } ;
struct thread {int dummy; } ;


 int FUNC_0 (struct thread*) ;

__attribute__((used)) static bool FUNC_1(struct thread *VAR_0)
{
 union map_priv VAR_1 = {
  .ptr = FUNC_0(VAR_0),
 };

 return VAR_1.color;
}
