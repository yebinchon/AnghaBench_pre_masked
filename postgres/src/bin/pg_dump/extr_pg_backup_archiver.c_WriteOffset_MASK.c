
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pgoff_t ;
struct TYPE_5__ {int (* WriteBytePtr ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ ArchiveHandle ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

size_t
FUNC_2(ArchiveHandle *VAR_0, pgoff_t VAR_1, int VAR_2)
{
 int VAR_3;


 VAR_0->WriteBytePtr(VAR_0, VAR_2);


 for (VAR_3 = 0; VAR_3 < sizeof(pgoff_t); VAR_3++)
 {
  VAR_0->WriteBytePtr(VAR_0, VAR_1 & 0xFF);
  VAR_1 >>= 8;
 }
 return sizeof(pgoff_t) + 1;
}
