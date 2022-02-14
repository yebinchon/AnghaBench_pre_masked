
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int cx; int cy; } ;
typedef TYPE_1__ SIZE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

VOID
FUNC_2(DWORD VAR_12, DWORD VAR_13, SIZE *VAR_14, BOOL VAR_15)
{
   DWORD VAR_16 = 0;

   if (FUNC_1(VAR_12, VAR_13))
      VAR_16 += 2;
   else if (VAR_13 & VAR_9)
      VAR_16 += 1;
   if ((VAR_13 & VAR_7) && VAR_15)
      VAR_16 += 2;
   if (VAR_12 & VAR_6 || VAR_13 & VAR_8)
      VAR_16 ++;
   VAR_14->cx = VAR_14->cy = VAR_16;
   if ((VAR_12 & VAR_11) && !(VAR_12 & VAR_10))
   {
      VAR_14->cx += FUNC_0(VAR_2) - FUNC_0(VAR_1);
      VAR_14->cy += FUNC_0(VAR_5) - FUNC_0(VAR_4);
   }
   VAR_14->cx *= FUNC_0(VAR_0);
   VAR_14->cy *= FUNC_0(VAR_3);
}
