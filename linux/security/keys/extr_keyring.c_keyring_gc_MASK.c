
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct key {int flags; int sem; int keys; scalar_t__ description; int serial; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

void FUNC_8(struct key *VAR_5, time64_t VAR_6)
{
 int VAR_7;

 FUNC_3("%x{%s}", VAR_5->serial, VAR_5->description ?: "");

 if (VAR_5->flags & ((1 << VAR_0) |
         (1 << VAR_1)))
  goto dont_gc;


 FUNC_5();
 VAR_7 = FUNC_1(&VAR_5->keys,
         VAR_3, &VAR_6);
 FUNC_6();
 if (VAR_7 == 1)
  goto do_gc;

dont_gc:
 FUNC_4(" [no gc]");
 return;

do_gc:
 FUNC_2(&VAR_5->sem);
 FUNC_0(&VAR_5->keys, &VAR_2,
         VAR_4, &VAR_6);
 FUNC_7(&VAR_5->sem);
 FUNC_4(" [gc]");
}
