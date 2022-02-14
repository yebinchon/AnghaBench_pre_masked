
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* Read ) (TYPE_1__*,int *,size_t*) ;} ;
typedef int SRes ;
typedef TYPE_1__ ISeqInStream ;
typedef int Byte ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,size_t*) ;

SRes FUNC_2(ISeqInStream *VAR_2, Byte *VAR_3)
{
  size_t VAR_4 = 1;
  FUNC_0(VAR_2->Read(VAR_2, VAR_3, &VAR_4));
  return (VAR_4 == 1) ? VAR_1 : VAR_0;
}
