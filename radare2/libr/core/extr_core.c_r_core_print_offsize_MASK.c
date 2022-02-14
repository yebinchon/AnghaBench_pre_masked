
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ RFlagItem ;
typedef TYPE_2__ RCore ;


 TYPE_1__* FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, ut64 VAR_1) {
 RCore *VAR_2 = (RCore*)VAR_0;
 RFlagItem *VAR_3 = FUNC_0 (VAR_2->flags, VAR_1);
 return VAR_3 ? VAR_3->size: -1;
}
