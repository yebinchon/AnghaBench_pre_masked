
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {unsigned long long config; } ;
struct event {TYPE_1__ attr; } ;



void FUNC_0(struct event *VAR_0, unsigned VAR_1)
{
 VAR_0->attr.config |= (1ull << 62) | ((u64)VAR_1 << 60);
}
