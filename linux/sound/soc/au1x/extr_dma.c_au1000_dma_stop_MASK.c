
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_stream {int dma; scalar_t__ buffer; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct audio_stream *VAR_0)
{
 if (VAR_0->buffer)
  FUNC_0(VAR_0->dma);
}
