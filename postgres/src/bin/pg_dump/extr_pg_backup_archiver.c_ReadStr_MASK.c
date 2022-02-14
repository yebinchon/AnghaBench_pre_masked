
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* ReadBufPtr ) (TYPE_1__*,void*,int) ;} ;
typedef TYPE_1__ ArchiveHandle ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,void*,int) ;

char *
FUNC_3(ArchiveHandle *VAR_0)
{
 char *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  VAR_1 = ((void*)0);
 else
 {
  VAR_1 = (char *) FUNC_1(VAR_2 + 1);
  VAR_0->ReadBufPtr(VAR_0, (void *) VAR_1, VAR_2);

  VAR_1[VAR_2] = '\0';
 }

 return VAR_1;
}
