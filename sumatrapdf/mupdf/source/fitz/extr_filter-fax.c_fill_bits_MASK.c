
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bidx; int word; int chain; } ;
typedef TYPE_1__ fz_faxd ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_1, fz_faxd *VAR_2)
{



 while (VAR_2->bidx > (32-13))
 {
  int VAR_3 = FUNC_0(VAR_1, VAR_2->chain);
  if (VAR_3 == VAR_0)
   return VAR_0;
  VAR_2->bidx -= 8;
  VAR_2->word |= VAR_3 << VAR_2->bidx;
 }
 return 0;
}
