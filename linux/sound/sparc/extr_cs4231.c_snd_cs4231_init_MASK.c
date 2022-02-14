
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {int* image; int lock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (struct snd_cs4231*) ;
 int FUNC_1 (struct snd_cs4231*) ;
 int FUNC_2 (struct snd_cs4231*,size_t,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct snd_cs4231 *VAR_11)
{
 unsigned long VAR_12;

 FUNC_0(VAR_11);




 FUNC_1(VAR_11);
 FUNC_4(&VAR_11->lock, VAR_12);
 VAR_11->image[VAR_4] &= ~(VAR_5 |
         VAR_6 |
         VAR_8 |
         VAR_9 |
         VAR_3);
 VAR_11->image[VAR_4] |= VAR_2;
 FUNC_2(VAR_11, VAR_4, VAR_11->image[VAR_4]);
 FUNC_5(&VAR_11->lock, VAR_12);
 FUNC_0(VAR_11);





 FUNC_1(VAR_11);
 FUNC_4(&VAR_11->lock, VAR_12);
 FUNC_2(VAR_11, VAR_0,
   VAR_11->image[VAR_0]);
 FUNC_5(&VAR_11->lock, VAR_12);
 FUNC_0(VAR_11);






 FUNC_4(&VAR_11->lock, VAR_12);
 FUNC_2(VAR_11, VAR_1,
   VAR_11->image[VAR_1]);
 FUNC_5(&VAR_11->lock, VAR_12);

 FUNC_1(VAR_11);
 FUNC_4(&VAR_11->lock, VAR_12);
 FUNC_2(VAR_11, VAR_7,
   VAR_11->image[VAR_7]);
 FUNC_5(&VAR_11->lock, VAR_12);
 FUNC_0(VAR_11);





 FUNC_1(VAR_11);
 FUNC_4(&VAR_11->lock, VAR_12);
 FUNC_2(VAR_11, VAR_10, VAR_11->image[VAR_10]);
 FUNC_5(&VAR_11->lock, VAR_12);
 FUNC_0(VAR_11);




}
