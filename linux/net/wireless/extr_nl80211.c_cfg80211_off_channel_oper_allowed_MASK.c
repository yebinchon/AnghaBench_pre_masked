
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chan; } ;
struct wireless_dev {int wiphy; TYPE_2__ chandef; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct wireless_dev *VAR_1)
{
 FUNC_0(VAR_1);

 if (!FUNC_1(VAR_1))
  return 1;

 if (!(VAR_1->chandef.chan->flags & VAR_0))
  return 1;

 return FUNC_2(VAR_1->wiphy);
}
