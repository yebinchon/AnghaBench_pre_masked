
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {int io; int config; } ;
struct TYPE_5__ {int perm; } ;
typedef TYPE_1__ RIOMap ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(RCore *VAR_1, ut64 VAR_2) {
 if (FUNC_0 (VAR_1->config, "io.cache")) {
  return 1;
 }
 RIOMap *VAR_3 = FUNC_1 (VAR_1->io, VAR_2);
 return (VAR_3 && (VAR_3->perm & VAR_0));
}
