
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int strm_int ;
struct TYPE_3__ {long sec; long usec; int utc_offset; int type; } ;
typedef TYPE_1__ node_time ;
typedef int node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,int ,long*,long*,int*) ;

node*
FUNC_2(const char* VAR_1, strm_int VAR_2)
{
  long VAR_3, VAR_4;
  int VAR_5;
  node_time* VAR_6;

  if (FUNC_1(VAR_1, VAR_2, &VAR_3, &VAR_4, &VAR_5) < 0) {
    return ((void*)0);
  }
  VAR_6 = FUNC_0(sizeof(node_time));
  VAR_6->type = VAR_0;
  VAR_6->sec = VAR_3;
  VAR_6->usec = VAR_4;
  VAR_6->utc_offset = VAR_5;
  return (node*)VAR_6;
}
