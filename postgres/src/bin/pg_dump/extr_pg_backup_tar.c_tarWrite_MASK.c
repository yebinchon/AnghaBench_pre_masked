
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t pos; int nFH; int * zFH; } ;
typedef TYPE_1__ TAR_MEMBER ;


 size_t FUNC_0 (void const*,int,size_t,int *) ;
 size_t FUNC_1 (void const*,int,size_t,int ) ;

__attribute__((used)) static size_t
FUNC_2(const void *VAR_0, size_t VAR_1, TAR_MEMBER *VAR_2)
{
 size_t VAR_3;

 if (VAR_2->zFH != ((void*)0))
  VAR_3 = FUNC_0(VAR_0, 1, VAR_1, VAR_2->zFH);
 else
  VAR_3 = FUNC_1(VAR_0, 1, VAR_1, VAR_2->nFH);

 VAR_2->pos += VAR_3;
 return VAR_3;
}
