
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int pgn_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline pgn_t FUNC_1(const u8 *VAR_0)
{
 pgn_t VAR_1;

 VAR_1 = (VAR_0[7] << 16) | (VAR_0[6] << 8) | (VAR_0[5] << 0);
 if (FUNC_0(VAR_1))
  VAR_1 &= 0xffff00;
 return VAR_1;
}
