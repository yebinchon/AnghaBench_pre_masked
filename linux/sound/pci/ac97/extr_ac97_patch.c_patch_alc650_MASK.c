
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev_flags; } ;
struct snd_ac97 {int id; int subsystem_vendor; int subsystem_device; TYPE_1__ spec; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_ac97*,int ) ;
 int FUNC_1 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 * VAR_8)
{
 unsigned short VAR_9;

 VAR_8->build_ops = &VAR_7;


 VAR_9 = FUNC_0(VAR_8, VAR_5) & 0x3f;
 if (VAR_9 < 3)
  VAR_8->id = 0x414c4720;
 else if (VAR_9 < 0x10)
  VAR_8->id = 0x414c4721;
 else if (VAR_9 < 0x20)
  VAR_8->id = 0x414c4722;
 else if (VAR_9 < 0x30)
  VAR_8->id = 0x414c4723;



 VAR_8->spec.dev_flags = (VAR_8->id == 0x414c4722 ||
    VAR_8->id == 0x414c4723);


 FUNC_1(VAR_8, VAR_2,
  FUNC_0(VAR_8, VAR_2) | 0x8000);


 VAR_9 = FUNC_0(VAR_8, VAR_0);

 if (VAR_8->spec.dev_flags &&

     ! (VAR_8->subsystem_vendor == 0x1043 &&
        VAR_8->subsystem_device == 0x1103))
  VAR_9 |= 0x03;
 else
  VAR_9 &= ~0x03;
 FUNC_1(VAR_8, VAR_0, VAR_9);






 FUNC_1(VAR_8, VAR_4, 0);



 FUNC_1(VAR_8, VAR_1,
        FUNC_0(VAR_8, VAR_1) | 0x01);
 FUNC_1(VAR_8, VAR_2,
        (FUNC_0(VAR_8, VAR_2) | 0x100) & ~0x10);


 FUNC_1(VAR_8, VAR_6, 0x0808);
 FUNC_1(VAR_8, VAR_3, 0x0808);
 return 0;
}
