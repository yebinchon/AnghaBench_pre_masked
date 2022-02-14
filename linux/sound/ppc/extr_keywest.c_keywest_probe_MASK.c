
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {struct i2c_client* client; } ;


 int FUNC_0 (struct i2c_client*,TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2,
    const struct i2c_device_id *VAR_3)
{
 VAR_1 = 1;

 if (!VAR_0->client)
  VAR_0->client = VAR_2;
 FUNC_0(VAR_2, VAR_0);
 return 0;
}
