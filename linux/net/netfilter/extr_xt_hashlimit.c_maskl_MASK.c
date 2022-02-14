
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline __be32 FUNC_2(__be32 VAR_0, unsigned int VAR_1)
{
 return VAR_1 ? FUNC_0(FUNC_1(VAR_0) & ~0 << (32 - VAR_1)) : 0;
}
