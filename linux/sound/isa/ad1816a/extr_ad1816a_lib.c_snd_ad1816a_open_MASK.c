
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1816a {unsigned int mode; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 unsigned int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct snd_ad1816a*,int ,int ,int) ;
 int FUNC_1 (struct snd_ad1816a*,int ,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_ad1816a *VAR_10, unsigned int VAR_11)
{
 unsigned long VAR_12;

 FUNC_2(&VAR_10->lock, VAR_12);

 if (VAR_10->mode & VAR_11) {
  FUNC_3(&VAR_10->lock, VAR_12);
  return -VAR_9;
 }

 switch ((VAR_11 &= VAR_4)) {
 case 129:
  FUNC_0(VAR_10, VAR_3,
   VAR_6, 0x00);
  FUNC_1(VAR_10, VAR_2,
   VAR_5, 0xffff);
  break;
 case 130:
  FUNC_0(VAR_10, VAR_3,
   VAR_1, 0x00);
  FUNC_1(VAR_10, VAR_2,
   VAR_0, 0xffff);
  break;
 case 128:
  FUNC_0(VAR_10, VAR_3,
   VAR_8, 0x00);
  FUNC_1(VAR_10, VAR_2,
   VAR_7, 0xffff);
 }
 VAR_10->mode |= VAR_11;

 FUNC_3(&VAR_10->lock, VAR_12);
 return 0;
}
