
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int send_len; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(libgdbr_t *VAR_0, const char *VAR_1) {
 int VAR_2;
 if (!VAR_0 || !VAR_1) {
  return -1;
 }
 VAR_2 = FUNC_0 (VAR_0, VAR_1);
 if (VAR_2 < 0) {
  return -1;
 }
 VAR_2 = FUNC_1 (VAR_0);
 VAR_0->send_len = VAR_2;
 return VAR_2;
}
