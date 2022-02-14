
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_als300 {int revision; int reg_lock; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct snd_als300*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_als300 *VAR_10)
{
 unsigned long VAR_11;
 u32 VAR_12;

 FUNC_3(&VAR_10->reg_lock, VAR_11);
 VAR_10->revision = (FUNC_0(VAR_10->port, VAR_3) >> 16)
        & 0x0000000F;

 VAR_12 = FUNC_0(VAR_10->port, VAR_1);
 FUNC_1(VAR_10->port, VAR_1,
      (VAR_12 | VAR_0)
      & ~VAR_9);


 FUNC_2(VAR_10, VAR_2);



 VAR_12 = FUNC_0(VAR_10->port, VAR_3);
 FUNC_1(VAR_10->port, VAR_3,
   VAR_12 | VAR_8 | VAR_4);


 FUNC_1(VAR_10->port, VAR_5, 0);


 VAR_12 = FUNC_0(VAR_10->port, VAR_6);
 FUNC_1(VAR_10->port, VAR_6,
   VAR_12 & ~VAR_7);
 FUNC_4(&VAR_10->reg_lock, VAR_11);
}
