
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {int file; } ;
struct TYPE_5__ {TYPE_3__* bin; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(RCore *VAR_0, int VAR_1) {
 ut64 VAR_2 = FUNC_0 (VAR_0->bin);
 return FUNC_1 (VAR_0, VAR_0->bin->file, VAR_2, VAR_1);
}
