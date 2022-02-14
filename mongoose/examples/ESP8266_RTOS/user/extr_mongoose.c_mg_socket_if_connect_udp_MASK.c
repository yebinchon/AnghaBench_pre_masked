
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {scalar_t__ sock; int err; int flags; } ;
typedef int optval ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,char const*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct mg_connection *VAR_6) {
  VAR_6->sock = FUNC_2(VAR_0, VAR_3, 0);
  if (VAR_6->sock == VAR_1) {
    VAR_6->err = FUNC_0() ? FUNC_0() : 1;
    return;
  }
  if (VAR_6->flags & VAR_2) {
    int VAR_7 = 1;
    if (FUNC_1(VAR_6->sock, VAR_4, VAR_5, (const char *) &VAR_7,
                   sizeof(VAR_7)) < 0) {
      VAR_6->err = FUNC_0() ? FUNC_0() : 1;
      return;
    }
  }
  VAR_6->err = 0;
}
