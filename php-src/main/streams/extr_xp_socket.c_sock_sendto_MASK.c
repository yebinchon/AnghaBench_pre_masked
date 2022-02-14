
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef size_t socklen_t ;
struct TYPE_3__ {int socket; } ;
typedef TYPE_1__ php_netstream_data_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,char const*,size_t,int) ;
 int FUNC_2 (int ,char const*,int ,int,struct sockaddr*,int ) ;

__attribute__((used)) static inline int FUNC_3(php_netstream_data_t *VAR_2, const char *VAR_3, size_t VAR_4, int VAR_5,
  struct sockaddr *VAR_6, socklen_t VAR_7
  )
{
 int VAR_8;
 if (VAR_6) {
  VAR_8 = FUNC_2(VAR_2->socket, VAR_3, FUNC_0(VAR_4), VAR_5, VAR_6, FUNC_0(VAR_7));

  return (VAR_8 == VAR_1) ? -1 : VAR_8;
 }



 return ((VAR_8 = FUNC_1(VAR_2->socket, VAR_3, VAR_4, VAR_5)) == VAR_1) ? -1 : VAR_8;

}
