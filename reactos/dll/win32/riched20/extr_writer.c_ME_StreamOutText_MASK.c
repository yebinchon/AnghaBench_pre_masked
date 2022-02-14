
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int szEOL ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_12__ {int nFlags; scalar_t__ len; } ;
struct TYPE_9__ {TYPE_4__ run; } ;
struct TYPE_13__ {TYPE_1__ member; } ;
struct TYPE_11__ {TYPE_7__* pRun; scalar_t__ nOffset; } ;
struct TYPE_10__ {int bEmulateVersion10; } ;
typedef TYPE_2__ ME_TextEditor ;
typedef int ME_OutStream ;
typedef TYPE_3__ ME_Cursor ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_7__* FUNC_1 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_2 (int *,char const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int ,scalar_t__,int,char*,int,int *,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_4__*,scalar_t__) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_8(ME_TextEditor *VAR_7, ME_OutStream *VAR_8,
                             const ME_Cursor *VAR_9, int VAR_10, DWORD VAR_11)
{
  ME_Cursor VAR_12 = *VAR_9;
  int VAR_13;
  UINT VAR_14 = VAR_0;
  char *VAR_15 = ((void*)0);
  int VAR_16 = 0;
  BOOL VAR_17 = VAR_5;

  if (!VAR_12.pRun)
    return VAR_1;

  if (VAR_11 & VAR_4)
    VAR_14 = FUNC_0(VAR_11);



  while (VAR_17 && VAR_10 && VAR_12.pRun) {
    VAR_13 = FUNC_7(VAR_10, VAR_12.pRun->member.run.len - VAR_12.nOffset);

    if (!VAR_7->bEmulateVersion10 && VAR_12.pRun->member.run.nFlags & VAR_2)
    {
      static const WCHAR VAR_18[] = { '\r', '\n' };


      if (VAR_11 & VAR_3)
        VAR_17 = FUNC_2(VAR_8, (const char *)VAR_18, sizeof(VAR_18));
      else
        VAR_17 = FUNC_2(VAR_8, "\r\n", 2);
    } else {
      if (VAR_11 & VAR_3)
        VAR_17 = FUNC_2(VAR_8, (const char *)(FUNC_4( &VAR_12.pRun->member.run, VAR_12.nOffset )),
                                   sizeof(WCHAR) * VAR_13);
      else {
        int VAR_19;

        VAR_19 = FUNC_3(VAR_14, 0, FUNC_4( &VAR_12.pRun->member.run, VAR_12.nOffset ),
                                    VAR_13, ((void*)0), 0, ((void*)0), ((void*)0));
        if (VAR_19 > VAR_16) {
          VAR_15 = FUNC_6(VAR_15, VAR_19);
          VAR_16 = VAR_19;
        }
        FUNC_3(VAR_14, 0, FUNC_4( &VAR_12.pRun->member.run, VAR_12.nOffset ),
                            VAR_13, VAR_15, VAR_19, ((void*)0), ((void*)0));
        VAR_17 = FUNC_2(VAR_8, VAR_15, VAR_19);
      }
    }

    VAR_10 -= VAR_13;
    VAR_12.nOffset = 0;
    VAR_12.pRun = FUNC_1(VAR_12.pRun, VAR_6);
  }

  FUNC_5(VAR_15);
  return VAR_17;
}
