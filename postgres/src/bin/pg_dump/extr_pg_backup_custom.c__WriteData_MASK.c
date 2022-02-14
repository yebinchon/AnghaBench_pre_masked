
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * cs; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_6__ {scalar_t__ formatData; } ;
typedef int CompressorState ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (TYPE_2__*,int *,void const*,size_t) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_0, const void *VAR_1, size_t VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_0->formatData;
 CompressorState *VAR_4 = VAR_3->cs;

 if (VAR_2 > 0)

  FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2);

 return;
}
