
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ locked; scalar_t__ wantToLock; scalar_t__ sharable; TYPE_4__* db; TYPE_3__* pBt; TYPE_2__* pPrev; TYPE_1__* pNext; } ;
struct TYPE_11__ {int mutex; } ;
struct TYPE_10__ {TYPE_4__* db; } ;
struct TYPE_9__ {TYPE_4__* db; TYPE_3__* pBt; } ;
struct TYPE_8__ {TYPE_4__* db; TYPE_3__* pBt; } ;
typedef TYPE_5__ Btree ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(Btree *VAR_0){




  FUNC_0( VAR_0->pNext==0 || VAR_0->pNext->pBt>VAR_0->pBt );
  FUNC_0( VAR_0->pPrev==0 || VAR_0->pPrev->pBt<VAR_0->pBt );
  FUNC_0( VAR_0->pNext==0 || VAR_0->pNext->db==VAR_0->db );
  FUNC_0( VAR_0->pPrev==0 || VAR_0->pPrev->db==VAR_0->db );
  FUNC_0( VAR_0->sharable || (VAR_0->pNext==0 && VAR_0->pPrev==0) );


  FUNC_0( !VAR_0->locked || VAR_0->wantToLock>0 );
  FUNC_0( VAR_0->sharable || VAR_0->wantToLock==0 );


  FUNC_0( FUNC_2(VAR_0->db->mutex) );



  FUNC_0( (VAR_0->locked==0 && VAR_0->sharable) || VAR_0->pBt->db==VAR_0->db );

  if( !VAR_0->sharable ) return;
  VAR_0->wantToLock++;
  if( VAR_0->locked ) return;
  FUNC_1(VAR_0);
}
