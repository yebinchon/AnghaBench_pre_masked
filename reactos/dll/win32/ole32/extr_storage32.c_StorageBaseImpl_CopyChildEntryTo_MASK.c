
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_9__ {scalar_t__ stgType; scalar_t__ leftChild; scalar_t__ rightChild; int name; } ;
struct TYPE_8__ {int cbSize; } ;
struct TYPE_7__ {int IStream_iface; } ;
typedef int StorageBaseImpl ;
typedef TYPE_1__ StgStreamImpl ;
typedef TYPE_2__ STATSTG ;
typedef int ** SNB ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DirRef ;
typedef TYPE_3__ DirEntry ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int,int ,int ,int **) ;
 scalar_t__ FUNC_2 (int *,int ,int,int ,int ,int **) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int,int *,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 TYPE_1__* FUNC_11 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_12 (int *,scalar_t__,int ,int ,int *,int *) ;
 scalar_t__ FUNC_13 (int *,scalar_t__,TYPE_3__*) ;
 int FUNC_14 (char*,scalar_t__) ;
 int VAR_13 ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static HRESULT FUNC_16(StorageBaseImpl *VAR_14,
    DirRef VAR_15, BOOL VAR_16, BOOL VAR_17,
    SNB VAR_18, IStorage *VAR_19)
{
  DirEntry VAR_20;
  HRESULT VAR_21;
  BOOL VAR_22 = VAR_2;
  IStorage *VAR_23;
  IStream *VAR_24, *VAR_25;
  STATSTG VAR_26;

  if (VAR_15 == VAR_0)
    return VAR_12;

  VAR_21 = FUNC_13( VAR_14, VAR_15, &VAR_20 );

  if (FUNC_0(VAR_21))
    return VAR_21;

  if ( VAR_18 )
  {
    WCHAR **VAR_27 = VAR_18;

    while ( *VAR_27 != ((void*)0) && !VAR_22 )
    {
      if ( FUNC_15(VAR_20.name, *VAR_27) == 0 )
        VAR_22 = VAR_13;
      ++VAR_27;
    }
  }

  if (!VAR_22)
  {
    if (VAR_20.stgType == VAR_9 && !VAR_16)
    {



      VAR_21 = FUNC_1( VAR_19, VAR_20.name,
                                   VAR_5|VAR_8|VAR_7,
                                   0, 0,
                                   &VAR_23 );




      if (VAR_21 == VAR_11)
      {
        VAR_21 = FUNC_3( VAR_19, VAR_20.name, ((void*)0),
                                   VAR_8|VAR_7,
                                   ((void*)0), 0, &VAR_23 );
      }

      if (FUNC_10(VAR_21))
      {
        VAR_21 = FUNC_12( VAR_14, VAR_15, VAR_16,
                                                 VAR_17, ((void*)0), VAR_23 );

        FUNC_4(VAR_23);
      }
    }
    else if (VAR_20.stgType == VAR_10 && !VAR_17)
    {




      VAR_21 = FUNC_2( VAR_19, VAR_20.name,
                                  VAR_4|VAR_8|VAR_7,
                                  0, 0, &VAR_25 );





      if (VAR_21 == VAR_12)
      {
        StgStreamImpl *VAR_28 = FUNC_11(VAR_14, VAR_6|VAR_7, VAR_15);

        if (VAR_28)
        {
          VAR_24 = &VAR_28->IStream_iface;
          if (VAR_24)
            FUNC_5(VAR_24);
        }
        else
        {
          VAR_24 = ((void*)0);
          VAR_21 = VAR_1;
        }
      }

      if (VAR_21 == VAR_12)
      {



        FUNC_9( VAR_24, &VAR_26, VAR_3 );




        FUNC_8(VAR_25, VAR_26.cbSize);




        VAR_21 = FUNC_6( VAR_24, VAR_25, VAR_26.cbSize,
                             ((void*)0), ((void*)0) );

        FUNC_7( VAR_24 );
      }

      FUNC_7( VAR_25 );
    }
  }


  if (FUNC_10(VAR_21))
    VAR_21 = FUNC_16( VAR_14, VAR_20.leftChild, VAR_16,
                                           VAR_17, VAR_18, VAR_19 );

  if (FUNC_10(VAR_21))
    VAR_21 = FUNC_16( VAR_14, VAR_20.rightChild, VAR_16,
                                           VAR_17, VAR_18, VAR_19 );

  FUNC_14("<-- %08x\n", VAR_21);
  return VAR_21;
}
