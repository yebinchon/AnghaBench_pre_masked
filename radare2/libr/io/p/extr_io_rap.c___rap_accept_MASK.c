
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int client; } ;
typedef TYPE_1__ RIORap ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(RIO *VAR_0, RIODesc *VAR_1, int VAR_2) {
 RIORap *VAR_3 = VAR_1? VAR_1->data: ((void*)0);
 if (VAR_3 && VAR_2 != -1) {
  VAR_3->client = FUNC_0 (VAR_2);
  return 1;
 }
 return 0;
}
