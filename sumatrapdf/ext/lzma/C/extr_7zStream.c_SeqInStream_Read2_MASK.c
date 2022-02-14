
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* Read ) (TYPE_1__*,void*,size_t*) ;} ;
typedef int SRes ;
typedef TYPE_1__ ISeqInStream ;
typedef int Byte ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,void*,size_t*) ;

SRes FUNC_2(ISeqInStream *VAR_1, void *VAR_2, size_t VAR_3, SRes VAR_4)
{
  while (VAR_3 != 0)
  {
    size_t VAR_5 = VAR_3;
    FUNC_0(VAR_1->Read(VAR_1, VAR_2, &VAR_5));
    if (VAR_5 == 0)
      return VAR_4;
    VAR_2 = (void *)((Byte *)VAR_2 + VAR_5);
    VAR_3 -= VAR_5;
  }
  return VAR_0;
}
