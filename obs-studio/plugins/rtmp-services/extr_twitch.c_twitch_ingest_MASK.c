
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twitch_ingest {int * url; int * name; } ;
struct TYPE_2__ {size_t num; scalar_t__ array; } ;


 TYPE_1__ VAR_0 ;

struct twitch_ingest FUNC_0(size_t VAR_1)
{
 struct twitch_ingest VAR_2;

 if (VAR_0.num <= VAR_1) {
  VAR_2.name = ((void*)0);
  VAR_2.url = ((void*)0);
 } else {
  VAR_2 = *(struct twitch_ingest *)(VAR_0.array + VAR_1);
 }

 return VAR_2;
}
