
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gdIOCtx ;
struct TYPE_3__ {int off; int reserved2; int reserved1; int size; int magic; } ;
typedef TYPE_1__ bmp_hdr_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(gdIOCtx *VAR_0, bmp_hdr_t *VAR_1)
{
 if(
     !FUNC_1(&VAR_1->magic, VAR_0) ||
     !FUNC_0(&VAR_1->size, VAR_0) ||
     !FUNC_1(&VAR_1->reserved1, VAR_0) ||
     !FUNC_1(&VAR_1->reserved2 , VAR_0) ||
     !FUNC_0(&VAR_1->off , VAR_0)
 ) {
  return 1;
 }
 return 0;
}
