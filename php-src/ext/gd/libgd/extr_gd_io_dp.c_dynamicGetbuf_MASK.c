
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gdIOCtxPtr ;
struct TYPE_3__ {int logicalSize; int pos; scalar_t__ data; } ;
typedef TYPE_1__ dynamicPtr ;
typedef TYPE_2__* dpIOCtxPtr ;
struct TYPE_4__ {TYPE_1__* dp; } ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,int) ;

__attribute__((used)) static int FUNC_1 (gdIOCtxPtr VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 dpIOCtxPtr VAR_6;
 dynamicPtr *VAR_7;

 VAR_6 = (dpIOCtxPtr) VAR_1;
 VAR_7 = VAR_6->dp;

 VAR_5 = VAR_7->logicalSize - VAR_7->pos;
 if (VAR_5 >= VAR_3) {
  VAR_4 = VAR_3;
 } else {
  if (VAR_5 <= 0) {
   return VAR_0;
  }
  VAR_4 = VAR_5;
 }

 FUNC_0(VAR_2, (void *) ((char *) VAR_7->data + VAR_7->pos), VAR_4);
 VAR_7->pos += VAR_4;

 return VAR_4;
}
