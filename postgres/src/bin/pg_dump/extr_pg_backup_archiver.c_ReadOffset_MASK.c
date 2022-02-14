
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int pgoff_t ;
struct TYPE_7__ {scalar_t__ version; int (* ReadBytePtr ) (TYPE_1__*) ;int offSize; } ;
typedef TYPE_1__ ArchiveHandle ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(ArchiveHandle *VAR_1, pgoff_t * VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;


 *VAR_2 = 0;


 if (VAR_1->version < VAR_0)
 {

  VAR_3 = FUNC_0(VAR_1);

  if (VAR_3 < 0)
   return 129;
  else if (VAR_3 == 0)
   return 130;


  *VAR_2 = (pgoff_t) VAR_3;
  return 128;
 }
 VAR_5 = VAR_1->ReadBytePtr(VAR_1) & 0xFF;

 switch (VAR_5)
 {
  case 129:
  case 130:
  case 128:

   break;

  default:
   FUNC_1("unexpected data offset flag %d", VAR_5);
 }




 for (VAR_4 = 0; VAR_4 < VAR_1->offSize; VAR_4++)
 {
  if (VAR_4 < sizeof(pgoff_t))
   *VAR_2 |= ((pgoff_t) (VAR_1->ReadBytePtr(VAR_1))) << (VAR_4 * 8);
  else
  {
   if (VAR_1->ReadBytePtr(VAR_1) != 0)
    FUNC_1("file offset in dump file is too large");
  }
 }

 return VAR_5;
}
