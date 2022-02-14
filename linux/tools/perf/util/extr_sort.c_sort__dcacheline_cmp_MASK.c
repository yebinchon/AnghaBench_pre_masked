
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct map {scalar_t__ maj; scalar_t__ min; scalar_t__ ino; scalar_t__ ino_generation; int flags; } ;
struct hist_entry {scalar_t__ cpumode; TYPE_3__* mem_info; TYPE_1__* thread; } ;
typedef int int64_t ;
struct TYPE_5__ {int al_addr; struct map* map; } ;
struct TYPE_6__ {TYPE_2__ daddr; } ;
struct TYPE_4__ {scalar_t__ pid_; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

int64_t
FUNC_1(struct hist_entry *VAR_2, struct hist_entry *VAR_3)
{
 u64 VAR_4, VAR_5;
 struct map *VAR_6, *VAR_7;

 if (!VAR_2->mem_info) return -1;
 if (!VAR_3->mem_info) return 1;


 if (VAR_2->cpumode > VAR_3->cpumode) return -1;
 if (VAR_2->cpumode < VAR_3->cpumode) return 1;

 VAR_6 = VAR_2->mem_info->daddr.map;
 VAR_7 = VAR_3->mem_info->daddr.map;


 if (!VAR_6 && !VAR_7)
  goto addr;

 if (!VAR_6) return -1;
 if (!VAR_7) return 1;

 if (VAR_6->maj > VAR_7->maj) return -1;
 if (VAR_6->maj < VAR_7->maj) return 1;

 if (VAR_6->min > VAR_7->min) return -1;
 if (VAR_6->min < VAR_7->min) return 1;

 if (VAR_6->ino > VAR_7->ino) return -1;
 if (VAR_6->ino < VAR_7->ino) return 1;

 if (VAR_6->ino_generation > VAR_7->ino_generation) return -1;
 if (VAR_6->ino_generation < VAR_7->ino_generation) return 1;
 if ((VAR_2->cpumode != VAR_1) &&
     (!(VAR_6->flags & VAR_0)) &&
     !VAR_6->maj && !VAR_6->min && !VAR_6->ino &&
     !VAR_6->ino_generation) {


  if (VAR_2->thread->pid_ > VAR_3->thread->pid_) return -1;
  if (VAR_2->thread->pid_ < VAR_3->thread->pid_) return 1;
 }

addr:

 VAR_4 = FUNC_0(VAR_2->mem_info->daddr.al_addr);
 VAR_5 = FUNC_0(VAR_3->mem_info->daddr.al_addr);

 if (VAR_4 > VAR_5) return -1;
 if (VAR_4 < VAR_5) return 1;

 return 0;
}
