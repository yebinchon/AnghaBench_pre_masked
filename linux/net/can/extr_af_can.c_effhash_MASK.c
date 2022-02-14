
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int canid_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(canid_t VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = VAR_1;
 VAR_2 ^= VAR_1 >> VAR_0;
 VAR_2 ^= VAR_1 >> (2 * VAR_0);

 return VAR_2 & ((1 << VAR_0) - 1);
}
