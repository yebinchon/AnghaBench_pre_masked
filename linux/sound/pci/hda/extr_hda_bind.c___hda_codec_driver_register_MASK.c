
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_4__ {char const* name; int * pm; int shutdown; int remove; int probe; int * bus; struct module* owner; } ;
struct TYPE_3__ {TYPE_2__ driver; int unsol_event; int match; int type; } ;
struct hda_codec_driver {TYPE_1__ core; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_1(struct hda_codec_driver *VAR_8, const char *VAR_9,
          struct module *VAR_10)
{
 VAR_8->core.driver.name = VAR_9;
 VAR_8->core.driver.owner = VAR_10;
 VAR_8->core.driver.bus = &VAR_7;
 VAR_8->core.driver.probe = VAR_2;
 VAR_8->core.driver.remove = VAR_3;
 VAR_8->core.driver.shutdown = VAR_4;
 VAR_8->core.driver.pm = &VAR_1;
 VAR_8->core.type = VAR_0;
 VAR_8->core.match = VAR_5;
 VAR_8->core.unsol_event = VAR_6;
 return FUNC_0(&VAR_8->core.driver);
}
