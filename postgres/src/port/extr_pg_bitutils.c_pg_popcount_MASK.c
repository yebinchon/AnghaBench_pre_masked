
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;


 scalar_t__ FUNC_0 (int,char const*) ;
 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

uint64
FUNC_3(const char *VAR_1, int VAR_2)
{
 uint64 VAR_3 = 0;
 if (VAR_1 == (const char *) FUNC_0(4, VAR_1))
 {
  const uint32 *VAR_4 = (const uint32 *) VAR_1;

  while (VAR_2 >= 4)
  {
   VAR_3 += FUNC_1(*VAR_4++);
   VAR_2 -= 4;
  }

  VAR_1 = (const char *) VAR_4;
 }



 while (VAR_2--)
  VAR_3 += VAR_0[(unsigned char) *VAR_1++];

 return VAR_3;
}
