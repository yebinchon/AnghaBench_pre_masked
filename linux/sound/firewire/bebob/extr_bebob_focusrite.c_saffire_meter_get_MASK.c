
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct snd_bebob_meter_spec {scalar_t__ labels; int num; } ;
struct snd_bebob {TYPE_1__* spec; } ;
struct TYPE_2__ {struct snd_bebob_meter_spec* meter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_bebob*,int ,int *,unsigned int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct snd_bebob *VAR_4, u32 *VAR_5, unsigned int VAR_6)
{
 const struct snd_bebob_meter_spec *VAR_7 = VAR_4->spec->meter;
 unsigned int VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (VAR_7->labels == VAR_3)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;

 VAR_8 = VAR_7->num * 2;
 if (VAR_6 < VAR_8 * sizeof(u32))
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_4, VAR_9, VAR_5, VAR_6);
 if (VAR_10 >= 0 && VAR_7->labels == VAR_3) {
  FUNC_1(VAR_5[1], VAR_5[3]);
  FUNC_1(VAR_5[2], VAR_5[3]);
  FUNC_1(VAR_5[3], VAR_5[4]);

  FUNC_1(VAR_5[7], VAR_5[10]);
  FUNC_1(VAR_5[8], VAR_5[10]);
  FUNC_1(VAR_5[9], VAR_5[11]);
  FUNC_1(VAR_5[11], VAR_5[12]);

  FUNC_1(VAR_5[15], VAR_5[16]);
 }

 return VAR_10;
}
