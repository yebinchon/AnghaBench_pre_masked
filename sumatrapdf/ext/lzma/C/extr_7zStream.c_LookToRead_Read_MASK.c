
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Read ) (TYPE_2__*,void*,size_t*) ;} ;
struct TYPE_3__ {size_t size; size_t pos; size_t buf; TYPE_2__* realStream; } ;
typedef int SRes ;
typedef TYPE_1__ CLookToRead ;


 int VAR_0 ;
 int FUNC_0 (void*,size_t,size_t) ;
 int FUNC_1 (TYPE_2__*,void*,size_t*) ;

__attribute__((used)) static SRes FUNC_2(void *VAR_1, void *VAR_2, size_t *VAR_3)
{
  CLookToRead *VAR_4 = (CLookToRead *)VAR_1;
  size_t VAR_5 = VAR_4->size - VAR_4->pos;
  if (VAR_5 == 0)
    return VAR_4->realStream->Read(VAR_4->realStream, VAR_2, VAR_3);
  if (VAR_5 > *VAR_3)
    VAR_5 = *VAR_3;
  FUNC_0(VAR_2, VAR_4->buf + VAR_4->pos, VAR_5);
  VAR_4->pos += VAR_5;
  *VAR_3 = VAR_5;
  return VAR_0;
}
