
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ua101_stream {TYPE_1__* buffers; } ;
struct ua101 {int dev; } ;
struct TYPE_2__ {int dma; int addr; int size; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ua101 *VAR_0, struct ua101_stream *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->buffers); ++VAR_2)
  FUNC_1(VAR_0->dev,
      VAR_1->buffers[VAR_2].size,
      VAR_1->buffers[VAR_2].addr,
      VAR_1->buffers[VAR_2].dma);
}
