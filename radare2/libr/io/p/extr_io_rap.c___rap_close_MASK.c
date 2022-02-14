
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fd; TYPE_1__* data; } ;
struct TYPE_7__ {scalar_t__ client; scalar_t__ fd; } ;
typedef TYPE_1__ RIORap ;
typedef TYPE_2__ RIODesc ;


 int * FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(RIODesc *VAR_0) {
 int VAR_1 = -1;
 if (FUNC_1 (VAR_0)) {
  if (FUNC_0 (VAR_0) != ((void*)0)) {
   RIORap *VAR_2 = VAR_0->data;
   if (VAR_2 && VAR_0->fd != -1) {
    if (VAR_2->fd) {
     (void)FUNC_4 (VAR_2->fd);
    }
    if (VAR_2->client) {
     VAR_1 = FUNC_4 (VAR_2->client);
    }
    FUNC_2 (VAR_2);
   }
  }
 } else {
  FUNC_3 ("__rap_close: fdesc is not a r_io_rap plugin\n");
 }
 return VAR_1;
}
