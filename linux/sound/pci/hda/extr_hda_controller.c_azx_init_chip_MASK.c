
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct azx {int driver_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct azx*) ;
 int FUNC_1 (struct azx*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

void FUNC_3(struct azx *VAR_2, bool VAR_3)
{
 if (FUNC_2(FUNC_0(VAR_2), VAR_3)) {

  if (VAR_2->driver_caps & VAR_0)
   FUNC_1(VAR_2, VAR_1, 0xc0);
 }
}
