
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* unlock ) (struct strparser*) ;int (* lock ) (struct strparser*) ;} ;
struct strparser {TYPE_1__ cb; int work; scalar_t__ paused; int stopped; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct strparser*) ;
 int VAR_1 ;
 int FUNC_2 (struct strparser*) ;
 int FUNC_3 (struct strparser*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct strparser *VAR_2)
{



 VAR_2->cb.lock(VAR_2);

 if (FUNC_4(VAR_2->stopped))
  goto out;

 if (VAR_2->paused)
  goto out;

 if (FUNC_1(VAR_2) == -VAR_0)
  FUNC_0(VAR_1, &VAR_2->work);

out:
 VAR_2->cb.unlock(VAR_2);
}
