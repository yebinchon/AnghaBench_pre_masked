
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_dice {int unit; } ;
struct fw_iso_resources {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct TYPE_2__ {int max_speed; } ;


 int FUNC_0 (struct amdtp_stream*,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_1 (struct amdtp_stream*,unsigned int,unsigned int) ;
 int FUNC_2 (struct amdtp_stream*) ;
 int FUNC_3 (struct fw_iso_resources*,int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_dice *VAR_0, struct amdtp_stream *VAR_1,
     struct fw_iso_resources *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4, unsigned int VAR_5)
{
 bool VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 VAR_6 = VAR_3 > 96000;
 if (VAR_6) {
  VAR_3 /= 2;
  VAR_4 *= 2;
 }

 VAR_8 = FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5,
      VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_6) {
  VAR_4 /= 2;

  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   FUNC_1(VAR_1, VAR_7, VAR_7 * 2);
   FUNC_1(VAR_1, VAR_7 + VAR_4,
           VAR_7 * 2 + 1);
  }
 }

 return FUNC_3(VAR_2,
    FUNC_2(VAR_1),
    FUNC_4(VAR_0->unit)->max_speed);
}
