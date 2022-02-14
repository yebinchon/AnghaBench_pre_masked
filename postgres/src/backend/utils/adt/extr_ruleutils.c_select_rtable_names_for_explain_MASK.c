
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dpns ;
struct TYPE_4__ {int * rtable_names; int ctes; int * rtable; } ;
typedef TYPE_1__ deparse_namespace ;
typedef int List ;
typedef int Bitmapset ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;

List *
FUNC_2(List *VAR_1, Bitmapset *VAR_2)
{
 deparse_namespace VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.rtable = VAR_1;
 VAR_3.ctes = VAR_0;
 FUNC_1(&VAR_3, VAR_0, VAR_2);


 return VAR_3.rtable_names;
}
