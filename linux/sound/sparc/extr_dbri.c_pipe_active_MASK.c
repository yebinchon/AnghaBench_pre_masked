
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_dbri {TYPE_1__* pipes; } ;
struct TYPE_2__ {int desc; } ;



__attribute__((used)) static inline int FUNC_0(struct snd_dbri *VAR_0, int VAR_1)
{
 return ((VAR_1 >= 0) && (VAR_0->pipes[VAR_1].desc != -1));
}
