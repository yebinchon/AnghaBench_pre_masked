
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int intSize; int (* WriteBytePtr ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ ArchiveHandle ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

size_t
FUNC_3(ArchiveHandle *VAR_0, int VAR_1)
{
 int VAR_2;
 if (VAR_1 < 0)
 {
  VAR_0->WriteBytePtr(VAR_0, 1);
  VAR_1 = -VAR_1;
 }
 else
  VAR_0->WriteBytePtr(VAR_0, 0);

 for (VAR_2 = 0; VAR_2 < VAR_0->intSize; VAR_2++)
 {
  VAR_0->WriteBytePtr(VAR_0, VAR_1 & 0xFF);
  VAR_1 >>= 8;
 }

 return VAR_0->intSize + 1;
}
