
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int writer_addr ;
struct socket_data {int sock; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int strm_value ;
struct TYPE_6__ {struct socket_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct sockaddr*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr_in*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int (*) (TYPE_1__*,int )) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_5, strm_value VAR_6)
{
  struct socket_data *VAR_7 = VAR_5->data;
  struct sockaddr_in VAR_8;
  socklen_t VAR_9;
  int VAR_10;

  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_9 = sizeof(VAR_8);
  VAR_10 = FUNC_0(VAR_7->sock, (struct sockaddr *)&VAR_8, &VAR_9);
  if (VAR_10 < 0) {
    FUNC_1(VAR_10);
    FUNC_5(VAR_5, "socket error: listen");
    return VAR_3;
  }

  FUNC_3(VAR_5, FUNC_4(VAR_10, VAR_1|VAR_2|VAR_0),
               VAR_7->sock, FUNC_6);
  return VAR_4;
}
