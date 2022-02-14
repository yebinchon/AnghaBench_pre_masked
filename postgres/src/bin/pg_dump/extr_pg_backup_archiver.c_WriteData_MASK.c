
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* WriteDataPtr ) (TYPE_1__*,void const*,size_t) ;int currToc; } ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,void const*,size_t) ;

void
FUNC_2(Archive *VAR_0, const void *VAR_1, size_t VAR_2)
{
 ArchiveHandle *VAR_3 = (ArchiveHandle *) VAR_0;

 if (!VAR_3->currToc)
  FUNC_0("internal error -- WriteData cannot be called outside the context of a DataDumper routine");

 VAR_3->WriteDataPtr(VAR_3, VAR_1, VAR_2);

 return;
}
