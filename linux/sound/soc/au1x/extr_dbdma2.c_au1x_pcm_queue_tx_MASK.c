
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1xpsc_audio_dmadata {scalar_t__ q_period; scalar_t__ periods; int dma_area_s; int dma_area; scalar_t__ period_bytes; int ddma_chan; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct au1xpsc_audio_dmadata *VAR_1)
{
 FUNC_0(VAR_1->ddma_chan, VAR_1->dma_area,
    VAR_1->period_bytes, VAR_0);


 ++VAR_1->q_period;
 VAR_1->dma_area += VAR_1->period_bytes;
 if (VAR_1->q_period >= VAR_1->periods) {
  VAR_1->q_period = 0;
  VAR_1->dma_area = VAR_1->dma_area_s;
 }
}
