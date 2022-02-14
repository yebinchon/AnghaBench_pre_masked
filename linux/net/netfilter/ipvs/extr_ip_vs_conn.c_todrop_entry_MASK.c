
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct ip_vs_conn {int in_pkts; TYPE_1__ timer; scalar_t__ timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct ip_vs_conn *VAR_2)
{




 static const char VAR_3[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
 static char VAR_4[9] = {0};
 int VAR_5;




 if (FUNC_1(VAR_2->timeout + VAR_1, VAR_2->timer.expires + 60*VAR_0))
  return 0;



 VAR_5 = FUNC_0(&VAR_2->in_pkts);
 if (VAR_5 > 8 || VAR_5 < 0) return 0;

 if (!VAR_3[VAR_5]) return 0;
 if (--VAR_4[VAR_5] > 0) return 0;

 VAR_4[VAR_5] = VAR_3[VAR_5];
 return 1;
}
