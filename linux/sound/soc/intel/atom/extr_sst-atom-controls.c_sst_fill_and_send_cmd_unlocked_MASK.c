
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sst_data {int byte_stream; } ;
struct TYPE_4__ {int dev; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* send_byte_stream ) (int ,int ) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct sst_data*,int ,int ,int ,int ,int ,void*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sst_data *VAR_1,
     u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5,
     void *VAR_6, u16 VAR_7)
{
 int VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_1, VAR_2,
    VAR_3, VAR_4, VAR_5, VAR_7, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 return VAR_0->ops->send_byte_stream(VAR_0->dev, VAR_1->byte_stream);
}
