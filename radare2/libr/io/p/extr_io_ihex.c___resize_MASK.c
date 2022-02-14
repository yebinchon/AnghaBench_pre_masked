
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int rbuf; } ;
typedef TYPE_1__ Rihex ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(RIO *VAR_0, RIODesc *VAR_1, ut64 VAR_2) {
 if (!VAR_1) {
  return 0;
 }
 Rihex *VAR_3 = VAR_1->data;
 if (VAR_3) {
  return FUNC_0 (VAR_3->rbuf, VAR_2);
 }
 return 0;
}
