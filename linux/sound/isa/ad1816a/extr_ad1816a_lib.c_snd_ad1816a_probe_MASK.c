
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1816a {int lock; int hardware; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_ad1816a*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_ad1816a *VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(&VAR_5->lock, VAR_6);

 switch (VAR_5->version = FUNC_0(VAR_5, VAR_4)) {
 case 0:
  VAR_5->hardware = VAR_0;
  break;
 case 1:
  VAR_5->hardware = VAR_2;
  break;
 case 3:
  VAR_5->hardware = VAR_1;
  break;
 default:
  VAR_5->hardware = VAR_3;
 }

 FUNC_2(&VAR_5->lock, VAR_6);
 return 0;
}
