
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_11__ {int nData; } ;
struct TYPE_10__ {int nData; char const* pData; } ;
struct TYPE_9__ {TYPE_6__ data; struct TYPE_9__* next; } ;
struct TYPE_8__ {scalar_t__ iLastChildBlock; scalar_t__ iOpeningChildBlock; TYPE_3__* last; TYPE_4__ term; int iHeight; } ;
typedef TYPE_1__ InteriorWriter ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,char*,int,char const*,int) ;
 int FUNC_3 (TYPE_4__*,char const*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_3__* FUNC_5 (int ,scalar_t__,char const*,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7(InteriorWriter *VAR_3,
                                 const char *VAR_4, int VAR_5,
                                 sqlite_int64 VAR_6){
  char VAR_7[VAR_2+VAR_2];
  int VAR_8, VAR_9 = 0;

  FUNC_0(VAR_3->last);







  if( VAR_3->term.nData==0 ){
    VAR_8 = FUNC_6(VAR_7, VAR_5);
  }else{
    while( VAR_9<VAR_3->term.nData &&
           VAR_4[VAR_9]==VAR_3->term.pData[VAR_9] ){
      VAR_9++;
    }

    VAR_8 = FUNC_6(VAR_7, VAR_9);
    VAR_8 += FUNC_6(VAR_7+VAR_8, VAR_5-VAR_9);
  }


  VAR_3->iLastChildBlock++;

  FUNC_1( VAR_3->iLastChildBlock==VAR_6 );




  if( VAR_3->last->data.nData+VAR_8+VAR_5-VAR_9>VAR_0 &&
      VAR_6-VAR_3->iOpeningChildBlock>VAR_1 ){
    VAR_3->last->next = FUNC_5(VAR_3->iHeight, VAR_6,
                                           VAR_4, VAR_5);
    VAR_3->last = VAR_3->last->next;
    VAR_3->iOpeningChildBlock = VAR_6;
    FUNC_4(&VAR_3->term);
  }else{
    FUNC_2(&VAR_3->last->data, VAR_7, VAR_8,
                      VAR_4+VAR_9, VAR_5-VAR_9);
    FUNC_3(&VAR_3->term, VAR_4, VAR_5);
  }
  FUNC_0(VAR_3->last);
}
