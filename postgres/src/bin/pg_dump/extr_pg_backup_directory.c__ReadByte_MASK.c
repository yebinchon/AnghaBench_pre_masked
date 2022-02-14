
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dataFH; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_5__ {scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(ArchiveHandle *VAR_0)
{
 lclContext *VAR_1 = (lclContext *) VAR_0->formatData;

 return FUNC_0(VAR_1->dataFH);
}
