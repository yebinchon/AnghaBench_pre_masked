
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int comprAlg; } ;
typedef TYPE_1__ CompressorState ;
typedef int ArchiveHandle ;




 int FUNC_0 (int *,TYPE_1__*,void const*,size_t) ;
 int FUNC_1 (int *,TYPE_1__*,void const*,size_t) ;
 int FUNC_2 (char*) ;

void
FUNC_3(ArchiveHandle *VAR_0, CompressorState *VAR_1,
       const void *VAR_2, size_t VAR_3)
{
 switch (VAR_1->comprAlg)
 {
  case 129:



   FUNC_2("not built with zlib support");

   break;
  case 128:
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
   break;
 }
 return;
}
