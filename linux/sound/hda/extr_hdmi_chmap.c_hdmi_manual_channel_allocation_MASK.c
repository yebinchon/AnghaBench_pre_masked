
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; int spk_mask; int ca_index; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int FUNC_2(int VAR_1, unsigned char *VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  int VAR_6 = FUNC_1(VAR_2[VAR_3]);

  if (VAR_6) {
   VAR_5 |= VAR_6;
   VAR_4++;
  }
 }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if ((VAR_1 == VAR_0[VAR_3].channels ||
       VAR_4 == VAR_0[VAR_3].channels) &&
      (VAR_5 & VAR_0[VAR_3].spk_mask) ==
    VAR_0[VAR_3].spk_mask)
   return VAR_0[VAR_3].ca_index;
 }
 return -1;
}
