
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int dummy; } ;
typedef scalar_t__ gboolean ;
typedef int GtkTreeIter ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,struct menu**,int) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static GtkTreeIter *FUNC_4(GtkTreeIter *VAR_2,
        struct menu *VAR_3)
{
 GtkTreeIter VAR_4;
 GtkTreeIter *VAR_5 = &VAR_4;
 gboolean VAR_6;
 GtkTreeIter *VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_2);
 while (VAR_6) {
  struct menu *VAR_8;

  FUNC_0(VAR_1, VAR_5, 6, &VAR_8, -1);

  if (VAR_8 == VAR_3) {
   FUNC_3(&VAR_0, VAR_5, sizeof(GtkTreeIter));
   return &VAR_0;
  }

  VAR_7 = FUNC_4(VAR_5, VAR_3);
  if (VAR_7)
   return VAR_7;

  VAR_6 = FUNC_2(VAR_1, VAR_5);
 }

 return ((void*)0);
}
