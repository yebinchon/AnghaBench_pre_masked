
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct timechart {int dummy; } ;
struct per_pid {TYPE_1__* current; } ;
struct TYPE_2__ {scalar_t__ state; int state_since; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct per_pid* FUNC_0 (struct timechart*,int) ;
 int FUNC_1 (struct timechart*,int,scalar_t__,int,int,int,char const*) ;

__attribute__((used)) static void FUNC_2(struct timechart *VAR_4, int VAR_5, u64 VAR_6,
    int VAR_7, int VAR_8, u64 VAR_9,
    const char *VAR_10)
{
 struct per_pid *VAR_11 = ((void*)0), *VAR_12;

 VAR_12 = FUNC_0(VAR_4, VAR_7);

 VAR_11 = FUNC_0(VAR_4, VAR_8);

 if (VAR_12->current && VAR_12->current->state != VAR_1)
  FUNC_1(VAR_4, VAR_7, VAR_2, VAR_5,
          VAR_12->current->state_since, VAR_6,
          VAR_10);
 if (VAR_11 && VAR_11->current) {
  if (VAR_11->current->state != VAR_1)
   FUNC_1(VAR_4, VAR_8, VAR_11->current->state, VAR_5,
           VAR_11->current->state_since, VAR_6,
           VAR_10);

  VAR_11->current->state_since = VAR_6;
  VAR_11->current->state = VAR_2;
 }

 if (VAR_12->current) {
  VAR_12->current->state = VAR_1;
  VAR_12->current->state_since = VAR_6;
  if (VAR_9 & 2)
   VAR_12->current->state = VAR_0;
  if (VAR_9 == 0)
   VAR_12->current->state = VAR_3;
 }
}
