
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int * VARIANT ;
typedef int ULONG ;
struct TYPE_11__ {int fFeatures; int cbElements; int ** pvData; } ;
typedef TYPE_1__ SAFEARRAY ;
typedef int IUnknown ;
typedef int IRecordInfo ;
typedef int HRESULT ;
typedef int GUID ;
typedef int * BYTE ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *,int **,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int VAR_11 ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int **) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int * FUNC_13 (char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int **) ;
 int VAR_12 ;
 int FUNC_17 (int **,int **,int) ;

__attribute__((used)) static HRESULT FUNC_18(SAFEARRAY *VAR_13, SAFEARRAY *VAR_14)
{
  HRESULT VAR_15 = VAR_11;

  if (!VAR_13->pvData)
    return VAR_11;

  if (!VAR_14->pvData || VAR_13->fFeatures & VAR_4)
    return VAR_0;
  else
  {
    ULONG VAR_16 = FUNC_6(VAR_13);

    VAR_14->fFeatures = (VAR_14->fFeatures & VAR_3) | (VAR_13->fFeatures & ~VAR_12);

    if (VAR_13->fFeatures & VAR_10)
    {
      VARIANT *VAR_17 = VAR_13->pvData;
      VARIANT *VAR_18 = VAR_14->pvData;

      while(VAR_16--)
      {
        HRESULT VAR_19;


        VAR_19 = FUNC_16(VAR_18, VAR_17);
        if (FUNC_0(VAR_19)) FUNC_1("VariantCopy failed with 0x%08x, element %u\n", VAR_19, VAR_16);
        VAR_17++;
        VAR_18++;
      }
    }
    else if (VAR_13->fFeatures & VAR_2)
    {
      BSTR *VAR_20 = VAR_13->pvData;
      BSTR *VAR_21 = VAR_14->pvData;

      while(VAR_16--)
      {
        FUNC_14(*VAR_21);
        if (*VAR_20)
        {
          *VAR_21 = FUNC_13((char*)*VAR_20, FUNC_15(*VAR_20));
          if (!*VAR_21)
            return VAR_1;
        }
        else
          *VAR_21 = ((void*)0);
        VAR_20++;
        VAR_21++;
      }
    }
    else if (VAR_13->fFeatures & VAR_8)
    {
      BYTE *VAR_22 = VAR_14->pvData;
      BYTE *VAR_23 = VAR_13->pvData;
      IRecordInfo *VAR_24;

      FUNC_10(VAR_13, &VAR_24);
      while (VAR_16--)
      {

          VAR_15 = FUNC_2(VAR_24, VAR_23, VAR_22);
          if (FUNC_0(VAR_15)) break;
          VAR_23 += VAR_13->cbElements;
          VAR_22 += VAR_13->cbElements;
      }

      FUNC_12(VAR_14, VAR_24);


      VAR_14->cbElements = VAR_13->cbElements;
      FUNC_3(VAR_24);
    }
    else if (VAR_13->fFeatures & (VAR_9|VAR_5))
    {
      IUnknown **VAR_25 = VAR_14->pvData;
      IUnknown **VAR_26 = VAR_13->pvData;


      while (VAR_16--)
      {
          if (*VAR_25)
              FUNC_5(*VAR_25);
          *VAR_25 = *VAR_26;
          if (*VAR_25)
              FUNC_4(*VAR_25);
          VAR_26++;
          VAR_25++;
      }
    }
    else
    {

      FUNC_17(VAR_14->pvData, VAR_13->pvData, VAR_16 * VAR_13->cbElements);
    }

    if (VAR_13->fFeatures & VAR_6)
    {
      GUID VAR_27;
      FUNC_9(VAR_13, &VAR_27);
      FUNC_11(VAR_14, &VAR_27);
    }
    else if (VAR_13->fFeatures & VAR_7)
    {
      FUNC_8(VAR_14, FUNC_7(VAR_13));
    }
  }

  return VAR_15;
}
