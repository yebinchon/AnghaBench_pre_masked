
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int MaxCharSize; } ;
struct TYPE_9__ {int flags; int codepage; } ;
struct TYPE_8__ {int styleFlags; int nParagraphs; int bEmulateVersion10; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef TYPE_2__ GETTEXTLENGTHEX ;
typedef TYPE_3__ CPINFO ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(ME_TextEditor *VAR_7, const GETTEXTLENGTHEX *VAR_8)
{
  int VAR_9;

  if (VAR_8->flags & VAR_5 && VAR_8->flags & VAR_2)
    return VAR_1;
  if (VAR_8->flags & VAR_4 && VAR_8->flags & VAR_3)
    return VAR_1;

  VAR_9 = FUNC_3(VAR_7);

  if ((VAR_7->styleFlags & VAR_0)
        && (VAR_8->flags & VAR_6)
        && !VAR_7->bEmulateVersion10)
    VAR_9 += VAR_7->nParagraphs - 1;

  if (VAR_8->flags & VAR_3 ||
      (VAR_8->flags & VAR_5 &&
       !(VAR_8->flags & VAR_4)))
  {
    CPINFO VAR_10;

    if (VAR_8->codepage == 1200)
      return VAR_9 * 2;
    if (VAR_8->flags & VAR_5)
      FUNC_1("GTL_PRECISE flag unsupported. Using GTL_CLOSE\n");
    if (FUNC_2(VAR_8->codepage, &VAR_10))
      return VAR_9 * VAR_10.MaxCharSize;
    FUNC_0("Invalid codepage %u\n", VAR_8->codepage);
    return VAR_1;
  }
  return VAR_9;
}
