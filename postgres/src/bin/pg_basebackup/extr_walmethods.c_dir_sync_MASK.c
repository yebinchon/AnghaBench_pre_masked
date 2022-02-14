
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * Walfile ;
struct TYPE_4__ {scalar_t__ compression; int sync; } ;
struct TYPE_3__ {int fd; int gzfp; } ;
typedef TYPE_1__ DirectoryMethodFile ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(Walfile VAR_3)
{
 FUNC_0(VAR_3 != ((void*)0));

 if (!VAR_2->sync)
  return 0;
 return FUNC_1(((DirectoryMethodFile *) VAR_3)->fd);
}
