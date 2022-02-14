
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_5__ {size_t (* Write ) (TYPE_1__*,scalar_t__*,size_t) ;} ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ ISeqOutStream ;
typedef int ISeqInStream ;
typedef int CLzmaEncProps ;
typedef scalar_t__ CLzmaEncHandle ;
typedef scalar_t__ Byte ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*,size_t*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t FUNC_6 (TYPE_1__*,scalar_t__*,size_t) ;

__attribute__((used)) static SRes FUNC_7(ISeqOutStream *VAR_5, ISeqInStream *VAR_6, UInt64 VAR_7, char *VAR_8)
{
  CLzmaEncHandle VAR_9;
  SRes VAR_10;
  CLzmaEncProps VAR_11;

  VAR_8 = VAR_8;

  VAR_9 = FUNC_1(&VAR_4);
  if (VAR_9 == 0)
    return VAR_1;

  FUNC_0(&VAR_11);
  VAR_10 = FUNC_4(VAR_9, &VAR_11);

  if (VAR_10 == VAR_3)
  {
    Byte VAR_12[VAR_0 + 8];
    size_t VAR_13 = VAR_0;
    int VAR_14;

    VAR_10 = FUNC_5(VAR_9, VAR_12, &VAR_13);
    for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
      VAR_12[VAR_13++] = (Byte)(VAR_7 >> (8 * VAR_14));
    if (VAR_5->Write(VAR_5, VAR_12, VAR_13) != VAR_13)
      VAR_10 = VAR_2;
    else
    {
      if (VAR_10 == VAR_3)
        VAR_10 = FUNC_3(VAR_9, VAR_5, VAR_6, ((void*)0), &VAR_4, &VAR_4);
    }
  }
  FUNC_2(VAR_9, &VAR_4, &VAR_4);
  return VAR_10;
}
