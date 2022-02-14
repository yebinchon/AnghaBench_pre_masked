
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {char* name; int count; void* private_value; int put; int get; int info; int iface; scalar_t__ index; } ;
struct snd_akm4xxx {int type; int card; scalar_t__ idx_offset; } ;
typedef int knew ;


 void* FUNC_0 (int,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;







 int FUNC_1 (struct snd_kcontrol_new*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct snd_kcontrol_new*,struct snd_akm4xxx*) ;

__attribute__((used)) static int FUNC_4(struct snd_akm4xxx *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 struct snd_kcontrol_new VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_1(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.name = "Deemphasis";
  VAR_9.index = VAR_7 + VAR_5->idx_offset;
  VAR_9.iface = VAR_1;
  VAR_9.count = 1;
  VAR_9.info = VAR_3;
  VAR_9.get = VAR_2;
  VAR_9.put = VAR_4;
  switch (VAR_5->type) {
  case 131:
  case 130:
  case 128:

   VAR_9.private_value = FUNC_0(VAR_7, 3, 0, 0);
   break;
  case 129: {
   int VAR_10 = VAR_7 == 3 ? 6 : (2 - VAR_7) * 2;

   VAR_9.private_value = FUNC_0(0, 8, VAR_10, 0);
   break;
  }
  case 134:
  case 133:
   VAR_9.private_value = FUNC_0(VAR_7, 3, 0, 0);
   break;
  case 132:
   VAR_9.private_value = FUNC_0(VAR_7, 1, 1, 0);
   break;
  default:
   return -VAR_0;
  }
  VAR_8 = FUNC_2(VAR_5->card, FUNC_3(&VAR_9, VAR_5));
  if (VAR_8 < 0)
   return VAR_8;
 }
 return 0;
}
