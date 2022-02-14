
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct TYPE_2__ {struct i2c_client* client; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct i2c_client *VAR_1)
{
 if (! VAR_0)
  return 0;
 if (VAR_1 == VAR_0->client)
  VAR_0->client = ((void*)0);

 return 0;
}
