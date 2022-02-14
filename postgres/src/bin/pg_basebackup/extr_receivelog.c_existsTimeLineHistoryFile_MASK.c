
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int timeline; TYPE_1__* walmethod; } ;
struct TYPE_4__ {int (* existsfile ) (char*) ;} ;
typedef TYPE_2__ StreamCtl ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool
FUNC_2(StreamCtl *VAR_1)
{
 char VAR_2[VAR_0];





 if (VAR_1->timeline == 1)
  return 1;

 FUNC_0(VAR_2, VAR_1->timeline);

 return VAR_1->walmethod->existsfile(VAR_2);
}
