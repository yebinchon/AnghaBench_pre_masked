
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usX2Ydev {int prepare_wait_queue; int * prepare_subs; struct snd_usX2Y_substream** subs; } ;
struct urb {scalar_t__ start_frame; struct snd_usX2Y_substream* status; } ;
struct snd_usX2Y_substream {struct urb** urb; int pcm_substream; int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,struct snd_usX2Y_substream*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct usX2Ydev *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  struct snd_usX2Y_substream *VAR_6 = VAR_3->subs[VAR_4];
  if (VAR_6) {
   FUNC_3("%i %p state=%i\n", VAR_4, VAR_6, FUNC_0(&VAR_6->state));
   FUNC_1(&VAR_6->state, VAR_2);
  }
 }
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  struct snd_usX2Y_substream *VAR_7 = VAR_3->subs[VAR_4];
  if (VAR_7) {
   if (FUNC_0(&VAR_7->state) >= VAR_1)
    FUNC_2(VAR_7->pcm_substream);
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    struct urb *VAR_8 = VAR_7->urb[VAR_5];
    if (((void*)0) != VAR_8)
     FUNC_3("%i status=%i start_frame=%i\n",
          VAR_5, VAR_8->status, VAR_8->start_frame);
   }
  }
 }
 VAR_3->prepare_subs = ((void*)0);
 FUNC_4(&VAR_3->prepare_wait_queue);
}
