
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_5__ {scalar_t__ offset; int config; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,char const*,scalar_t__,int ,int,int,int*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(RCore *VAR_1, const char *VAR_2, int VAR_3) {
 ut64 VAR_4 = VAR_1->offset;
 int VAR_5 = 0;
 VAR_0 = FUNC_0 (VAR_1->config, "magic.depth");
 FUNC_1 (VAR_1, VAR_2, VAR_4, VAR_0, VAR_3, 0, &VAR_5);
 if (VAR_4 != VAR_1->offset) {
  FUNC_2 (VAR_1, VAR_4, 1);
 }
}
