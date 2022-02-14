
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ version; int (* ReadBytePtr ) (TYPE_1__*) ;int intSize; } ;
typedef TYPE_1__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(ArchiveHandle *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3,
    VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;

 if (VAR_1->version > VAR_0)

  VAR_5 = VAR_1->ReadBytePtr(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_1->intSize; VAR_4++)
 {
  VAR_3 = VAR_1->ReadBytePtr(VAR_1) & 0xFF;
  if (VAR_3 != 0)
   VAR_2 = VAR_2 + (VAR_3 << VAR_6);
  VAR_6 += 8;
 }

 if (VAR_5)
  VAR_2 = -VAR_2;

 return VAR_2;
}
