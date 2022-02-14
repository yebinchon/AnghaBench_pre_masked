
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usX2Y_substream {int * tmpbuf; TYPE_1__* usX2Y; scalar_t__ urb; int endpoint; } ;
struct TYPE_2__ {struct snd_usX2Y_substream** subs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct snd_usX2Y_substream *VAR_2)
{
 int VAR_3;
 FUNC_1("usX2Y_urbs_release() %i\n", VAR_2->endpoint);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_2->urb + VAR_3,
      VAR_2 != VAR_2->usX2Y->subs[VAR_1]);

 FUNC_0(VAR_2->tmpbuf);
 VAR_2->tmpbuf = ((void*)0);
}
