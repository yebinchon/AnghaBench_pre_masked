
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct head {scalar_t__ magic; scalar_t__ namesize; scalar_t__ filesize_1; scalar_t__ filesize_2; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (struct head *VAR_1)
{
  if (VAR_1->magic != VAR_0)
    {
      VAR_1->magic = FUNC_0 (VAR_1->magic);
      VAR_1->namesize = FUNC_0 (VAR_1->namesize);
      VAR_1->filesize_1 = FUNC_0 (VAR_1->filesize_1);
      VAR_1->filesize_2 = FUNC_0 (VAR_1->filesize_2);
    }
}
