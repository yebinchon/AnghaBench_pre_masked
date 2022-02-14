
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* WriteBufPtr ) (TYPE_1__*,char const*,int) ;} ;
typedef TYPE_1__ ArchiveHandle ;


 size_t FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,char const*,int) ;

size_t
FUNC_3(ArchiveHandle *VAR_0, const char *VAR_1)
{
 size_t VAR_2;

 if (VAR_1)
 {
  int VAR_3 = FUNC_1(VAR_1);

  VAR_2 = FUNC_0(VAR_0, VAR_3);
  VAR_0->WriteBufPtr(VAR_0, VAR_1, VAR_3);
  VAR_2 += VAR_3;
 }
 else
  VAR_2 = FUNC_0(VAR_0, -1);

 return VAR_2;
}
