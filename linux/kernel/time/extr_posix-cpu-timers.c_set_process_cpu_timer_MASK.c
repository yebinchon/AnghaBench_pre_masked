
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {TYPE_3__* signal; } ;
struct TYPE_4__ {TYPE_2__* bases; } ;
struct TYPE_6__ {TYPE_1__ posix_cputimers; } ;
struct TYPE_5__ {scalar_t__ nextevt; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int,struct task_struct*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;

void FUNC_3(struct task_struct *VAR_3, unsigned int VAR_4,
      u64 *VAR_5, u64 *VAR_6)
{
 u64 VAR_7, *VAR_8;

 if (FUNC_0(VAR_4 >= VAR_0))
  return;

 VAR_8 = &VAR_3->signal->posix_cputimers.bases[VAR_4].nextevt;
 VAR_7 = FUNC_1(VAR_4, VAR_3, 1);

 if (VAR_6) {





  if (*VAR_6) {
   if (*VAR_6 <= VAR_7) {

    *VAR_6 = VAR_2;
   } else {
    *VAR_6 -= VAR_7;
   }
  }

  if (!*VAR_5)
   return;
  *VAR_5 += VAR_7;
 }





 if (*VAR_5 < *VAR_8)
  *VAR_8 = *VAR_5;

 FUNC_2(VAR_3->signal, VAR_1);
}
