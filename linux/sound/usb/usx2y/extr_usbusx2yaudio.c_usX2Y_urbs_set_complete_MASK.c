
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usX2Ydev {struct snd_usX2Y_substream** subs; } ;
struct urb {void (* complete ) (struct urb*) ;} ;
struct snd_usX2Y_substream {struct urb** urb; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct usX2Ydev * VAR_1,
        void (*VAR_2)(struct urb *))
{
 int VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  struct snd_usX2Y_substream *VAR_5 = VAR_1->subs[VAR_3];
  if (((void*)0) != VAR_5)
   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    struct urb * VAR_6 = VAR_5->urb[VAR_4];
    if (((void*)0) != VAR_6)
     VAR_6->complete = VAR_2;
   }
 }
}
