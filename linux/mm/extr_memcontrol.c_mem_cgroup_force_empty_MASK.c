
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int memory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int FUNC_1 (struct mem_cgroup*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mem_cgroup*,int,int ,int) ;

__attribute__((used)) static int FUNC_6(struct mem_cgroup *VAR_6)
{
 int VAR_7 = VAR_4;


 FUNC_2();

 FUNC_1(VAR_6);


 while (VAR_7 && FUNC_3(&VAR_6->memory)) {
  int VAR_8;

  if (FUNC_4(VAR_5))
   return -VAR_1;

  VAR_8 = FUNC_5(VAR_6, 1,
       VAR_2, 1);
  if (!VAR_8) {
   VAR_7--;

   FUNC_0(VAR_0, VAR_3/10);
  }

 }

 return 0;
}
