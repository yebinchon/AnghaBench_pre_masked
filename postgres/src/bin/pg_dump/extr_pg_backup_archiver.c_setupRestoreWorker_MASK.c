
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* ReopenPtr ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(Archive *VAR_0)
{
 ArchiveHandle *VAR_1 = (ArchiveHandle *) VAR_0;

 VAR_1->ReopenPtr(VAR_1);
}
