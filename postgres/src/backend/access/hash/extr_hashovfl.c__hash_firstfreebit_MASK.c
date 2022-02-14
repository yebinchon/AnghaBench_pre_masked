
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static uint32
FUNC_1(uint32 VAR_2)
{
 uint32 VAR_3,
    VAR_4;

 VAR_4 = 0x1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (!(VAR_4 & VAR_2))
   return VAR_3;
  VAR_4 <<= 1;
 }

 FUNC_0(VAR_1, "firstfreebit found no free bit");

 return 0;
}
