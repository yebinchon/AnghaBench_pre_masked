
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pos; scalar_t__ fileLen; int AH; } ;
typedef TYPE_1__ TAR_MEMBER ;


 size_t FUNC_0 (int ,void*,size_t,TYPE_1__*,int *) ;

__attribute__((used)) static size_t
FUNC_1(void *VAR_0, size_t VAR_1, TAR_MEMBER *VAR_2)
{
 size_t VAR_3;

 if (VAR_2->pos + VAR_1 > VAR_2->fileLen)
  VAR_1 = VAR_2->fileLen - VAR_2->pos;

 if (VAR_1 <= 0)
  return 0;

 VAR_3 = FUNC_0(VAR_2->AH, VAR_0, VAR_1, VAR_2, ((void*)0));

 VAR_2->pos += VAR_3;

 return VAR_3;
}
