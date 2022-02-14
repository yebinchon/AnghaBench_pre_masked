
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ compression; } ;
struct TYPE_7__ {char mode; int * zFH; int * nFH; scalar_t__ targetFile; } ;
typedef TYPE_1__ TAR_MEMBER ;
typedef TYPE_2__ ArchiveHandle ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(ArchiveHandle *VAR_0, TAR_MEMBER *VAR_1)
{



 if (VAR_0->compression != 0)
  if (FUNC_0(VAR_1->zFH) != 0)
   FUNC_2("could not close tar member");

 if (VAR_1->mode == 'w')
  FUNC_1(VAR_0, VAR_1);






 if (VAR_1->targetFile)
  FUNC_3(VAR_1->targetFile);

 VAR_1->nFH = ((void*)0);
 VAR_1->zFH = ((void*)0);
}
