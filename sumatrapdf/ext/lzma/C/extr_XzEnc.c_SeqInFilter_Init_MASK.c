
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int p; int (* Init ) (int ) ;int (* SetProps ) (int ,int ,int ,TYPE_3__*) ;} ;
struct TYPE_12__ {scalar_t__ (* Alloc ) (TYPE_3__*,int ) ;} ;
struct TYPE_11__ {TYPE_8__ StateCoder; scalar_t__ srcWasFinished; scalar_t__ endPos; scalar_t__ curPos; scalar_t__ buf; } ;
struct TYPE_10__ {int propsSize; int props; int id; } ;
typedef int SRes ;
typedef TYPE_1__ CXzFilter ;
typedef TYPE_2__ CSeqInFilter ;


 int FUNC_0 (TYPE_8__*,int ,int,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_3__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static SRes FUNC_5(CSeqInFilter *VAR_4, const CXzFilter *VAR_5)
{
  if (!VAR_4->buf)
  {
    VAR_4->buf = VAR_3.Alloc(&VAR_3, VAR_0);
    if (!VAR_4->buf)
      return VAR_1;
  }
  VAR_4->curPos = VAR_4->endPos = 0;
  VAR_4->srcWasFinished = 0;
  FUNC_1(FUNC_0(&VAR_4->StateCoder, VAR_5->id, 1, &VAR_3));
  FUNC_1(VAR_4->StateCoder.SetProps(VAR_4->StateCoder.p, VAR_5->props, VAR_5->propsSize, &VAR_3));
  VAR_4->StateCoder.Init(VAR_4->StateCoder.p);
  return VAR_2;
}
