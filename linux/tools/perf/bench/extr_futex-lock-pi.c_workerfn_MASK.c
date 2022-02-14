
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker {unsigned long ops; int futex; int tid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ,int ,int) ;

__attribute__((used)) static void *FUNC_8(void *VAR_7)
{
 struct worker *VAR_8 = (struct worker *) VAR_7;
 unsigned long VAR_9 = VAR_8->ops;

 FUNC_4(&VAR_3);
 VAR_6--;
 if (!VAR_6)
  FUNC_2(&VAR_4);
 FUNC_3(&VAR_5, &VAR_3);
 FUNC_5(&VAR_3);

 do {
  int VAR_10;
 again:
  VAR_10 = FUNC_0(VAR_8->futex, ((void*)0), VAR_1);

  if (VAR_10) {
   if (!VAR_2)
    FUNC_7("thread %d: Could not lock pi-lock for %p (%d)",
         VAR_8->tid, VAR_8->futex, VAR_10);
   if (VAR_0)
    break;

   goto again;
  }

  FUNC_6(1);
  VAR_10 = FUNC_1(VAR_8->futex, VAR_1);
  if (VAR_10 && !VAR_2)
   FUNC_7("thread %d: Could not unlock pi-lock for %p (%d)",
        VAR_8->tid, VAR_8->futex, VAR_10);
  VAR_9++;
 } while (!VAR_0);

 VAR_8->ops = VAR_9;
 return ((void*)0);
}
