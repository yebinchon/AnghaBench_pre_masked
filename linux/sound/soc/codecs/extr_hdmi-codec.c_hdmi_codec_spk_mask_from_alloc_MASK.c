
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long const*) ;
__attribute__((used)) static unsigned long FUNC_1(int VAR_0)
{
 int VAR_1;
 static const unsigned long VAR_2[] = {
  [0] = 137 | 135, [1] = 133, [2] = 138, [3] = 131 | 129,
  [4] = 132, [5] = 136 | 134, [6] = 130 | 128,
 };
 unsigned long VAR_3 = 0;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2); VAR_1++) {
  if (VAR_0 & (1 << VAR_1))
   VAR_3 |= VAR_2[VAR_1];
 }

 return VAR_3;
}
