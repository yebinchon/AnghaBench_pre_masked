
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_4__ {scalar_t__ rate; int rate_val; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct snd_soc_dai*,int ,scalar_t__) ;
 int FUNC_2 (struct snd_soc_dai*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2, u32 VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_3 == VAR_0[VAR_4].rate) {
   FUNC_1(VAR_2,
     VAR_0[VAR_4].rate_val, VAR_3);
   break;
  }
 }


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_3 == VAR_1[VAR_4].rate) {
   FUNC_2(VAR_2,
     VAR_1[VAR_4].rate_val, VAR_3);
   break;
  }
 }

 return 0;
}
