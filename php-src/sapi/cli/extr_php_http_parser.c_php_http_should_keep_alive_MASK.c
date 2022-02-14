
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ http_major; scalar_t__ http_minor; int flags; } ;
typedef TYPE_1__ php_http_parser ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0 (php_http_parser *VAR_2)
{
  if (VAR_2->http_major > 0 && VAR_2->http_minor > 0) {

    if (VAR_2->flags & VAR_0) {
      return 0;
    } else {
      return 1;
    }
  } else {

    if (VAR_2->flags & VAR_1) {
      return 1;
    } else {
      return 0;
    }
  }
}
