
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {int* image; int lock; int port; } ;


 int FUNC_0 (struct snd_cs4231*,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct snd_cs4231*,int ) ;
 int FUNC_2 (struct snd_cs4231*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct snd_cs4231*,size_t) ;
 int FUNC_7 (struct snd_cs4231*) ;
 int FUNC_8 (struct snd_cs4231*) ;
 int FUNC_9 (struct snd_cs4231*,int,int) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct snd_cs4231 *VAR_11)
{
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 unsigned char *VAR_16;

 for (VAR_13 = 0; VAR_13 < 50; VAR_13++) {
  FUNC_3();
  if (FUNC_1(VAR_11, FUNC_0(VAR_11, VAR_9)) & VAR_3)
   FUNC_5(2);
  else {
   FUNC_11(&VAR_11->lock, VAR_12);
   FUNC_9(VAR_11, VAR_4, VAR_5);
   VAR_14 = FUNC_6(VAR_11, VAR_4) & 0x0f;
   VAR_15 = FUNC_6(VAR_11, VAR_7);
   FUNC_12(&VAR_11->lock, VAR_12);
   if (VAR_14 == 0x0a)
    break;
  }
 }
 FUNC_10("cs4231: port = %p, id = 0x%x\n", VAR_11->port, VAR_14);
 if (VAR_14 != 0x0a)
  return -VAR_8;

 FUNC_11(&VAR_11->lock, VAR_12);


 FUNC_1(VAR_11, FUNC_0(VAR_11, VAR_10));
 FUNC_2(VAR_11, 0, FUNC_0(VAR_11, VAR_10));
 FUNC_3();

 FUNC_12(&VAR_11->lock, VAR_12);

 VAR_11->image[VAR_4] = VAR_5;
 VAR_11->image[VAR_2] =
  VAR_11->image[VAR_2] & ~VAR_6;
 VAR_11->image[VAR_0] = 0x80;
 VAR_11->image[VAR_1] = 0x01;
 if (VAR_15 & 0x20)
  VAR_11->image[VAR_1] |= 0x02;

 VAR_16 = (unsigned char *) &VAR_11->image;

 FUNC_7(VAR_11);

 FUNC_11(&VAR_11->lock, VAR_12);

 for (VAR_13 = 0; VAR_13 < 32; VAR_13++)
  FUNC_9(VAR_11, VAR_13, *VAR_16++);

 FUNC_12(&VAR_11->lock, VAR_12);

 FUNC_8(VAR_11);

 FUNC_7(VAR_11);

 FUNC_4(2);

 return 0;
}
