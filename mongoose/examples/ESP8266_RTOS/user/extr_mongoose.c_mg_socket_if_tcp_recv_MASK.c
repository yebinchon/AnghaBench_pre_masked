
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int flags; int sock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,size_t,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct mg_connection *VAR_1, void *VAR_2,
                                 size_t VAR_3) {
  int VAR_4 = (int) FUNC_0(VAR_1->sock, VAR_2, VAR_3, 0);
  if (VAR_4 == 0) {

    VAR_1->flags |= VAR_0;
  } else if (VAR_4 < 0 && !FUNC_1()) {
    VAR_4 = 0;
  }
  return VAR_4;
}
