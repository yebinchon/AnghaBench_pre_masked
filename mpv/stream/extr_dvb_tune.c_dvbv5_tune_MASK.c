
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dtv_properties {int num; TYPE_2__* props; } ;
typedef int dvb_priv_t ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ u; int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int,int ,struct dtv_properties*) ;

__attribute__((used)) static int FUNC_4(dvb_priv_t *VAR_1, int VAR_2,
                       unsigned int VAR_3, struct dtv_properties* VAR_4)
{
    FUNC_1(VAR_1, "Tuning via S2API, channel is %s.\n",
               FUNC_2(VAR_3));
    FUNC_1(VAR_1, "Dumping raw tuning commands and values:\n");
    for (int VAR_5 = 0; VAR_5 < VAR_4->num; ++VAR_5) {
        FUNC_1(VAR_1, "%02d: 0x%x(%d) => 0x%x(%d)\n",
                   VAR_5, VAR_4->props[VAR_5].cmd, VAR_4->props[VAR_5].cmd,
                   VAR_4->props[VAR_5].u.data, VAR_4->props[VAR_5].u.data);
    }
    if (FUNC_3(VAR_2, VAR_0, VAR_4) < 0) {
        FUNC_0(VAR_1, "ERROR tuning channel\n");
        return -1;
    }
    return 0;
}
