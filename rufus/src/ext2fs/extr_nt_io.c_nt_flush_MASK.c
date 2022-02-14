
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* io_channel ;
typedef int errcode_t ;
struct TYPE_5__ {int handle; scalar_t__ written; scalar_t__ read_only; scalar_t__ private_data; } ;
typedef TYPE_1__* PNT_PRIVATE_DATA ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static errcode_t FUNC_3(io_channel VAR_2)
{
 PNT_PRIVATE_DATA VAR_3 = ((void*)0);

 FUNC_0(VAR_2, VAR_0);
 VAR_3 = (PNT_PRIVATE_DATA) VAR_2->private_data;
 FUNC_0(VAR_3, VAR_1);

 if(VAR_3->read_only)
  return 0;



 FUNC_1(VAR_3->handle);



 if (VAR_3->written)
  FUNC_2(VAR_3->handle, 0x83);

 return 0;
}
