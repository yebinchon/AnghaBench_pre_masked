
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int currToc; int (* StartBlobPtr ) (TYPE_1__*,int ,int ) ;} ;
typedef int Oid ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

int
FUNC_2(Archive *VAR_0, Oid VAR_1)
{
 ArchiveHandle *VAR_2 = (ArchiveHandle *) VAR_0;

 if (!VAR_2->StartBlobPtr)
  FUNC_0("large-object output not supported in chosen format");

 VAR_2->StartBlobPtr(VAR_2, VAR_2->currToc, VAR_1);

 return 1;
}
