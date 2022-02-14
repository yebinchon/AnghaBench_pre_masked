
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;



__attribute__((used)) static inline ut16 FUNC_0(ut16 VAR_0)
{
 ut16 VAR_1 = VAR_0;

 ut8 * VAR_2 = (void *)&VAR_0;
 VAR_1 = (VAR_2[0] << 8) | VAR_2[1];

 return VAR_1;
}
