
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_dai_stream {scalar_t__ substream; } ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(struct rsnd_dai_stream *VAR_0)
{

 if (VAR_0->substream)
  return FUNC_0(VAR_0->substream);

 return 0;
}
