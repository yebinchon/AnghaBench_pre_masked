
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wxflag; scalar_t__ handle; } ;
typedef TYPE_1__ ioinfo ;
typedef int WORD ;
struct TYPE_6__ {scalar_t__ handle; } ;
typedef scalar_t__ HANDLE ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

unsigned FUNC_4(WORD *VAR_6, BYTE **VAR_7)
{
  int VAR_8, VAR_9;
  char* VAR_10;
  HANDLE* VAR_11;
  ioinfo* VAR_12;

  for (VAR_9=VAR_2-1; VAR_9>=0; VAR_9--)
    if (FUNC_2(VAR_9)->handle != VAR_1)
      break;
  VAR_9++;

  *VAR_6 = sizeof(unsigned) + (sizeof(char) + sizeof(HANDLE)) * VAR_9;
  *VAR_7 = FUNC_0(1, *VAR_6);
  if (!*VAR_7)
  {
    *VAR_6 = 0;
    return VAR_0;
  }
  VAR_10 = (char*)*VAR_7 + sizeof(unsigned);
  VAR_11 = (HANDLE*)(VAR_10 + VAR_9);

  *(unsigned*)*VAR_7 = VAR_9;
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  {

    VAR_12 = FUNC_1(VAR_8);
    if ((VAR_12->wxflag & (VAR_5 | VAR_4)) == VAR_5)
    {
      *VAR_10 = VAR_12->wxflag;
      *VAR_11 = VAR_12->handle;
    }
    else
    {
      *VAR_10 = 0;
      *VAR_11 = VAR_1;
    }
    FUNC_3(VAR_12);
    VAR_10++; VAR_11++;
  }
  return VAR_3;
}
