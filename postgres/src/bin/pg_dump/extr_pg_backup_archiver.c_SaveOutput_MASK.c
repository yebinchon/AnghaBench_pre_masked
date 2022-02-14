
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int gzOut; int OF; } ;
struct TYPE_5__ {int gzOut; int OF; } ;
typedef TYPE_1__ OutputContext ;
typedef TYPE_2__ ArchiveHandle ;



__attribute__((used)) static OutputContext
FUNC_0(ArchiveHandle *VAR_0)
{
 OutputContext VAR_1;

 VAR_1.OF = VAR_0->OF;
 VAR_1.gzOut = VAR_0->gzOut;

 return VAR_1;
}
