
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int * PVOID ;
typedef int * PRTL_DEBUG_INFORMATION ;
typedef scalar_t__ NTSTATUS ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int **,int ,int*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int **,int*,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int,int ,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int *,int *,int *,int) ;

__attribute__((used)) static NTSTATUS
FUNC_8(DWORD VAR_14,
                   DWORD VAR_15,
                   PRTL_DEBUG_INFORMATION *VAR_16,
                   PRTL_DEBUG_INFORMATION *VAR_17,
                   PVOID *VAR_18,
                   SIZE_T *VAR_19)
{
  NTSTATUS VAR_20 = VAR_7;

  *VAR_16 = ((void*)0);
  *VAR_17 = ((void*)0);
  *VAR_18 = ((void*)0);
  *VAR_19 = 0;




  if(VAR_14 & VAR_10)
  {
    *VAR_16 = FUNC_5(0, VAR_0);
    if(*VAR_16 != ((void*)0))
    {
      VAR_20 = FUNC_6(VAR_15,
                                               VAR_4,
                                               *VAR_16);
    }
    else
      VAR_20 = VAR_8;
  }




  if(VAR_14 & VAR_11 &&
     FUNC_0(VAR_20))
  {
    *VAR_17 = FUNC_5(0, VAR_0);
    if(*VAR_17 != ((void*)0))
    {
      VAR_20 = FUNC_6(VAR_15,
                                               VAR_5,
                                               *VAR_17);
    }
    else
      VAR_20 = VAR_8;
  }





  if(VAR_14 & (VAR_12 | VAR_13) &&
     FUNC_0(VAR_20))
  {
    for(;;)
    {
      (*VAR_19) += 0x10000;
      VAR_20 = FUNC_1(FUNC_2(),
                                       VAR_18,
                                       0,
                                       VAR_19,
                                       VAR_1,
                                       VAR_3);
      if(!FUNC_0(VAR_20))
      {
        break;
      }

      VAR_20 = FUNC_4(VAR_9,
                                        *VAR_18,
                                        *VAR_19,
                                        ((void*)0));
      if(VAR_20 == VAR_6)
      {
        FUNC_3(FUNC_2(),
                            VAR_18,
                            VAR_19,
                            VAR_2);
        *VAR_18 = ((void*)0);
      }
      else
      {
        break;
      }
    }
  }





  if(!FUNC_0(VAR_20))
  {
    FUNC_7(*VAR_16,
                               *VAR_17,
                               *VAR_18,
                               *VAR_19);
  }

  return VAR_20;
}
