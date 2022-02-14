
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_monitor {int stream; int source; scalar_t__ ignore; } ;


 int FUNC_0 (int ,int ,struct audio_monitor*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,void*) ;

__attribute__((used)) static void FUNC_3(struct audio_monitor *VAR_3)
{
 if (VAR_3->ignore)
  return;

 FUNC_0(VAR_3->source,
           VAR_0, VAR_3);

 FUNC_2(VAR_3->stream, VAR_1,
      (void *)VAR_3);

 FUNC_1(VAR_3->stream, VAR_2,
       (void *)VAR_3);
}
