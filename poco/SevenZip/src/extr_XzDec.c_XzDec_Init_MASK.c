
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int numCoders; scalar_t__* ids; int alloc; TYPE_1__* coders; } ;
struct TYPE_13__ {TYPE_2__* filters; } ;
struct TYPE_12__ {scalar_t__ id; int propsSize; int props; } ;
struct TYPE_11__ {int p; int (* SetProps ) (int ,int ,int ,int ) ;} ;
typedef int SRes ;
typedef TYPE_1__ IStateCoder ;
typedef TYPE_2__ CXzFilter ;
typedef TYPE_3__ CXzBlock ;
typedef TYPE_4__ CMixCoder ;
typedef int Bool ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_3__ const*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

SRes FUNC_6(CMixCoder *VAR_2, const CXzBlock *VAR_3)
{
  int VAR_4;
  Bool VAR_5 = VAR_1;
  int VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 == VAR_2->numCoders)
  {
    for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
      if (VAR_2->ids[VAR_4] != VAR_3->filters[VAR_6 - 1 - VAR_4].id)
        break;
    VAR_5 = (VAR_4 != VAR_6);
  }
  if (VAR_5)
  {
    FUNC_0(VAR_2);
    VAR_2->numCoders = VAR_6;
    for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
    {
      const CXzFilter *VAR_7 = &VAR_3->filters[VAR_6 - 1 - VAR_4];
      FUNC_3(FUNC_2(VAR_2, VAR_4, VAR_7->id));
    }
  }
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  {
    const CXzFilter *VAR_8 = &VAR_3->filters[VAR_6 - 1 - VAR_4];
    IStateCoder *VAR_9 = &VAR_2->coders[VAR_4];
    FUNC_3(VAR_9->SetProps(VAR_9->p, VAR_8->props, VAR_8->propsSize, VAR_2->alloc));
  }
  FUNC_1(VAR_2);
  return VAR_0;
}
