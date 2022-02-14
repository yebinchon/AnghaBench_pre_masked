
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_lwlocks; int tranche_name; } ;
typedef TYPE_1__ NamedLWLockTrancheRequest ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char const*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (char const*) ;

void
FUNC_5(const char *VAR_7, int VAR_8)
{
 NamedLWLockTrancheRequest *VAR_9;

 if (VAR_0 || !VAR_6)
  return;

 if (VAR_2 == ((void*)0))
 {
  VAR_4 = 16;
  VAR_2 = (NamedLWLockTrancheRequest *)
   FUNC_1(VAR_5,
          VAR_4
          * sizeof(NamedLWLockTrancheRequest));
 }

 if (VAR_3 >= VAR_4)
 {
  int VAR_10 = VAR_4;

  while (VAR_10 <= VAR_3)
   VAR_10 *= 2;

  VAR_2 = (NamedLWLockTrancheRequest *)
   FUNC_3(VAR_2,
      VAR_10 * sizeof(NamedLWLockTrancheRequest));
  VAR_4 = VAR_10;
 }

 VAR_9 = &VAR_2[VAR_3];
 FUNC_0(FUNC_4(VAR_7) + 1 < VAR_1);
 FUNC_2(VAR_9->tranche_name, VAR_7, VAR_1);
 VAR_9->num_lwlocks = VAR_8;
 VAR_3++;
}
