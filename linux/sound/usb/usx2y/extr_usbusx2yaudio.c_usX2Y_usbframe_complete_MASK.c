
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct snd_usX2Y_substream {struct urb* completed_urb; int state; struct urb** urb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_2 (struct snd_usX2Y_substream*) ;
 int FUNC_3 (struct snd_usX2Y_substream*,struct urb*,struct urb*) ;
 int FUNC_4 (struct snd_usX2Y_substream*,struct urb*) ;
 int FUNC_5 (struct snd_usX2Y_substream*,struct urb*,int) ;

__attribute__((used)) static inline int FUNC_6(struct snd_usX2Y_substream *VAR_3,
       struct snd_usX2Y_substream *VAR_4,
       int VAR_5)
{
 int VAR_6, VAR_7;
 struct urb *VAR_8 = VAR_4->completed_urb;

 VAR_7 = FUNC_1(&VAR_4->state);
 if (((void*)0) != VAR_8) {
  if (VAR_7 == VAR_2)
   FUNC_4(VAR_4, VAR_8);
  else if (VAR_7 >= VAR_1)
   FUNC_0(&VAR_4->state);
 } else {
  switch (VAR_7) {
  case 129:
   VAR_8 = VAR_4->urb[0];
   FUNC_0(&VAR_4->state);
   break;
  case 128:
   VAR_8 = VAR_4->urb[1];
   FUNC_0(&VAR_4->state);
   break;
  }
 }
 if (VAR_8) {
  if ((VAR_6 = FUNC_3(VAR_4, VAR_3->completed_urb, VAR_8)) ||
      (VAR_6 = FUNC_5(VAR_4, VAR_8, VAR_5))) {
   return VAR_6;
  }
 }

 VAR_4->completed_urb = ((void*)0);

 VAR_7 = FUNC_1(&VAR_3->state);
 if (VAR_7 >= VAR_0) {
  if (VAR_7 == VAR_2) {
   if ((VAR_6 = FUNC_2(VAR_3)))
    return VAR_6;
  } else if (VAR_7 >= VAR_1)
   FUNC_0(&VAR_3->state);
  if ((VAR_6 = FUNC_5(VAR_3, VAR_3->completed_urb, VAR_5)))
   return VAR_6;
 }
 VAR_3->completed_urb = ((void*)0);
 return 0;
}
