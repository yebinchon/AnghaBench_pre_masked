
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hexagon_insn ;
typedef int hexagon_hash ;


 int const FUNC_0 (int) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;

hexagon_hash
FUNC_1
(hexagon_insn VAR_4)
{
  const hexagon_hash VAR_5 = ~(-(VAR_0 >> VAR_1));
  hexagon_hash VAR_6;

  VAR_6 = VAR_4 >> (VAR_2 * 8 - (VAR_3 - VAR_5));
  VAR_6 |= (FUNC_0 (VAR_4) >> VAR_1)
          << (VAR_3 - VAR_5);

  return (VAR_6);
}
