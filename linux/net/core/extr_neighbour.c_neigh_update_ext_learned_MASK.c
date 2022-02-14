
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct neighbour {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct neighbour *VAR_3, u32 VAR_4,
         int *VAR_5)
{
 bool VAR_6 = 0;
 u8 VAR_7;

 if (!(VAR_4 & VAR_0))
  return VAR_6;

 VAR_7 = (VAR_4 & VAR_1) ? VAR_2 : 0;
 if ((VAR_3->flags ^ VAR_7) & VAR_2) {
  if (VAR_7 & VAR_2)
   VAR_3->flags |= VAR_2;
  else
   VAR_3->flags &= ~VAR_2;
  VAR_6 = 1;
  *VAR_5 = 1;
 }

 return VAR_6;
}
