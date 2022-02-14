
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PAVISTREAM ;
typedef int * LPVOID ;
typedef scalar_t__ LONG ;
typedef int BOOL ;


 int FUNC_0 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__,int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,int *,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_10(PAVISTREAM VAR_1, PAVISTREAM VAR_2)
{
  LPVOID VAR_3 = ((void*)0), VAR_4 = ((void*)0);
  LONG VAR_5, VAR_6, VAR_7, VAR_8;
  BOOL VAR_9 = VAR_0;

  FUNC_8(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));


  VAR_7 = FUNC_2(VAR_1);
  VAR_8 = FUNC_2(VAR_2);
  if (FUNC_3(FUNC_0(VAR_1, VAR_7, &VAR_5)))
    return VAR_0;
  if (FUNC_3(FUNC_0(VAR_2, VAR_8, &VAR_6)))
    return VAR_0;
  if (VAR_5 != VAR_6)
    return VAR_0;


  VAR_3 = FUNC_5(FUNC_4(), 0, VAR_5);
  if (VAR_3 == ((void*)0))
    return VAR_0;
  if (FUNC_7(FUNC_1(VAR_1, VAR_7, VAR_3, &VAR_5))) {
    VAR_4 = FUNC_5(FUNC_4(), 0, VAR_5);
    if (VAR_4 != ((void*)0)) {
      if (FUNC_7(FUNC_1(VAR_2, VAR_8, VAR_4, &VAR_5)))
        VAR_9 = (FUNC_9(VAR_3, VAR_4, VAR_5) == 0);
    }
  }

  FUNC_6(FUNC_4(), 0, VAR_4);
  FUNC_6(FUNC_4(), 0, VAR_3);

  return VAR_9;
}
