
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long FUNC_0(unsigned long VAR_0, char *VAR_1)
{
 *VAR_1 = ' ';

 if (VAR_0 > 1000) {
  VAR_0 /= 1000;
  *VAR_1 = 'K';
 }

 if (VAR_0 > 1000) {
  VAR_0 /= 1000;
  *VAR_1 = 'M';
 }

 if (VAR_0 > 1000) {
  VAR_0 /= 1000;
  *VAR_1 = 'G';
 }

 return VAR_0;
}
