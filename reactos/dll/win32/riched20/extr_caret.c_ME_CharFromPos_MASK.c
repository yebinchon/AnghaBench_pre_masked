
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nPos; } ;
struct TYPE_8__ {scalar_t__ nPos; } ;
struct TYPE_11__ {TYPE_2__ vert_si; TYPE_1__ horz_si; int texthost; } ;
struct TYPE_10__ {int right; int bottom; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ ME_TextEditor ;
typedef int ME_Cursor ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int,int,int *,int *,int ) ;
 int VAR_1 ;

BOOL FUNC_2(ME_TextEditor *VAR_2, int VAR_3, int VAR_4,
                    ME_Cursor *VAR_5, BOOL *VAR_6)
{
  RECT VAR_7;
  BOOL VAR_8;

  FUNC_0(VAR_2->texthost, &VAR_7);
  if (VAR_3 < 0 || VAR_4 < 0 || VAR_3 >= VAR_7.right || VAR_4 >= VAR_7.bottom) {
    if (VAR_6) *VAR_6 = VAR_0;
    return VAR_0;
  }
  VAR_3 += VAR_2->horz_si.nPos;
  VAR_4 += VAR_2->vert_si.nPos;
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0), VAR_0);
  if (VAR_6) *VAR_6 = VAR_8;
  return VAR_1;
}
