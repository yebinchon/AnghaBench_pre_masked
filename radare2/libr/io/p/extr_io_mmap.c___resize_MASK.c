
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef int RIOMMapFileObj ;
typedef TYPE_1__ RIODesc ;
typedef int RIO ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static bool FUNC_1(RIO *VAR_0, RIODesc *VAR_1, ut64 VAR_2) {
 if (!VAR_1 || !VAR_1->data) {
  return -1;
 }
 return FUNC_0 ((RIOMMapFileObj*)VAR_1->data, VAR_2);
}
