
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ EventType; } ;
typedef int* LPDWORD ;
typedef TYPE_1__ INPUT_RECORD ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int,int*) ;
 int FUNC_1 (int ,TYPE_1__*,int,int*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL
FUNC_2(
    HANDLE VAR_4,
    INPUT_RECORD *VAR_5,
    DWORD VAR_6,
    LPDWORD VAR_7)
{
    enum
    {
 IRSIZE = 10
    };
    static INPUT_RECORD VAR_8[IRSIZE];
    static DWORD VAR_9 = 0;
    static DWORD VAR_10 = 0;
    DWORD VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;

    if (!VAR_3)
    {
 if (VAR_6 == -1)
     return FUNC_0(VAR_4, VAR_5, 1, VAR_7);
 return FUNC_1(VAR_4, VAR_5, 1, &VAR_11);
    }

    if (VAR_10 == 0)
    {
 if (VAR_6 == -1)
     return FUNC_0(VAR_4, VAR_5, 1, VAR_7);
 if (!FUNC_1(VAR_4, VAR_8, IRSIZE, &VAR_11))
     return VAR_0;
 VAR_9 = 0;
 VAR_10 = VAR_11;
 if (VAR_11 == 0)
 {
     *VAR_7 = 0;
     return VAR_1;
 }

 if (VAR_10 > 1)
 {
     VAR_12 = 0;
     VAR_13 = VAR_10 - 1;
     while (VAR_12 != VAR_13)
     {
  if (VAR_8[VAR_12].EventType == VAR_2
   && VAR_8[VAR_12 + 1].EventType
        == VAR_2)
  {

      for (VAR_14 = VAR_12; VAR_14 < VAR_13; ++VAR_14)
   VAR_8[VAR_14] = VAR_8[VAR_14 + 1];
      --VAR_13;
      continue;
  }
  VAR_12++;
     }
     VAR_10 = VAR_13 + 1;
 }
    }

    *VAR_5 = VAR_8[VAR_9];
    if (VAR_6 != -1 && ++VAR_9 >= VAR_10)
 VAR_10 = 0;
    *VAR_7 = 1;
    return VAR_1;
}
