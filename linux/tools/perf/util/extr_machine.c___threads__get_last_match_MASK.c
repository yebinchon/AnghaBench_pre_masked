
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threads {struct thread* last_match; } ;
struct thread {int tid; } ;
struct machine {int dummy; } ;


 int FUNC_0 (struct machine*,struct thread*,int) ;
 struct thread* FUNC_1 (struct thread*) ;

__attribute__((used)) static struct thread*
FUNC_2(struct threads *VAR_0, struct machine *VAR_1,
     int VAR_2, int VAR_3)
{
 struct thread *VAR_4;

 VAR_4 = VAR_0->last_match;
 if (VAR_4 != ((void*)0)) {
  if (VAR_4->tid == VAR_3) {
   FUNC_0(VAR_1, VAR_4, VAR_2);
   return FUNC_1(VAR_4);
  }

  VAR_0->last_match = ((void*)0);
 }

 return ((void*)0);
}
