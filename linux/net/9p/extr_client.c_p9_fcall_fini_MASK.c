
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fcall {int sdata; scalar_t__ cache; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct p9_fcall *VAR_0)
{



 if (FUNC_2(!VAR_0->sdata))
  return;

 if (VAR_0->cache)
  FUNC_1(VAR_0->cache, VAR_0->sdata);
 else
  FUNC_0(VAR_0->sdata);
}
