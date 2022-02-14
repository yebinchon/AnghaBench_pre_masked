
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct TYPE_3__ {int rate; int sr; int** divisors; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct snd_soc_component *VAR_2,
  int VAR_3, int VAR_4, int *VAR_5, int *VAR_6, int *VAR_7)
{
 int VAR_8 = -VAR_0;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); VAR_9++) {
  if (VAR_1[VAR_9].rate >= VAR_3) {
   *VAR_5 = VAR_1[VAR_9].sr;
   *VAR_6 = VAR_1[VAR_9].divisors[VAR_4][0];
   *VAR_7 = VAR_1[VAR_9].divisors[VAR_4][1];
   VAR_8 = 0;
   break;
  }
 }
 return VAR_8;
}
