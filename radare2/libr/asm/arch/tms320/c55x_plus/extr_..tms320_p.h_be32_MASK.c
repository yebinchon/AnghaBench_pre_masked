
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;



__attribute__((used)) static inline ut32 FUNC_0(ut32 VAR_0)
{
 ut32 VAR_1 = VAR_0;

 ut8 * VAR_2 = (void *)&VAR_0;
 VAR_1 = (VAR_2[0] << 24) | (VAR_2[1] << 16) | (VAR_2[2] << 8) | VAR_2[3];

 return VAR_1;
}
