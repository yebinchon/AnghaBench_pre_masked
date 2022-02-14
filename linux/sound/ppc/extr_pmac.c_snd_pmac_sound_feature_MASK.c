
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {int node; } ;
struct TYPE_2__ {int (* feature_call ) (int ,int ,int ,int) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct snd_pmac *VAR_2, int VAR_3)
{
 if (VAR_1.feature_call)
  VAR_1.feature_call(VAR_0, VAR_2->node, 0, VAR_3);
}
