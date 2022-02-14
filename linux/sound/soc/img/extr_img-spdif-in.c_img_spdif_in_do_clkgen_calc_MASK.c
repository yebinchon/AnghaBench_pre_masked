
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_1, unsigned int *VAR_2,
  unsigned int *VAR_3, unsigned long VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;






 if (!VAR_1)
  return -VAR_0;

 VAR_5 = VAR_4 / (VAR_1 * 64);

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = (4096 / VAR_5) + 1;
 do
  VAR_7 = 4096 - (--VAR_6 * (VAR_5 - 1));
 while (VAR_7 < 120);

 *VAR_2 = VAR_6;
 *VAR_3 = VAR_7;

 return 0;
}
