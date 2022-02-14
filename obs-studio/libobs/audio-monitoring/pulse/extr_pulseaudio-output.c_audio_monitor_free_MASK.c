
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_monitor {int device; scalar_t__ stream; int new_data; int resampler; scalar_t__ source; scalar_t__ ignore; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,struct audio_monitor*) ;
 int VAR_0 ;
 int FUNC_4 (struct audio_monitor*) ;
 int FUNC_5 () ;

__attribute__((used)) static inline void FUNC_6(struct audio_monitor *VAR_1)
{
 if (VAR_1->ignore)
  return;

 if (VAR_1->source)
  FUNC_3(
   VAR_1->source, VAR_0, VAR_1);

 FUNC_0(VAR_1->resampler);
 FUNC_2(&VAR_1->new_data);

 if (VAR_1->stream)
  FUNC_4(VAR_1);
 FUNC_5();

 FUNC_1(VAR_1->device);
}
