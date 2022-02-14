
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;



UCHAR FUNC_0(UCHAR VAR_0)
{
 UCHAR VAR_1, VAR_2;
 for(VAR_1 = VAR_2 = 0; VAR_1 < 4; VAR_1++)
  VAR_2 |= (1 << ((VAR_0 >> VAR_1) & 1)) << (VAR_1 * 2);
 return VAR_2;
}
