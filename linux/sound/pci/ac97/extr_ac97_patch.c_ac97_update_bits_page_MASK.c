
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int page_mutex; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct snd_ac97*,unsigned short) ;
 int FUNC_3 (struct snd_ac97*,unsigned short,unsigned short,unsigned short) ;

__attribute__((used)) static int FUNC_4(struct snd_ac97 *VAR_2, unsigned short VAR_3, unsigned short VAR_4, unsigned short VAR_5, unsigned short VAR_6)
{
 unsigned short VAR_7;
 int VAR_8;

 FUNC_0(&VAR_2->page_mutex);
 VAR_7 = FUNC_2(VAR_2, VAR_0) & VAR_1;
 FUNC_3(VAR_2, VAR_0, VAR_1, VAR_6);
 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_3(VAR_2, VAR_0, VAR_1, VAR_7);
 FUNC_1(&VAR_2->page_mutex);
 return VAR_8;
}
