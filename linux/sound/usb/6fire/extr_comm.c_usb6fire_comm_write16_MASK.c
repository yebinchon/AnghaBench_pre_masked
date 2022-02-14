
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct comm_runtime {TYPE_1__* chip; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct comm_runtime *VAR_2, u8 VAR_3,
  u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 u8 *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_1(13, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_2(VAR_7, 0x00, VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_8 = FUNC_3(VAR_7, VAR_2->chip->dev);

 FUNC_0(VAR_7);
 return VAR_8;
}
