
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket_data {int sock; } ;
typedef int strm_value ;
struct TYPE_3__ {struct socket_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct socket_data*) ;

__attribute__((used)) static int
FUNC_2(strm_stream* VAR_1, strm_value VAR_2)
{
  struct socket_data *VAR_3 = VAR_1->data;

  FUNC_0(VAR_3->sock);
  FUNC_1(VAR_3);
  return VAR_0;
}
