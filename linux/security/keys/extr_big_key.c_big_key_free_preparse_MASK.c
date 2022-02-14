
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct TYPE_2__ {int * data; } ;
struct key_preparsed_payload {scalar_t__ datalen; TYPE_1__ payload; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct path*) ;

void FUNC_2(struct key_preparsed_payload *VAR_3)
{
 if (VAR_3->datalen > VAR_0) {
  struct path *VAR_4 = (struct path *)&VAR_3->payload.data[VAR_2];

  FUNC_1(VAR_4);
 }
 FUNC_0(VAR_3->payload.data[VAR_1]);
}
