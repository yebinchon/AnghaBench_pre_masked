
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {int dwSize; char* buffer; TYPE_1__* editstream; } ;
struct TYPE_6__ {scalar_t__ dwError; } ;
typedef int ME_TextEditor ;
typedef int ME_Style ;
typedef TYPE_2__ ME_InStream ;
typedef int LRESULT ;
typedef int LONG ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int *,int,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,int ,char*,int,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int,TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static LRESULT FUNC_6(ME_TextEditor *VAR_6, DWORD VAR_7, ME_InStream *VAR_8, ME_Style *VAR_9)
{
  WCHAR *VAR_10;
  LRESULT VAR_11 = 0;
  BOOL VAR_12 = VAR_2;
  DWORD VAR_13 = VAR_0, VAR_14 = 0;
  char VAR_15[4 + VAR_4];

  static const char VAR_16[] = {0xEF, 0xBB, 0xBF};

  FUNC_3("%08x %p\n", VAR_7, VAR_8);

  do {
    LONG VAR_17 = 0;
    WCHAR VAR_18[VAR_4+1];

    if (!VAR_8->dwSize)
    {
      FUNC_1(VAR_8);
      if (VAR_8->editstream->dwError)
        break;
      if (!VAR_8->dwSize)
        break;
      VAR_11 += VAR_8->dwSize;
    }

    if (!(VAR_7 & VAR_3))
    {
      char * VAR_19 = VAR_8->buffer;
      DWORD VAR_20 = VAR_8->dwSize, VAR_21;

      if (!VAR_12)
      {
        VAR_12 = VAR_5;
        if (VAR_8->dwSize >= 3 && !FUNC_4(VAR_8->buffer, VAR_16, 3))
        {
          VAR_13 = VAR_1;
          VAR_19 += 3;
          VAR_20 -= 3;
        }
      }

      if (VAR_13 == VAR_1)
      {
        if (VAR_14)
        {
          FUNC_5(VAR_15 + VAR_14, VAR_19, VAR_20);
          VAR_19 = VAR_15;
          VAR_20 += VAR_14;
        }
        VAR_21 = VAR_20;
        while ((VAR_19[VAR_21-1] & 0xC0) == 0x80)
        {
          --VAR_21;
          --VAR_11;
        }
        if (VAR_19[VAR_21-1] & 0x80)
        {
          DWORD VAR_22 = 0;
          if ((VAR_19[VAR_21-1] & 0xE0) == 0xC0)
            VAR_22 = 1;
          if ((VAR_19[VAR_21-1] & 0xF0) == 0xE0)
            VAR_22 = 2;
          if ((VAR_19[VAR_21-1] & 0xF8) == 0xF0)
            VAR_22 = 3;

          if (VAR_20 - VAR_21 >= VAR_22)
          {

            VAR_21 = VAR_20;
          }
          else
          {

            --VAR_21;
          }
        }
      }
      else
        VAR_21 = VAR_20;

      VAR_17 = FUNC_2(VAR_13, 0, VAR_19, VAR_21, VAR_18, VAR_4);
      VAR_10 = VAR_18;

      if (VAR_13 == VAR_1)
      {
        if (VAR_21 != VAR_20)
        {
          FUNC_5(VAR_15, VAR_19 + VAR_21, VAR_20 - VAR_21);
          VAR_14 = VAR_20 - VAR_21;
        }
      }
    }
    else
    {
      VAR_17 = VAR_8->dwSize >> 1;
      VAR_10 = (WCHAR *)VAR_8->buffer;
    }

    FUNC_0(VAR_6, 0, VAR_10, VAR_17, VAR_9);
    if (VAR_8->dwSize == 0)
      break;
    VAR_8->dwSize = 0;
  } while(1);
  return VAR_11;
}
