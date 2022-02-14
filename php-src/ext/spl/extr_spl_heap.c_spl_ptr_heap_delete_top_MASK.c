
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; scalar_t__ (* cmp ) (void*,void*,void*) ;int flags; int (* dtor ) (void*) ;} ;
typedef TYPE_1__ spl_ptr_heap ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,void*,void*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*,void*,void*) ;
 scalar_t__ FUNC_5 (void*,void*,void*) ;

__attribute__((used)) static int FUNC_6(spl_ptr_heap *VAR_4, void *VAR_5, void *VAR_6) {
 int VAR_7, VAR_8;
 const int VAR_9 = (VAR_4->count-1)/2;
 void *VAR_10;

 if (VAR_4->count == 0) {
  return VAR_0;
 }

 if (VAR_5) {
  FUNC_2(VAR_4, VAR_5, FUNC_1(VAR_4, 0));
 } else {
  VAR_4->dtor(FUNC_1(VAR_4, 0));
 }

 VAR_10 = FUNC_1(VAR_4, --VAR_4->count);

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7 = VAR_8) {

  VAR_8 = VAR_7 * 2 + 1;
  if (VAR_8 != VAR_4->count && VAR_4->cmp(FUNC_1(VAR_4, VAR_8+1), FUNC_1(VAR_4, VAR_8), VAR_6) > 0) {
   VAR_8++;
  }


  if(VAR_4->cmp(VAR_10, FUNC_1(VAR_4, VAR_8), VAR_6) < 0) {
   FUNC_2(VAR_4, FUNC_1(VAR_4, VAR_7), FUNC_1(VAR_4, VAR_8));
  } else {
   break;
  }
 }

 if (FUNC_0(VAR_3)) {

  VAR_4->flags |= VAR_1;
 }

 FUNC_2(VAR_4, FUNC_1(VAR_4, VAR_7), VAR_10);
 return VAR_2;
}
