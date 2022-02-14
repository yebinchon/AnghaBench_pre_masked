
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct buffer_ext {int dummy; } ;


 int FUNC_0 (struct buffer_ext*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct buffer_ext *VAR_0,
     unsigned long VAR_1)
{
 do {
  ubyte VAR_2 = VAR_1 & 0x7F;
  VAR_1 >>= 7;
  if (VAR_1)
   VAR_2 |= 0x80;
  FUNC_0(VAR_0, &VAR_2, 1);
 } while (VAR_1);
}
