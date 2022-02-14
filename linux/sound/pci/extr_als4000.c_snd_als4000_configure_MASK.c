
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_sb {int reg_lock; int mixer_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct snd_sb*,int ) ;
 int FUNC_1 (struct snd_sb*,int ,int) ;
 int FUNC_2 (struct snd_sb*,int) ;
 int FUNC_3 (struct snd_sb*,int,int) ;
 int FUNC_4 (struct snd_sb*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct snd_sb *VAR_9)
{
 u8 VAR_10;
 int VAR_11;


 FUNC_5(&VAR_9->mixer_lock);
 VAR_10 = FUNC_0(VAR_9, VAR_1);
 FUNC_1(VAR_9, VAR_1,
    VAR_10|VAR_0);


 FUNC_4(VAR_9, VAR_8, VAR_7);
 FUNC_1(VAR_9, VAR_1,
     VAR_10 & ~VAR_0);
 FUNC_6(&VAR_9->mixer_lock);

 FUNC_5(&VAR_9->reg_lock);

 FUNC_3(VAR_9, VAR_3,
     VAR_2);


 for (VAR_11 = VAR_4; VAR_11 <= VAR_5; ++VAR_11)
  FUNC_3(VAR_9, VAR_11, 0);

 FUNC_3(VAR_9, VAR_6,
  (FUNC_2(VAR_9, VAR_6) & ~0x07) | 0x04);
 FUNC_6(&VAR_9->reg_lock);
}
