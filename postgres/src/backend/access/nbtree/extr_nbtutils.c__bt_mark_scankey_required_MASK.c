
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sk_strategy; int sk_flags; scalar_t__ sk_attno; int sk_argument; } ;
typedef TYPE_1__* ScanKey ;


 int FUNC_0 (int) ;





 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(ScanKey VAR_5)
{
 int VAR_6;

 switch (VAR_5->sk_strategy)
 {
  case 128:
  case 129:
   VAR_6 = VAR_2;
   break;
  case 132:
   VAR_6 = VAR_2 | VAR_1;
   break;
  case 131:
  case 130:
   VAR_6 = VAR_1;
   break;
  default:
   FUNC_2(VAR_0, "unrecognized StrategyNumber: %d",
     (int) VAR_5->sk_strategy);
   VAR_6 = 0;
   break;
 }

 VAR_5->sk_flags |= VAR_6;

 if (VAR_5->sk_flags & VAR_3)
 {
  ScanKey VAR_7 = (ScanKey) FUNC_1(VAR_5->sk_argument);


  FUNC_0(VAR_7->sk_flags & VAR_4);
  FUNC_0(VAR_7->sk_attno == VAR_5->sk_attno);
  FUNC_0(VAR_7->sk_strategy == VAR_5->sk_strategy);
  VAR_7->sk_flags |= VAR_6;
 }
}
