
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(u32 *VAR_1)
{
 unsigned int VAR_2 = 0;
 int VAR_3;

 if (!VAR_1)
  return 0;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2 += FUNC_0(VAR_1[VAR_3]);

 return VAR_2;
}
