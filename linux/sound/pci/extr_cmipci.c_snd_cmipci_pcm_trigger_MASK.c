
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmipci_pcm {unsigned int ch; int running; int is_dac; int needs_silencing; } ;
struct cmipci {unsigned int ctrl; int reg_lock; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct cmipci*,int ,unsigned int) ;
 int FUNC_2 (struct cmipci*,int ,unsigned int) ;
 int FUNC_3 (struct cmipci*,int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cmipci *VAR_7, struct cmipci_pcm *VAR_8,
      int VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_10 = VAR_0 << VAR_8->ch;
 VAR_11 = VAR_1 << VAR_8->ch;
 VAR_12 = VAR_5 << VAR_8->ch;
 VAR_13 = VAR_2 << VAR_8->ch;

 FUNC_4(&VAR_7->reg_lock);
 switch (VAR_9) {
 case 130:
  VAR_8->running = 1;

  FUNC_2(VAR_7, VAR_4, VAR_10);
  VAR_7->ctrl |= VAR_11;

  FUNC_3(VAR_7, VAR_3, VAR_7->ctrl);
  FUNC_0(VAR_7->card->dev, "functrl0 = %08x\n", VAR_7->ctrl);
  break;
 case 129:
  VAR_8->running = 0;

  FUNC_1(VAR_7, VAR_4, VAR_10);

  VAR_7->ctrl &= ~VAR_11;
  FUNC_3(VAR_7, VAR_3, VAR_7->ctrl | VAR_12);
  FUNC_3(VAR_7, VAR_3, VAR_7->ctrl & ~VAR_12);
  VAR_8->needs_silencing = VAR_8->is_dac;
  break;
 case 133:
 case 128:
  VAR_7->ctrl |= VAR_13;
  FUNC_3(VAR_7, VAR_3, VAR_7->ctrl);
  break;
 case 132:
 case 131:
  VAR_7->ctrl &= ~VAR_13;
  FUNC_3(VAR_7, VAR_3, VAR_7->ctrl);
  break;
 default:
  VAR_14 = -VAR_6;
  break;
 }
 FUNC_5(&VAR_7->reg_lock);
 return VAR_14;
}
