
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dwError; int dwCookie; scalar_t__ (* pfnCallback ) (int ,int ,scalar_t__,scalar_t__*) ;} ;
struct TYPE_4__ {scalar_t__ pos; int written; scalar_t__ buffer; TYPE_2__* stream; } ;
typedef TYPE_1__ ME_OutStream ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef TYPE_2__ EDITSTREAM ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static BOOL
FUNC_2(ME_OutStream *VAR_2)
{
  LONG VAR_3 = 0;
  EDITSTREAM *VAR_4 = VAR_2->stream;

  if (VAR_2->pos) {
    FUNC_0("sending %u bytes\n", VAR_2->pos);
    VAR_3 = VAR_2->pos;
    VAR_4->dwError = VAR_4->pfnCallback(VAR_4->dwCookie, (LPBYTE)VAR_2->buffer,
                                          VAR_2->pos, &VAR_3);
    FUNC_0("error=%u written=%u\n", VAR_4->dwError, VAR_3);
    if (VAR_3 == 0 || VAR_4->dwError)
      return VAR_0;

  }
  if (VAR_3 == VAR_2->pos)
      VAR_2->written += VAR_3;
  VAR_2->pos = 0;
  return VAR_1;
}
