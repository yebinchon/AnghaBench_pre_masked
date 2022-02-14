
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct node_string {int dummy; } ;
typedef int strm_int ;
typedef TYPE_1__* node_string ;
struct TYPE_4__ {int len; char* buf; } ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;

node_string
FUNC_2(const char* VAR_0, strm_int VAR_1)
{
  node_string VAR_2;

  VAR_2 = FUNC_0(sizeof(struct node_string)+VAR_1+1);
  VAR_2->len = VAR_1;
  FUNC_1(VAR_2->buf, VAR_0, VAR_1);
  VAR_2->buf[VAR_1] = '\0';
  return VAR_2;
}
