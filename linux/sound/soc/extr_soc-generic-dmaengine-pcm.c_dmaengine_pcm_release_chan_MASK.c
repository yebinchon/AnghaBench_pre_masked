
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmaengine_pcm {int flags; int * chan; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dmaengine_pcm *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = VAR_1; VAR_4 <= VAR_0;
      VAR_4++) {
  if (!VAR_3->chan[VAR_4])
   continue;
  FUNC_0(VAR_3->chan[VAR_4]);
  if (VAR_3->flags & VAR_2)
   break;
 }
}
