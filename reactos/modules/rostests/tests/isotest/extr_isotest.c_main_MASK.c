
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HighPart; int LowPart; } ;
struct TYPE_5__ {int QuadPart; TYPE_1__ u; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int CHAR ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__,char*,TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,char*,int,int *,int *) ;
 int FUNC_6 (scalar_t__,int ,int *,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,char*) ;

int FUNC_14 (int VAR_8, char *VAR_9[])
{
  HANDLE VAR_10;
  DWORD VAR_11;
  char *VAR_12;
  CHAR VAR_13[80];
  LARGE_INTEGER VAR_14;

  if (VAR_8 != 2)
    {
      FUNC_11("Usage: isotest [Drive:]\n");
      return 0;
    }

  FUNC_13(VAR_13, "\\\\.\\");
  FUNC_12(VAR_13, VAR_9[1]);

  VAR_10 = FUNC_1(VAR_13,
       VAR_4,
       VAR_2 | VAR_3,
       ((void*)0),
       VAR_7,
       0,
       ((void*)0));
  if (VAR_10 == VAR_5)
    {
      FUNC_11("CreateFile(): Invalid disk handle!\n");
      return 0;
    }

  VAR_12 = (char*)FUNC_9(2048);
  if (VAR_12 == ((void*)0))
    {
      FUNC_0(VAR_10);
      FUNC_11("Out of memory!\n");
      return 0;
    }
  FUNC_10(VAR_12, 0, 2048);


  VAR_14.QuadPart = 16 * 2048;
  if (FUNC_4(VAR_10,
  VAR_12,
  &VAR_14,
  2048,
  &VAR_11) == VAR_0)
    {
      FUNC_0(VAR_10);
      FUNC_8(VAR_12);



      return 0;
    }

  FUNC_3(VAR_12, 128);

  FUNC_0(VAR_10);

  FUNC_8(VAR_12);

  return 0;
}
