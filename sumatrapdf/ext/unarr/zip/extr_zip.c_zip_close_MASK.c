
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct TYPE_4__ {int uncomp; TYPE_1__ entry; } ;
typedef TYPE_2__ ar_archive_zip ;
typedef int ar_archive ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(ar_archive *VAR_0)
{
    ar_archive_zip *VAR_1 = (ar_archive_zip *)VAR_0;
    FUNC_0(VAR_1->entry.name);
    FUNC_1(&VAR_1->uncomp);
}
