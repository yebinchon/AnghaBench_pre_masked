
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct cygnus_aio_port {TYPE_1__* cygaud; int portnum; } ;
struct TYPE_2__ {scalar_t__ audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 struct cygnus_aio_port* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_14)
{
 struct cygnus_aio_port *VAR_15;
 u32 VAR_16;

 VAR_15 = FUNC_1(VAR_14);


 VAR_16 = FUNC_0(VAR_15->portnum);

 if (VAR_14->stream == VAR_13) {

  FUNC_2(VAR_16, VAR_15->cygaud->audio + VAR_3);
  FUNC_2(VAR_16, VAR_15->cygaud->audio + VAR_5);
  FUNC_2(VAR_16, VAR_15->cygaud->audio + VAR_9);

  FUNC_2(VAR_16, VAR_15->cygaud->audio + VAR_2);
  FUNC_2(VAR_16, VAR_15->cygaud->audio + VAR_4);
  FUNC_2(VAR_16, VAR_15->cygaud->audio + VAR_8);

  FUNC_2(VAR_1,
   VAR_15->cygaud->audio + VAR_12);
 } else {
  FUNC_2(VAR_16, VAR_15->cygaud->audio + VAR_7);
  FUNC_2(VAR_16, VAR_15->cygaud->audio + VAR_11);
  FUNC_2(VAR_16, VAR_15->cygaud->audio + VAR_6);
  FUNC_2(VAR_16, VAR_15->cygaud->audio + VAR_10);

  FUNC_2(VAR_0,
   VAR_15->cygaud->audio + VAR_12);
 }

}
