
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crush_map {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(const struct crush_map *VAR_1,
    const __u32 *VAR_2, int VAR_3,
    int VAR_4, int VAR_5)
{
 if (VAR_4 >= VAR_3)
  return 1;
 if (VAR_2[VAR_4] >= 0x10000)
  return 0;
 if (VAR_2[VAR_4] == 0)
  return 1;
 if ((FUNC_0(VAR_0, VAR_5, VAR_4) & 0xffff)
     < VAR_2[VAR_4])
  return 0;
 return 1;
}
