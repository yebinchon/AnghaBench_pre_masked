
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int macaddr ;



__attribute__((used)) static uint64
FUNC_0(macaddr *VAR_0)
{
 unsigned char *VAR_1 = (unsigned char *) VAR_0;
 uint64 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
  VAR_2 += (((uint64) VAR_1[VAR_3]) << ((uint64) ((5 - VAR_3) * 8)));
 return VAR_2;
}
