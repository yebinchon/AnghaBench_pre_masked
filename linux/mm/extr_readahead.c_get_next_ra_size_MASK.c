
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_ra_state {unsigned long size; } ;



__attribute__((used)) static unsigned long FUNC_0(struct file_ra_state *VAR_0,
          unsigned long VAR_1)
{
 unsigned long VAR_2 = VAR_0->size;

 if (VAR_2 < VAR_1 / 16)
  return 4 * VAR_2;
 if (VAR_2 <= VAR_1 / 2)
  return 2 * VAR_2;
 return VAR_1;
}
