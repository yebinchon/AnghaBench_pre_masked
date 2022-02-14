
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {int mce_bit; int lock; int port; } ;


 int FUNC_0 (struct snd_cs4231*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct snd_cs4231*,int ) ;
 int FUNC_2 (struct snd_cs4231*,int,int ) ;
 int FUNC_3 (struct snd_cs4231*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct snd_cs4231 *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_5(&VAR_3->lock, VAR_4);
 FUNC_3(VAR_3);




 VAR_3->mce_bit |= VAR_1;
 VAR_5 = FUNC_1(VAR_3, FUNC_0(VAR_3, VAR_2));
 if (VAR_5 == 0x80)
  FUNC_4("mce_up [%p]: serious init problem - "
       "codec still busy\n",
       VAR_3->port);
 if (!(VAR_5 & VAR_1))
  FUNC_2(VAR_3, VAR_3->mce_bit | (VAR_5 & 0x1f),
    FUNC_0(VAR_3, VAR_2));
 FUNC_6(&VAR_3->lock, VAR_4);
}
