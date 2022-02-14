
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bufferedTuples; scalar_t__ bufferedBytes; } ;
typedef TYPE_1__ CopyMultiInsertInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(CopyMultiInsertInfo *VAR_2)
{
 if (VAR_2->bufferedTuples >= VAR_1 ||
  VAR_2->bufferedBytes >= VAR_0)
  return 1;
 return 0;
}
