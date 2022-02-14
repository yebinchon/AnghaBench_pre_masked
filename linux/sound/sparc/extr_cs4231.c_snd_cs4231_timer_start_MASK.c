
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {unsigned int sticks; } ;
struct snd_cs4231 {int* image; int lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct snd_cs4231*,size_t,int) ;
 struct snd_cs4231* FUNC_1 (struct snd_timer*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_timer *VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;
 struct snd_cs4231 *VAR_7 = FUNC_1(VAR_4);

 FUNC_2(&VAR_7->lock, VAR_5);
 VAR_6 = VAR_4->sticks;
 if ((VAR_7->image[VAR_0] & VAR_1) == 0 ||
     (unsigned char)(VAR_6 >> 8) != VAR_7->image[VAR_2] ||
     (unsigned char)VAR_6 != VAR_7->image[VAR_3]) {
  FUNC_0(VAR_7, VAR_2,
          VAR_7->image[VAR_2] =
          (unsigned char) (VAR_6 >> 8));
  FUNC_0(VAR_7, VAR_3,
          VAR_7->image[VAR_3] =
          (unsigned char) VAR_6);
  FUNC_0(VAR_7, VAR_0,
          VAR_7->image[VAR_0] |
     VAR_1);
 }
 FUNC_3(&VAR_7->lock, VAR_5);

 return 0;
}
