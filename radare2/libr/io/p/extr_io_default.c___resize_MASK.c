
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int perm; } ;
typedef TYPE_1__ RIOMMapFileObj ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static bool FUNC_2(RIO *VAR_1, RIODesc *VAR_2, ut64 VAR_3) {
 FUNC_1 (VAR_1 && VAR_2 && VAR_2->data, 0);
 RIOMMapFileObj *VAR_4 = VAR_2->data;
 if (!(VAR_4->perm & VAR_0)) {
  return 0;
 }
 return FUNC_0 (VAR_4, VAR_3);
}
