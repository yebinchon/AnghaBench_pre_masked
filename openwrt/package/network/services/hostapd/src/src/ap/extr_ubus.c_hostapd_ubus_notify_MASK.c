
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int has_subscribers; } ;
struct TYPE_6__ {TYPE_2__ obj; } ;
struct hostapd_data {TYPE_1__ ubus; } ;
struct TYPE_8__ {int head; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,char*,int const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_2__*,char const*,int ,int) ;

void FUNC_3(struct hostapd_data *VAR_2, const char *VAR_3, const u8 *VAR_4)
{
 if (!VAR_2->ubus.obj.has_subscribers)
  return;

 if (!VAR_4)
  return;

 FUNC_0(&VAR_0, 0);
 FUNC_1(&VAR_0, "address", VAR_4);

 FUNC_2(VAR_1, &VAR_2->ubus.obj, VAR_3, VAR_0.head, -1);
}
