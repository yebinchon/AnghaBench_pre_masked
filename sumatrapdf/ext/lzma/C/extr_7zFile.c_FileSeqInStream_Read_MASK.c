
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file; } ;
typedef int SRes ;
typedef TYPE_1__ CFileSeqInStream ;


 scalar_t__ FUNC_0 (int *,void*,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static SRes FUNC_1(void *VAR_2, void *VAR_3, size_t *VAR_4)
{
  CFileSeqInStream *VAR_5 = (CFileSeqInStream *)VAR_2;
  return FUNC_0(&VAR_5->file, VAR_3, VAR_4) == 0 ? VAR_1 : VAR_0;
}
