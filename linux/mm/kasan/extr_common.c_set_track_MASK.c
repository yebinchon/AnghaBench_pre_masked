
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kasan_track {int stack; int pid; } ;
typedef int gfp_t ;
struct TYPE_2__ {int pid; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct kasan_track *VAR_1, gfp_t VAR_2)
{
 VAR_1->pid = VAR_0->pid;
 VAR_1->stack = FUNC_0(VAR_2);
}
