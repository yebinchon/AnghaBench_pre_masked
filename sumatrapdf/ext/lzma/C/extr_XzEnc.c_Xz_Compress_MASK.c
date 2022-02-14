
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_25__ ;
typedef struct TYPE_29__ TYPE_23__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_19__ ;
typedef struct TYPE_26__ TYPE_15__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_30__ {int Read; } ;
struct TYPE_27__ {TYPE_25__ p; TYPE_25__* realStream; } ;
struct TYPE_29__ {TYPE_25__ p; TYPE_25__* inStream; } ;
struct TYPE_37__ {TYPE_19__ filter; TYPE_23__ sb; int lzma2; } ;
struct TYPE_36__ {int processed; TYPE_25__ p; int * realStream; } ;
struct TYPE_26__ {int Write; } ;
struct TYPE_35__ {scalar_t__ processed; TYPE_15__ p; int * realStream; } ;
struct TYPE_34__ {int unpackSize; scalar_t__ packSize; TYPE_4__* filters; } ;
struct TYPE_33__ {scalar_t__ id; int propsSize; void** props; } ;
struct TYPE_32__ {scalar_t__ id; int delta; int ip; scalar_t__ ipDefined; } ;
struct TYPE_31__ {TYPE_3__* filterProps; int lzma2Props; scalar_t__ checkId; } ;
struct TYPE_28__ {void* flags; } ;
typedef int SRes ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef int ICompressProgress ;
typedef TYPE_1__ CXzStream ;
typedef TYPE_2__ CXzProps ;
typedef TYPE_3__ CXzFilterProps ;
typedef TYPE_4__ CXzFilter ;
typedef TYPE_5__ CXzBlock ;
typedef TYPE_6__ CSeqSizeOutStream ;
typedef TYPE_7__ CSeqCheckInStream ;
typedef TYPE_8__ CLzma2WithFilters ;
typedef void* Byte ;


 int FUNC_0 (int ,TYPE_15__*,TYPE_25__*,int *) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_23__*) ;
 int FUNC_5 (TYPE_7__*,void**) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_19__*,TYPE_4__*) ;
 int FUNC_8 (void**,int ) ;
 int FUNC_9 (TYPE_15__*,void**,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,int) ;
 int FUNC_12 (TYPE_5__*,TYPE_15__*) ;
 scalar_t__ FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (TYPE_1__*,int ,scalar_t__,int *) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (void*,int *) ;
 int VAR_5 ;

__attribute__((used)) static SRes FUNC_18(CXzStream *VAR_6, CLzma2WithFilters *VAR_7,
    ISeqOutStream *VAR_8, ISeqInStream *VAR_9,
    const CXzProps *VAR_10, ICompressProgress *VAR_11)
{
  VAR_6->flags = (Byte)VAR_10->checkId;

  FUNC_3(FUNC_1(VAR_7->lzma2, VAR_10->lzma2Props));
  FUNC_3(FUNC_17(VAR_6->flags, VAR_8));

  {
    CSeqCheckInStream VAR_12;
    CSeqSizeOutStream VAR_13;
    CXzBlock VAR_14;
    int VAR_15 = 0;
    CXzFilter *VAR_16 = ((void*)0);
    const CXzFilterProps *VAR_17 = VAR_10->filterProps;

    FUNC_10(&VAR_14);
    FUNC_11(&VAR_14, 1 + (VAR_17 ? 1 : 0));

    if (VAR_17)
    {
      VAR_16 = &VAR_14.filters[VAR_15++];
      VAR_16->id = VAR_17->id;
      VAR_16->propsSize = 0;
      if (VAR_17->id == VAR_2)
      {
        VAR_16->props[0] = (Byte)(VAR_17->delta - 1);
        VAR_16->propsSize = 1;
      }
      else if (VAR_17->ipDefined)
      {
        FUNC_8(VAR_16->props, VAR_17->ip);
        VAR_16->propsSize = 4;
      }
    }

    {
      CXzFilter *VAR_18 = &VAR_14.filters[VAR_15++];
      VAR_18->id = VAR_3;
      VAR_18->propsSize = 1;
      VAR_18->props[0] = FUNC_2(VAR_7->lzma2);
    }

    VAR_13.p.Write = VAR_0;
    VAR_13.realStream = VAR_8;
    VAR_13.processed = 0;

    FUNC_3(FUNC_12(&VAR_14, &VAR_13.p));

    VAR_12.p.Read = VAR_1;
    VAR_12.realStream = VAR_9;
    FUNC_6(&VAR_12, FUNC_14(VAR_6->flags));

    if (VAR_17)
    {
      {
        VAR_7->filter.realStream = &VAR_12.p;
        FUNC_3(FUNC_7(&VAR_7->filter, VAR_16));
      }
    }

    {
      UInt64 VAR_19 = VAR_13.processed;
      SRes VAR_20 = FUNC_0(VAR_7->lzma2, &VAR_13.p,
        VAR_17 ?



        &VAR_7->filter.p:
        &VAR_12.p,
        VAR_11);
      FUNC_3(VAR_20);
      VAR_14.unpackSize = VAR_12.processed;
      VAR_14.packSize = VAR_13.processed - VAR_19;
    }

    {
      unsigned VAR_21 = 0;
      Byte VAR_22[128];
      while((((unsigned)VAR_14.packSize + VAR_21) & 3) != 0)
        VAR_22[VAR_21++] = 0;
      FUNC_5(&VAR_12, VAR_22 + VAR_21);
      FUNC_3(FUNC_9(&VAR_13.p, VAR_22, VAR_21 + FUNC_13(VAR_6->flags)));
      FUNC_3(FUNC_15(VAR_6, VAR_14.unpackSize, VAR_13.processed - VAR_21, &VAR_5));
    }
  }
  return FUNC_16(VAR_6, VAR_8);
}
