
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const __be32 ;



__attribute__((used)) static inline __be32 FUNC_0(const __be32 *VAR_0, const __be32 *VAR_1)
{
 return (VAR_0[0] & VAR_1[0]) ^
        (VAR_0[1] & VAR_1[1]) ^
        (VAR_0[2] & VAR_1[2]) ^
        (VAR_0[3] & VAR_1[3]);
}
