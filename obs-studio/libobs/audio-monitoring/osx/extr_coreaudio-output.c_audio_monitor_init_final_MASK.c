
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_monitor {int source; scalar_t__ ignore; } ;


 int FUNC_0 (int ,int ,struct audio_monitor*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct audio_monitor *VAR_1)
{
 if (VAR_1->ignore)
  return;

 FUNC_0(VAR_1->source,
           VAR_0, VAR_1);
}
