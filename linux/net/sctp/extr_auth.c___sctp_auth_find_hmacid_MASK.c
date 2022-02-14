
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __be16 ;



__attribute__((used)) static int FUNC_0(__be16 *VAR_0, int VAR_1, __be16 VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2 == VAR_0[VAR_4]) {
   VAR_3 = 1;
   break;
  }
 }

 return VAR_3;
}
