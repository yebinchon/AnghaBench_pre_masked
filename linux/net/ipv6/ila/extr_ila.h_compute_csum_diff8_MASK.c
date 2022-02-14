
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int diff ;
typedef int __wsum ;
typedef int const __be32 ;


 int FUNC_0 (int const*,int,int ) ;

__attribute__((used)) static inline __wsum FUNC_1(const __be32 *VAR_0, const __be32 *VAR_1)
{
 __be32 VAR_2[] = {
  ~VAR_0[0], ~VAR_0[1], VAR_1[0], VAR_1[1],
 };

 return FUNC_0(VAR_2, sizeof(VAR_2), 0);
}
