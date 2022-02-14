
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int mg; } ;
struct map {int dummy; } ;


 int FUNC_0 (int ,struct map*,int ) ;
 int FUNC_1 (int ,struct map*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct map*,int *) ;

int FUNC_3(struct thread *VAR_1, struct map *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1->mg, VAR_2, ((void*)0));
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_1->mg, VAR_2, VAR_0);
 FUNC_1(VAR_1->mg, VAR_2);

 return 0;
}
