
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_34__ {int y; } ;
struct TYPE_35__ {int nHeight; TYPE_7__ pt; } ;
struct TYPE_32__ {int y; } ;
struct TYPE_33__ {int nHeight; int nFlags; TYPE_5__ pt; TYPE_12__* next_para; } ;
struct TYPE_36__ {TYPE_8__ row; TYPE_6__ para; } ;
struct TYPE_31__ {scalar_t__ top; scalar_t__ left; } ;
struct TYPE_28__ {TYPE_12__* next_para; } ;
struct TYPE_29__ {TYPE_1__ para; } ;
struct TYPE_30__ {TYPE_2__ member; } ;
struct TYPE_27__ {scalar_t__ type; TYPE_9__ member; } ;
struct TYPE_26__ {TYPE_10__* pBuffer; TYPE_4__ rcFormat; } ;
struct TYPE_25__ {TYPE_12__* pLast; TYPE_3__* pFirst; } ;
typedef TYPE_11__ ME_TextEditor ;
typedef TYPE_12__ ME_DisplayItem ;
typedef int ME_Cursor ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_12__* FUNC_0 (TYPE_12__*,scalar_t__) ;
 TYPE_12__* FUNC_1 (TYPE_12__*,scalar_t__) ;
 TYPE_12__* FUNC_2 (int,int,TYPE_12__*) ;
 scalar_t__ FUNC_3 (TYPE_11__*,TYPE_12__*,int,int *,int*) ;
 TYPE_12__* FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (TYPE_11__*,int *,int) ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static BOOL FUNC_7(ME_TextEditor *VAR_5, int VAR_6, int VAR_7,
                            ME_Cursor *VAR_8, BOOL *VAR_9, BOOL VAR_10)
{
  ME_DisplayItem *VAR_11 = VAR_5->pBuffer->pFirst->member.para.next_para;
  BOOL VAR_12 = VAR_2;

  VAR_6 -= VAR_5->rcFormat.left;
  VAR_7 -= VAR_5->rcFormat.top;

  if (VAR_9)
    *VAR_9 = VAR_0;


  for (; VAR_11 != VAR_5->pBuffer->pLast; VAR_11 = VAR_11->member.para.next_para)
  {
    FUNC_6(VAR_11->type == VAR_3);
    if (VAR_7 < VAR_11->member.para.pt.y + VAR_11->member.para.nHeight)
    {
      if (VAR_11->member.para.nFlags & VAR_1)
        VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_11);
      VAR_7 -= VAR_11->member.para.pt.y;
      VAR_11 = FUNC_1(VAR_11, VAR_4);
      break;
    } else if (VAR_11->member.para.nFlags & VAR_1) {
      VAR_11 = FUNC_4(VAR_11);
    }
  }

  for (; VAR_11 != VAR_5->pBuffer->pLast; )
  {
    ME_DisplayItem *VAR_13;
    FUNC_6(VAR_11->type == VAR_4);
    if (VAR_7 < VAR_11->member.row.pt.y + VAR_11->member.row.nHeight) break;
    VAR_13 = FUNC_1(VAR_11, VAR_4);
    if (!VAR_13) break;
    VAR_11 = VAR_13;
  }
  if (VAR_11 == VAR_5->pBuffer->pLast && !VAR_10)
  {



    VAR_12 = VAR_0;
    VAR_11 = FUNC_0(VAR_11, VAR_4);
    if (!VAR_11) VAR_11 = VAR_5->pBuffer->pLast;
  }

  FUNC_6( VAR_11->type == VAR_4 || VAR_11 == VAR_5->pBuffer->pLast );

  if( VAR_11->type == VAR_4 )
      return FUNC_3( VAR_5, VAR_11, VAR_6, VAR_8, VAR_9 ) && VAR_12;

  FUNC_5(VAR_5, VAR_8, VAR_2);
  return VAR_0;
}
