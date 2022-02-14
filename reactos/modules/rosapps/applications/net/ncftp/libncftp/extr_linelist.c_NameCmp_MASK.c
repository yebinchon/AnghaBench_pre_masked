
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relname; } ;
typedef TYPE_1__* FileInfoPtr ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 FileInfoPtr *VAR_2, *VAR_3;

 VAR_2 = (FileInfoPtr *) VAR_0;
 VAR_3 = (FileInfoPtr *) VAR_1;



 return (FUNC_0((**VAR_2).relname, (**VAR_3).relname));

}
