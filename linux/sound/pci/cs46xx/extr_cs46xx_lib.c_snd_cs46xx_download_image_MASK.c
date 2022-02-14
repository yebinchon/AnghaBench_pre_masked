
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs46xx {struct ba1_struct* ba1; } ;
struct ba1_struct {TYPE_1__* memory; int * map; } ;
struct TYPE_2__ {int size; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_cs46xx*,int *,int ,int) ;

int FUNC_1(struct snd_cs46xx *VAR_1)
{
 int VAR_2, VAR_3;
 unsigned int VAR_4 = 0;
 struct ba1_struct *VAR_5 = VAR_1->ba1;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1,
       &VAR_5->map[VAR_4],
       VAR_5->memory[VAR_2].offset,
       VAR_5->memory[VAR_2].size);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_4 += VAR_5->memory[VAR_2].size >> 2;
 }
 return 0;
}
