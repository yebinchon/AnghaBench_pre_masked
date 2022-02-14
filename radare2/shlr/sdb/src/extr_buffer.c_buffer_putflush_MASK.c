
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_4__ {int fd; int op; } ;
typedef TYPE_1__ buffer ;


 int FUNC_0 (int ,int ,char const*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(buffer *VAR_0, const char *VAR_1, ut32 VAR_2) {
 if (!FUNC_1 (VAR_0)) {
  return 0;
 }
 return FUNC_0 (VAR_0->op, VAR_0->fd, VAR_1, VAR_2);
}
