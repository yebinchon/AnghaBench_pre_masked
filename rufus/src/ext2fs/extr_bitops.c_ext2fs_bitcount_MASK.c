
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

unsigned int FUNC_2(const void *VAR_0, unsigned int VAR_1)
{
 const unsigned char *VAR_2 = VAR_0;
 const __u32 *VAR_3;
 unsigned int VAR_4 = 0;

 while (((((uintptr_t) VAR_2) & 3) != 0) && (VAR_1 > 0)) {
  VAR_4 += FUNC_1(*VAR_2++);
  VAR_1--;
 }
 VAR_3 = (const __u32 *) VAR_2;

 while (VAR_1 > 4) {
  VAR_4 += FUNC_0(*VAR_3++);
  VAR_1 -= 4;
 }
 VAR_2 = (const unsigned char *) VAR_3;

 while (VAR_1 > 0) {
  VAR_4 += FUNC_1(*VAR_2++);
  VAR_1--;
 }
 return VAR_4;
}
