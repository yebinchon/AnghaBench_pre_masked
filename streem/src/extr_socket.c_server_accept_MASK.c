
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct socket_data {int sock; } ;
typedef int strm_value ;
struct TYPE_4__ {struct socket_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(strm_stream* VAR_2, strm_value VAR_3)
{
  struct socket_data *VAR_4 = VAR_2->data;

  FUNC_0(VAR_2, VAR_4->sock, VAR_1);
  return VAR_0;
}
