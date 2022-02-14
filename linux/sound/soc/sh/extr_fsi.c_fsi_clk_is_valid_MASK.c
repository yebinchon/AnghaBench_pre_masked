
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rate; scalar_t__ set_rate; } ;
struct fsi_priv {TYPE_1__ clock; } ;



__attribute__((used)) static int FUNC_0(struct fsi_priv *VAR_0)
{
 return VAR_0->clock.set_rate &&
  VAR_0->clock.rate;
}
