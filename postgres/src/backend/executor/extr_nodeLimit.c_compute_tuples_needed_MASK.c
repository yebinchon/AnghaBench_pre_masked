
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int count; int offset; scalar_t__ noCount; } ;
typedef TYPE_1__ LimitState ;



__attribute__((used)) static int64
FUNC_0(LimitState *VAR_0)
{
 if (VAR_0->noCount)
  return -1;

 return VAR_0->count + VAR_0->offset;
}
