
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int strm_int ;
struct TYPE_3__ {int value; int type; } ;
typedef TYPE_1__ node_str ;
typedef int node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,int ) ;

node*
FUNC_3(const char* VAR_1, strm_int VAR_2)
{
  node_str* VAR_3 = FUNC_0(sizeof(node_str));

  VAR_3->type = VAR_0;
  VAR_2 = FUNC_2((char*)VAR_1, VAR_2);
  VAR_3->value = FUNC_1(VAR_1, VAR_2);
  return (node*)VAR_3;
}
