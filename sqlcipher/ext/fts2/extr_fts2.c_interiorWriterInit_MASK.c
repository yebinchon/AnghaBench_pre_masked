
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* sqlite_int64 ;
struct TYPE_4__ {int iHeight; int term; int * last; int * first; void* iLastChildBlock; void* iOpeningChildBlock; } ;
typedef TYPE_1__ InteriorWriter ;
typedef int InteriorBlock ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int,void*,char const*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_0, const char *VAR_1, int VAR_2,
                               sqlite_int64 VAR_3,
                               InteriorWriter *VAR_4){
  InteriorBlock *VAR_5;
  FUNC_2( VAR_0>0 );
  FUNC_1(VAR_4);

  VAR_4->iHeight = VAR_0;
  VAR_4->iOpeningChildBlock = VAR_3;

  VAR_4->iLastChildBlock = VAR_3;

  VAR_5 = FUNC_4(VAR_0, VAR_3, VAR_1, VAR_2);
  VAR_4->last = VAR_4->first = VAR_5;
  FUNC_0(VAR_4->last);
  FUNC_3(&VAR_4->term, 0);
}
