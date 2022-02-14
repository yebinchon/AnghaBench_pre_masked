
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {int nCharOfs; int nFlags; int len; } ;
struct TYPE_20__ {int nCharOfs; TYPE_9__* next_para; } ;
struct TYPE_22__ {TYPE_6__ run; TYPE_5__ para; } ;
struct TYPE_24__ {scalar_t__ type; TYPE_7__ member; } ;
struct TYPE_23__ {TYPE_4__* pBuffer; } ;
struct TYPE_19__ {TYPE_3__* pFirst; } ;
struct TYPE_16__ {TYPE_9__* next_para; } ;
struct TYPE_17__ {TYPE_1__ para; } ;
struct TYPE_18__ {TYPE_2__ member; } ;
typedef TYPE_8__ ME_TextEditor ;
typedef TYPE_9__ ME_DisplayItem ;


 int VAR_0 ;
 TYPE_9__* FUNC_0 (TYPE_9__*,scalar_t__) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;

void FUNC_5(ME_TextEditor *VAR_4,
                          int VAR_5,
                          ME_DisplayItem **VAR_6,
                          ME_DisplayItem **VAR_7,
                          int *VAR_8)
{
  ME_DisplayItem *VAR_9, *VAR_10;
  int VAR_11 = VAR_5, VAR_12 = FUNC_1(VAR_4);

  VAR_5 = FUNC_3(VAR_5, 0);
  VAR_5 = FUNC_4(VAR_5, VAR_12);


  VAR_10 = VAR_4->pBuffer->pFirst->member.para.next_para;
  do {
    VAR_9 = VAR_10;
    VAR_10 = VAR_9->member.para.next_para;
  } while (VAR_10->member.para.nCharOfs <= VAR_5);
  FUNC_2(VAR_9->type == VAR_1);
  VAR_5 -= VAR_9->member.para.nCharOfs;
  if (VAR_6) *VAR_6 = VAR_9;


  VAR_10 = FUNC_0(VAR_9, VAR_2);
  do {
    VAR_9 = VAR_10;
    VAR_10 = FUNC_0(VAR_9, VAR_3);
  } while (VAR_10->type == VAR_2 &&
           VAR_10->member.run.nCharOfs <= VAR_5);
  FUNC_2(VAR_9->type == VAR_2);
  VAR_5 -= VAR_9->member.run.nCharOfs;

  if (VAR_7) *VAR_7 = VAR_9;
  if (VAR_8) {
    if (((*VAR_7)->member.run.nFlags & VAR_0) && VAR_11 > VAR_12)
      *VAR_8 = (*VAR_7)->member.run.len;
    else *VAR_8 = VAR_5;
  }
}
