
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int php_socket_t ;
struct TYPE_3__ {int events; int revents; int fd; } ;
typedef TYPE_1__ php_pollfd ;


 int FUNC_0 (TYPE_1__*,int,int) ;

__attribute__((used)) static inline int FUNC_1(php_socket_t VAR_0, int VAR_1, int VAR_2)
{
 php_pollfd VAR_3;
 int VAR_4;

 VAR_3.fd = VAR_0;
 VAR_3.events = VAR_1;
 VAR_3.revents = 0;

 VAR_4 = FUNC_0(&VAR_3, 1, VAR_2);

 if (VAR_4 > 0) {
  return VAR_3.revents;
 }

 return VAR_4;
}
