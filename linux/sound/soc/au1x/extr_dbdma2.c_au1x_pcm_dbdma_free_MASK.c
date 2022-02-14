
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1xpsc_audio_dmadata {scalar_t__ msbits; scalar_t__ ddma_chan; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct au1xpsc_audio_dmadata *VAR_0)
{
 if (VAR_0->ddma_chan) {
  FUNC_2(VAR_0->ddma_chan);
  FUNC_1(VAR_0->ddma_chan);
  FUNC_0(VAR_0->ddma_chan);
  VAR_0->ddma_chan = 0;
  VAR_0->msbits = 0;
 }
}
