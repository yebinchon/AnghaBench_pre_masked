
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_3__ {int sk_attno; int sk_flags; void* sk_strategy; int sk_argument; void* sk_collation; void* sk_subtype; } ;
typedef TYPE_1__* ScanKey ;


 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static bool
FUNC_3(ScanKey VAR_13, int16 *VAR_14)
{
 int VAR_15;

 VAR_15 = VAR_14[VAR_13->sk_attno - 1] << VAR_5;
 if (VAR_13->sk_flags & VAR_7)
 {

  FUNC_0(!(VAR_13->sk_flags & VAR_9));


  VAR_13->sk_flags |= VAR_15;


  if (VAR_13->sk_flags & VAR_12)
  {
   VAR_13->sk_strategy = VAR_0;
   VAR_13->sk_subtype = VAR_3;
   VAR_13->sk_collation = VAR_3;
  }
  else if (VAR_13->sk_flags & VAR_11)
  {
   if (VAR_13->sk_flags & VAR_6)
    VAR_13->sk_strategy = VAR_1;
   else
    VAR_13->sk_strategy = VAR_2;
   VAR_13->sk_subtype = VAR_3;
   VAR_13->sk_collation = VAR_3;
  }
  else
  {

   return 0;
  }


  return 1;
 }


 if ((VAR_15 & VAR_4) && !(VAR_13->sk_flags & VAR_4))
  VAR_13->sk_strategy = FUNC_1(VAR_13->sk_strategy);
 VAR_13->sk_flags |= VAR_15;


 if (VAR_13->sk_flags & VAR_9)
 {
  ScanKey VAR_16 = (ScanKey) FUNC_2(VAR_13->sk_argument);

  for (;;)
  {
   FUNC_0(VAR_16->sk_flags & VAR_10);
   VAR_15 = VAR_14[VAR_16->sk_attno - 1] << VAR_5;
   if ((VAR_15 & VAR_4) && !(VAR_16->sk_flags & VAR_4))
    VAR_16->sk_strategy = FUNC_1(VAR_16->sk_strategy);
   VAR_16->sk_flags |= VAR_15;
   if (VAR_16->sk_flags & VAR_8)
    break;
   VAR_16++;
  }
 }

 return 1;
}
