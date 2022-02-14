
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int lock; } ;
struct TYPE_8__ {int trancheId; char* trancheName; } ;
struct TYPE_7__ {int num_lwlocks; int tranche_name; } ;
typedef TYPE_1__ NamedLWLockTrancheRequest ;
typedef TYPE_2__ NamedLWLockTranche ;
typedef TYPE_3__ LWLockPadded ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_12 = FUNC_2();
 int VAR_13;
 int VAR_14;
 int VAR_15;
 LWLockPadded *VAR_16;


 for (VAR_13 = 0, VAR_16 = VAR_3; VAR_13 < VAR_6; VAR_13++, VAR_16++)
  FUNC_0(&VAR_16->lock, VAR_13);


 VAR_16 = VAR_3 + VAR_6;
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++, VAR_16++)
  FUNC_0(&VAR_16->lock, VAR_0);


 VAR_16 = VAR_3 + VAR_6 + VAR_4;
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++, VAR_16++)
  FUNC_0(&VAR_16->lock, VAR_1);


 VAR_16 = VAR_3 + VAR_6 +
  VAR_4 + VAR_7;
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++, VAR_16++)
  FUNC_0(&VAR_16->lock, VAR_2);


 if (VAR_11 > 0)
 {
  char *VAR_17;

  VAR_9 = (NamedLWLockTranche *)
   &VAR_3[VAR_5 + VAR_12];

  VAR_17 = (char *) VAR_9 +
   (VAR_11 * sizeof(NamedLWLockTranche));
  VAR_16 = &VAR_3[VAR_5];

  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  {
   NamedLWLockTrancheRequest *VAR_18;
   NamedLWLockTranche *VAR_19;
   char *VAR_20;

   VAR_18 = &VAR_10[VAR_14];
   VAR_19 = &VAR_9[VAR_14];

   VAR_20 = VAR_17;
   VAR_17 += FUNC_4(VAR_18->tranche_name) + 1;
   FUNC_3(VAR_20, VAR_18->tranche_name);
   VAR_19->trancheId = FUNC_1();
   VAR_19->trancheName = VAR_20;

   for (VAR_15 = 0; VAR_15 < VAR_18->num_lwlocks; VAR_15++, VAR_16++)
    FUNC_0(&VAR_16->lock, VAR_19->trancheId);
  }
 }
}
