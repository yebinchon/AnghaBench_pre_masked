
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct mg_connection {int flags; TYPE_1__ send_mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mg_connection*,unsigned char*,int) ;
 int FUNC_1 (struct mg_connection*,int ,unsigned char*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_4, int VAR_5, void *VAR_6) {
  int VAR_7 = *(int *) VAR_6;

  (void) VAR_5;

  if (VAR_7 < 0) {

    VAR_4->flags |= VAR_1;
    if (VAR_4->send_mbuf.len <= 0) {
      VAR_4->flags |= VAR_0;
    }
  } else {

    unsigned char VAR_8 = (unsigned char) VAR_7;
    if (VAR_3) {
      FUNC_1(VAR_4, VAR_2, &VAR_8, 1);
    } else {
      FUNC_0(VAR_4, &VAR_8, 1);
    }
  }
}
