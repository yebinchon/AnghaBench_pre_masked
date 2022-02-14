
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int * dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int,int) ;
 TYPE_1__ VAR_14 ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_15)
{
 int VAR_16;

 VAR_14 = &VAR_15->dev;

 VAR_16 = FUNC_16(&VAR_14);
 if (VAR_16) {
  FUNC_10(&VAR_15->dev, "snd_soc_register_card failed (%d)\n",
   VAR_16);
  return VAR_16;
 }

 if (FUNC_14() || FUNC_15()) {
  FUNC_12(VAR_13,
   VAR_7,
   FUNC_5(VAR_12) |
   FUNC_4(1) |
   FUNC_3(0xfc));
  FUNC_12(VAR_12,
   VAR_7 |
   VAR_9 |
   FUNC_9(VAR_13) |
   VAR_8 |
   FUNC_8(VAR_13) |
   VAR_6 |
   FUNC_7(VAR_13) |
   VAR_5 |
   FUNC_6(VAR_13),
   FUNC_5(VAR_13));
 } else if (FUNC_13()) {
  FUNC_11(VAR_10,
   VAR_2 |
   VAR_4 |
   VAR_3 |
   VAR_1 |
   VAR_0 |
   FUNC_2(VAR_11) |
   FUNC_0(VAR_11) |
   FUNC_1(VAR_11)
  );
  FUNC_11(VAR_11,
   VAR_2 |
   FUNC_1(VAR_10)
  );
 }

 return VAR_16;
}
