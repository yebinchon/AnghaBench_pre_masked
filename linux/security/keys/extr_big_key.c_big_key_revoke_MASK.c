
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct TYPE_2__ {scalar_t__* data; } ;
struct key {TYPE_1__ payload; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*,int ) ;
 int FUNC_2 (struct path*,int ) ;

void FUNC_3(struct key *VAR_3)
{
 struct path *VAR_4 = (struct path *)&VAR_3->payload.data[VAR_2];


 FUNC_1(VAR_3, 0);
 if (FUNC_0(VAR_3) &&
     (size_t)VAR_3->payload.data[VAR_1] > VAR_0)
  FUNC_2(VAR_4, 0);
}
