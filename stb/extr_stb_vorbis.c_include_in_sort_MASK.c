
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
struct TYPE_3__ {scalar_t__ sparse; } ;
typedef TYPE_1__ Codebook ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(Codebook *VAR_4, uint8 VAR_5)
{
   if (VAR_4->sparse) { FUNC_0(VAR_5 != VAR_1); return VAR_3; }
   if (VAR_5 == VAR_1) return VAR_0;
   if (VAR_5 > VAR_2) return VAR_3;
   return VAR_0;
}
