
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int OF; scalar_t__ gzOut; } ;
struct TYPE_5__ {int OF; scalar_t__ gzOut; } ;
typedef TYPE_1__ OutputContext ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_0, OutputContext VAR_1)
{
 int VAR_2;

 if (VAR_0->gzOut)
  VAR_2 = FUNC_0(VAR_0->OF);
 else
  VAR_2 = FUNC_2(VAR_0->OF);

 if (VAR_2 != 0)
  FUNC_1("could not close output file: %m");

 VAR_0->gzOut = VAR_1.gzOut;
 VAR_0->OF = VAR_1.OF;
}
