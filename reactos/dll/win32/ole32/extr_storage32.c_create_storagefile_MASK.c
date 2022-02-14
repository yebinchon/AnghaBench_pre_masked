
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tempPath ;
typedef int tempFileName ;
typedef char WCHAR ;
struct TYPE_6__ {scalar_t__ ulSectorSize; } ;
struct TYPE_5__ {int IStorage_iface; } ;
typedef TYPE_1__ StorageBaseImpl ;
typedef TYPE_2__ STGOPTIONS ;
typedef int REFIID ;
typedef char* LPCOLESTR ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (char*,int,int,int *,int,int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*,char const*,int ,char*) ;
 scalar_t__ FUNC_7 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int *,int ,void**) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int) ;
 int VAR_9 ;

 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (scalar_t__,char*,int *,int,int ,int ,scalar_t__,TYPE_1__**) ;
 int FUNC_13 (char*,void*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_14 (char*,int ,int) ;
 int FUNC_15 (int) ;

__attribute__((used)) static HRESULT FUNC_16(
  LPCOLESTR VAR_20,
  DWORD VAR_21,
  DWORD VAR_22,
  STGOPTIONS* VAR_23,
  REFIID VAR_24,
  void** VAR_25)
{
  StorageBaseImpl* VAR_26 = 0;
  HANDLE VAR_27 = VAR_5;
  HRESULT VAR_28 = VAR_15;
  DWORD VAR_29;
  DWORD VAR_30;
  DWORD VAR_31;
  DWORD VAR_32;
  WCHAR VAR_33[VAR_7];

  if (VAR_25 == 0)
    return VAR_17;

  if (VAR_23->ulSectorSize != VAR_8 && VAR_23->ulSectorSize != VAR_6)
    return VAR_16;


  if (FUNC_11(VAR_21) == 0)
      VAR_21 |= VAR_10;

  if ( FUNC_1( FUNC_15(VAR_21) ))
    goto end;


  switch(FUNC_10(VAR_21))
  {
  case 128:
  case 129:
    break;
  default:
    goto end;
  }


  if (!(VAR_21 & VAR_12) && (FUNC_11(VAR_21) != VAR_11))
    goto end;






  if (VAR_20 == 0)
  {
    WCHAR VAR_34[VAR_7];
    static const WCHAR VAR_35[] = { 'S', 'T', 'O', 0 };

    FUNC_14(VAR_34, 0, sizeof(VAR_34));
    FUNC_14(VAR_33, 0, sizeof(VAR_33));

    if ((FUNC_7(VAR_7, VAR_34)) == 0 )
      VAR_34[0] = '.';

    if (FUNC_6(VAR_34, VAR_35, 0, VAR_33) != 0)
      VAR_20 = VAR_33;
    else
    {
      VAR_28 = VAR_14;
      goto end;
    }

    VAR_31 = VAR_19;
  }
  else
  {
    VAR_31 = FUNC_3(VAR_21);
  }




  VAR_29 = FUNC_5(VAR_21);
  VAR_30 = FUNC_2(VAR_21);

  if (VAR_21 & VAR_9)
    VAR_32 = VAR_4 | VAR_3;
  else
    VAR_32 = VAR_2 | VAR_4;

  *VAR_25 = 0;

  VAR_27 = FUNC_0(VAR_20,
                        VAR_30,
                        VAR_29,
                        ((void*)0),
                        VAR_31,
                        VAR_32,
                        0);

  if (VAR_27 == VAR_5)
  {
    if(FUNC_4() == VAR_0)
      VAR_28 = VAR_13;
    else
      VAR_28 = VAR_1;
    goto end;
  }




  VAR_28 = FUNC_12(
         VAR_27,
        VAR_20,
         ((void*)0),
         VAR_21,
         VAR_18,
         VAR_18,
         VAR_23->ulSectorSize,
         &VAR_26);

  if (FUNC_1(VAR_28))
  {
    goto end;
  }

  VAR_28 = FUNC_8(&VAR_26->IStorage_iface, VAR_24, VAR_25);
  FUNC_9(&VAR_26->IStorage_iface);

end:
  FUNC_13("<-- %p  r = %08x\n", *VAR_25, VAR_28);

  return VAR_28;
}
