
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_bebob_meter_spec {int num; scalar_t__ labels; } ;
struct snd_bebob {TYPE_1__* spec; } ;
struct TYPE_2__ {struct snd_bebob_meter_spec* meter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_bebob*,void*,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct snd_bebob *VAR_2, u32 *VAR_3, unsigned int VAR_4)
{
 const struct snd_bebob_meter_spec *VAR_5 = VAR_2->spec->meter;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = VAR_5->num * 2;
 if (VAR_4 < VAR_7 * sizeof(u32))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_2, (void *)VAR_3, VAR_4);
 if (VAR_8 < 0)
  goto end;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_0(&VAR_3[VAR_6]);


 if (VAR_5->labels == VAR_1) {
  FUNC_2(VAR_3[4], VAR_3[6]);
  FUNC_2(VAR_3[5], VAR_3[7]);
 }
end:
 return VAR_8;
}
