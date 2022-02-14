
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {int card; struct prodigy192_spec* spec; } ;
struct prodigy192_spec {TYPE_1__* ak4114; } ;
struct TYPE_2__ {int check_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,unsigned char const*,unsigned char const*,struct snd_ice1712*,TYPE_1__**) ;

__attribute__((used)) static int FUNC_1(struct snd_ice1712 *VAR_3)
{
 static const unsigned char VAR_4[] = {
  129 | 130 | 132 | 131,



  135 | 136 ,
  128,
  133 | 134,
  0,
  0
 };
 static const unsigned char VAR_5[] = {
  0x41, 0x02, 0x2c, 0x00, 0x00
 };
 struct prodigy192_spec *VAR_6 = VAR_3->spec;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3->card,
     VAR_1,
     VAR_2,
     VAR_4, VAR_5,
     VAR_3, &VAR_6->ak4114);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_6->ak4114->check_flags = VAR_0;
 return 0;
}
