
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int queue_length; } ;
struct ua101 {TYPE_1__ playback; } ;



__attribute__((used)) static inline void FUNC_0(struct ua101 *VAR_0,
           unsigned int *VAR_1, unsigned int VAR_2)
{
 *VAR_1 += VAR_2;
 if (*VAR_1 >= VAR_0->playback.queue_length)
  *VAR_1 -= VAR_0->playback.queue_length;
}
