
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int parentMap; } ;
struct TYPE_5__ {int keysize; int entrysize; int hcxt; } ;
typedef int ParentMapEntry ;
typedef TYPE_1__ HASHCTL ;
typedef TYPE_2__ GISTBuildState ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(GISTBuildState *VAR_4)
{
 HASHCTL VAR_5;

 VAR_5.keysize = sizeof(BlockNumber);
 VAR_5.entrysize = sizeof(ParentMapEntry);
 VAR_5.hcxt = VAR_0;
 VAR_4->parentMap = FUNC_0("gistbuild parent map",
          1024,
          &VAR_5,
          VAR_3 | VAR_1 | VAR_2);
}
