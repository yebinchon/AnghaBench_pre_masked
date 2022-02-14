
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* core; } ;
struct TYPE_6__ {TYPE_1__* anal; } ;
struct TYPE_5__ {int sdb_types; } ;
typedef TYPE_3__ RCoreVisualTypes ;


 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline char *FUNC_2 (RCoreVisualTypes *VAR_0, const char *VAR_1) {
 return FUNC_1 (VAR_0->core->anal->sdb_types,
  FUNC_0 ("type.%s", VAR_1), 0);
}
