
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {unsigned int mode; int* image; int open_mutex; int lock; } ;


 int FUNC_0 (struct snd_cs4231*,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct snd_cs4231*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_cs4231*,int) ;
 int FUNC_5 (struct snd_cs4231*) ;
 int FUNC_6 (struct snd_cs4231*) ;
 int FUNC_7 (struct snd_cs4231*,size_t,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct snd_cs4231 *VAR_8, unsigned int VAR_9)
{
 unsigned long VAR_10;

 FUNC_2(&VAR_8->open_mutex);
 VAR_8->mode &= ~VAR_9;
 if (VAR_8->mode & VAR_2) {
  FUNC_3(&VAR_8->open_mutex);
  return;
 }
 FUNC_4(VAR_8, 1);


 FUNC_8(&VAR_8->lock, VAR_10);
 FUNC_7(VAR_8, VAR_1, 0);
 FUNC_1(VAR_8, 0, FUNC_0(VAR_8, VAR_7));
 FUNC_1(VAR_8, 0, FUNC_0(VAR_8, VAR_7));



 if (VAR_8->image[VAR_0] &
     (VAR_3 | VAR_4 |
      VAR_5 | VAR_6)) {
  FUNC_9(&VAR_8->lock, VAR_10);
  FUNC_6(VAR_8);
  FUNC_8(&VAR_8->lock, VAR_10);
  VAR_8->image[VAR_0] &=
   ~(VAR_3 | VAR_4 |
     VAR_5 | VAR_6);
  FUNC_7(VAR_8, VAR_0,
    VAR_8->image[VAR_0]);
  FUNC_9(&VAR_8->lock, VAR_10);
  FUNC_5(VAR_8);
  FUNC_8(&VAR_8->lock, VAR_10);
 }


 FUNC_7(VAR_8, VAR_1, 0);
 FUNC_1(VAR_8, 0, FUNC_0(VAR_8, VAR_7));
 FUNC_1(VAR_8, 0, FUNC_0(VAR_8, VAR_7));
 FUNC_9(&VAR_8->lock, VAR_10);

 FUNC_4(VAR_8, 0);

 VAR_8->mode = 0;
 FUNC_3(&VAR_8->open_mutex);
}
