
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t (* Write ) (TYPE_2__*,void const*,size_t) ;} ;
struct TYPE_3__ {size_t processed; TYPE_2__* realStream; } ;
typedef TYPE_1__ CSeqSizeOutStream ;


 size_t FUNC_0 (TYPE_2__*,void const*,size_t) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
  CSeqSizeOutStream *VAR_3 = (CSeqSizeOutStream *)VAR_0;
  VAR_2 = VAR_3->realStream->Write(VAR_3->realStream, VAR_1, VAR_2);
  VAR_3->processed += VAR_2;
  return VAR_2;
}
