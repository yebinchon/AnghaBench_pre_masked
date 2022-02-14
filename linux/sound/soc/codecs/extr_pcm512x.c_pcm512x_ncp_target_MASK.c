
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm512x_priv {int dummy; } ;


 unsigned long FUNC_0 (struct pcm512x_priv*,int) ;

__attribute__((used)) static unsigned long FUNC_1(struct pcm512x_priv *VAR_0,
     unsigned long VAR_1)
{




 if (VAR_1 <= 6144000)
  return 1536000;




 return FUNC_0(VAR_0, 1536000);
}
