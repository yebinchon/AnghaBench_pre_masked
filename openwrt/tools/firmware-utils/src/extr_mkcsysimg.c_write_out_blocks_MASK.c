
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csys_block {scalar_t__ type; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct csys_block*) ;
 struct csys_block* VAR_1 ;
 struct csys_block* VAR_2 ;
 struct csys_block* VAR_3 ;
 struct csys_block* VAR_4 ;
 int VAR_5 ;
 struct csys_block* VAR_6 ;

int
FUNC_1(FILE *VAR_7)
{
 struct csys_block *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_2);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_3);
 if (VAR_10)
  return VAR_10;

 VAR_10 = 0;
 for (VAR_9=0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8 = &VAR_1[VAR_9];

  if (VAR_8->type != VAR_0)
   continue;

  VAR_10 = FUNC_0(VAR_7, VAR_8);
  if (VAR_10)
   break;
 }

 return VAR_10;
}
