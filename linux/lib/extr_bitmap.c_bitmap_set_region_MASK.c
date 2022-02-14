
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct region {int end; unsigned int start; int off; scalar_t__ group_len; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(const struct region *VAR_1,
    unsigned long *VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 if (VAR_1->end >= VAR_3)
  return -VAR_0;

 for (VAR_4 = VAR_1->start; VAR_4 <= VAR_1->end; VAR_4 += VAR_1->group_len)
  FUNC_0(VAR_2, VAR_4, FUNC_1(VAR_1->end - VAR_4 + 1, VAR_1->off));

 return 0;
}
