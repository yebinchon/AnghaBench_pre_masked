
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VARIANT ;
typedef scalar_t__ ULONG ;
struct TYPE_5__ {int fFeatures; scalar_t__ pvData; scalar_t__ cbElements; } ;
typedef TYPE_1__ SAFEARRAY ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ LPUNKNOWN ;
typedef int IRecordInfo ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_1__*,int **) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static HRESULT FUNC_10(SAFEARRAY *VAR_8, ULONG VAR_9)
{
  if (VAR_8->pvData && !(VAR_8->fFeatures & VAR_2))
  {
    ULONG VAR_10 = FUNC_5(VAR_8);

    if (VAR_9 > VAR_10) {
      FUNC_1("unexpected ulCellCount %d, start %d\n",VAR_10,VAR_9);
      return VAR_0;
    }

    VAR_10 -= VAR_9;

    if (VAR_8->fFeatures & (VAR_5|VAR_3))
    {
      LPUNKNOWN *VAR_11 = (LPUNKNOWN *)VAR_8->pvData + VAR_9;

      while(VAR_10--)
      {
        if (*VAR_11)
          FUNC_4(*VAR_11);
        VAR_11++;
      }
    }
    else if (VAR_8->fFeatures & VAR_4)
    {
      IRecordInfo *VAR_12;

      if (FUNC_6(FUNC_7(VAR_8, &VAR_12)))
      {
        PBYTE VAR_13 = VAR_8->pvData;
        while(VAR_10--)
        {
          FUNC_2(VAR_12, VAR_13);
          VAR_13 += VAR_8->cbElements;
        }
        FUNC_3(VAR_12);
      }
    }
    else if (VAR_8->fFeatures & VAR_1)
    {
      BSTR* VAR_14 = (BSTR*)VAR_8->pvData + VAR_9;

      while(VAR_10--)
      {
        FUNC_8(*VAR_14);
        VAR_14++;
      }
    }
    else if (VAR_8->fFeatures & VAR_6)
    {
      VARIANT* VAR_15 = (VARIANT*)VAR_8->pvData + VAR_9;

      while(VAR_10--)
      {
        HRESULT VAR_16 = FUNC_9(VAR_15);

        if (FUNC_0(VAR_16)) FUNC_1("VariantClear of element failed!\n");
        VAR_15++;
      }
    }
  }
  return VAR_7;
}
