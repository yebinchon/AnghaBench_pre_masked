
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {unsigned int mode; int open_mutex; int lock; } ;


 int FUNC_0 (struct snd_cs4231*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct snd_cs4231*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_cs4231*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct snd_cs4231 *VAR_7, unsigned int VAR_8)
{
 unsigned long VAR_9;

 FUNC_2(&VAR_7->open_mutex);
 if ((VAR_7->mode & VAR_8)) {
  FUNC_3(&VAR_7->open_mutex);
  return -VAR_5;
 }
 if (VAR_7->mode & VAR_1) {
  VAR_7->mode |= VAR_8;
  FUNC_3(&VAR_7->open_mutex);
  return 0;
 }

 FUNC_5(&VAR_7->lock, VAR_9);
 FUNC_4(VAR_7, VAR_0, VAR_2 |
         VAR_3 |
         VAR_4);
 FUNC_4(VAR_7, VAR_0, 0);
 FUNC_1(VAR_7, 0, FUNC_0(VAR_7, VAR_6));
 FUNC_1(VAR_7, 0, FUNC_0(VAR_7, VAR_6));

 FUNC_4(VAR_7, VAR_0, VAR_2 |
         VAR_3 |
         VAR_4);
 FUNC_4(VAR_7, VAR_0, 0);

 FUNC_6(&VAR_7->lock, VAR_9);

 VAR_7->mode = VAR_8;
 FUNC_3(&VAR_7->open_mutex);
 return 0;
}
