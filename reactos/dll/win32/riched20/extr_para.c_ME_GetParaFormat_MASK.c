
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {int cbSize; int dwMask; } ;
struct TYPE_9__ {TYPE_3__ fmt; } ;
struct TYPE_10__ {TYPE_1__ para; } ;
struct TYPE_12__ {TYPE_2__ member; } ;
typedef TYPE_3__ PARAFORMAT2 ;
typedef int ME_TextEditor ;
typedef TYPE_4__ ME_DisplayItem ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(ME_TextEditor *VAR_1,
                             const ME_DisplayItem *VAR_2,
                             PARAFORMAT2 *VAR_3)
{
  UINT VAR_4 = VAR_3->cbSize;
  if (VAR_3->cbSize >= sizeof(PARAFORMAT2)) {
    *VAR_3 = VAR_2->member.para.fmt;
  } else {
    FUNC_0(VAR_3, &VAR_2->member.para.fmt, VAR_3->cbSize);
    VAR_3->dwMask &= VAR_0;
  }
  VAR_3->cbSize = VAR_4;
}
