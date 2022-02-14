
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t rem; size_t data; int overflow; } ;
typedef TYPE_1__ CSeqOutStreamBuf ;


 int VAR_0 ;
 int FUNC_0 (size_t,void const*,size_t) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1, const void *VAR_2, size_t VAR_3)
{
  CSeqOutStreamBuf *VAR_4 = (CSeqOutStreamBuf *)VAR_1;
  if (VAR_4->rem < VAR_3)
  {
    VAR_3 = VAR_4->rem;
    VAR_4->overflow = VAR_0;
  }
  FUNC_0(VAR_4->data, VAR_2, VAR_3);
  VAR_4->rem -= VAR_3;
  VAR_4->data += VAR_3;
  return VAR_3;
}
