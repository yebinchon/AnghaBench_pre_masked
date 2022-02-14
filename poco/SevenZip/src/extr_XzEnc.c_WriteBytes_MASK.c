
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_4__ {scalar_t__ (* Write ) (TYPE_1__*,void const*,scalar_t__) ;} ;
typedef int SRes ;
typedef TYPE_1__ ISeqOutStream ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,void const*,scalar_t__) ;

__attribute__((used)) static SRes FUNC_1(ISeqOutStream *VAR_2, const void *VAR_3, UInt32 VAR_4)
{
  return (VAR_2->Write(VAR_2, VAR_3, VAR_4) == VAR_4) ? VAR_1 : VAR_0;
}
