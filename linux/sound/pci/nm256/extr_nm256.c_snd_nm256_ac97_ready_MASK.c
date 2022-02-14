
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nm256 {int mixer_status_mask; int mixer_status_offset; } ;


 int FUNC_0 (struct nm256*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct nm256 *VAR_0)
{
 int VAR_1 = 10;
 u32 VAR_2;
 u16 VAR_3;

 VAR_2 = VAR_0->mixer_status_offset;
 VAR_3 = VAR_0->mixer_status_mask;




 while (VAR_1-- > 0) {
  if ((FUNC_0(VAR_0, VAR_2) & VAR_3) == 0)
   return 1;
  FUNC_1(100);
 }
 return 0;
}
