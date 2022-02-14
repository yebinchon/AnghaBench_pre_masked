
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_urb {int submitted; int instance; scalar_t__ buffer; struct hiface_chip* chip; } ;
struct hiface_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ,void*,int ,void (*) (struct urb*),struct pcm_urb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct pcm_urb *VAR_4,
          struct hiface_chip *VAR_5,
          unsigned int VAR_6,
          void (*VAR_7)(struct urb *))
{
 VAR_4->chip = VAR_5;
 FUNC_3(&VAR_4->instance);

 VAR_4->buffer = FUNC_1(VAR_3, VAR_2);
 if (!VAR_4->buffer)
  return -VAR_1;

 FUNC_2(&VAR_4->instance, VAR_5->dev,
     FUNC_4(VAR_5->dev, VAR_6), (void *)VAR_4->buffer,
     VAR_3, VAR_7, VAR_4);
 if (FUNC_5(&VAR_4->instance))
  return -VAR_0;
 FUNC_0(&VAR_4->submitted);

 return 0;
}
