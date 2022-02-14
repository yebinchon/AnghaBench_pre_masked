
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int zErr; } ;
struct TYPE_6__ {int zErrMsg; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
typedef TYPE_2__ CsvTable ;
typedef TYPE_3__ CsvReader ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(CsvTable *VAR_0, CsvReader *VAR_1){
  FUNC_0(VAR_0->base.zErrMsg);
  VAR_0->base.zErrMsg = FUNC_1("%s", VAR_1->zErr);
}
