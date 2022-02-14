
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct annotation {scalar_t__* offsets; } ;



__attribute__((used)) static unsigned FUNC_0(struct annotation *VAR_0, u64 VAR_1, u64 VAR_2)
{
 unsigned VAR_3 = 0;
 u64 VAR_4;

 for (VAR_4 = VAR_1; VAR_4 <= VAR_2; VAR_4++) {
  if (VAR_0->offsets[VAR_4])
   VAR_3++;
 }
 return VAR_3;
}
