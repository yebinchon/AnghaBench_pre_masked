
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ OF; scalar_t__ gzOut; int (* ClosePtr ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(Archive *VAR_1)
{
 int VAR_2 = 0;
 ArchiveHandle *VAR_3 = (ArchiveHandle *) VAR_1;

 VAR_3->ClosePtr(VAR_3);


 if (VAR_3->gzOut)
  VAR_2 = FUNC_0(VAR_3->OF);
 else if (VAR_3->OF != VAR_0)
  VAR_2 = FUNC_2(VAR_3->OF);

 if (VAR_2 != 0)
  FUNC_1("could not close output file: %m");
}
