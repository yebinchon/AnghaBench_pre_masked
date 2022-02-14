
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {unsigned int mode; int hardware; int* image; int open_mutex; int reg_lock; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_wss*) ;
 int FUNC_4 (struct snd_wss*) ;
 int FUNC_5 (struct snd_wss*,size_t,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct snd_wss*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct snd_wss *VAR_11, unsigned int VAR_12)
{
 unsigned long VAR_13;

 FUNC_1(&VAR_11->open_mutex);
 VAR_11->mode &= ~VAR_12;
 if (VAR_11->mode & VAR_10) {
  FUNC_2(&VAR_11->open_mutex);
  return;
 }

 FUNC_6(&VAR_11->reg_lock, VAR_13);
 if (!(VAR_11->hardware & VAR_9))
  FUNC_5(VAR_11, VAR_2, 0);
 FUNC_8(VAR_11, FUNC_0(VAR_8), 0);
 FUNC_8(VAR_11, FUNC_0(VAR_8), 0);
 VAR_11->image[VAR_3] &= ~VAR_1;
 FUNC_5(VAR_11, VAR_3, VAR_11->image[VAR_3]);



 if (VAR_11->image[VAR_0] & (VAR_4 | VAR_5 |
            VAR_6 | VAR_7)) {
  FUNC_7(&VAR_11->reg_lock, VAR_13);
  FUNC_4(VAR_11);
  FUNC_6(&VAR_11->reg_lock, VAR_13);
  VAR_11->image[VAR_0] &= ~(VAR_4 | VAR_5 |
           VAR_6 | VAR_7);
  FUNC_5(VAR_11, VAR_0,
       VAR_11->image[VAR_0]);
  FUNC_7(&VAR_11->reg_lock, VAR_13);
  FUNC_3(VAR_11);
  FUNC_6(&VAR_11->reg_lock, VAR_13);
 }


 if (!(VAR_11->hardware & VAR_9))
  FUNC_5(VAR_11, VAR_2, 0);
 FUNC_8(VAR_11, FUNC_0(VAR_8), 0);
 FUNC_8(VAR_11, FUNC_0(VAR_8), 0);
 FUNC_7(&VAR_11->reg_lock, VAR_13);

 VAR_11->mode = 0;
 FUNC_2(&VAR_11->open_mutex);
}
