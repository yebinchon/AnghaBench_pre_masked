
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threads {int dummy; } ;
struct thread {int dummy; } ;
struct machine {int dummy; } ;


 struct thread* FUNC_0 (struct threads*,struct machine*,int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static struct thread*
FUNC_1(struct threads *VAR_1, struct machine *VAR_2,
   int VAR_3, int VAR_4)
{
 struct thread *VAR_5 = ((void*)0);

 if (VAR_0)
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
