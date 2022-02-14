
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int tableoid; int oid; } ;
struct TYPE_9__ {int tableoid; int oid; } ;
struct TYPE_10__ {TYPE_1__ catId; } ;
typedef TYPE_2__ DumpableObject ;
typedef TYPE_3__ CatalogId ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__***,int*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,int,int,int ) ;

DumpableObject *
FUNC_4(CatalogId VAR_4)
{
 DumpableObject **VAR_5;
 DumpableObject **VAR_6;

 if (!VAR_2)
 {
  if (VAR_1)
   FUNC_0(VAR_1);
  FUNC_1(&VAR_1, &VAR_3);
  if (VAR_3 > 1)
   FUNC_3((void *) VAR_1, VAR_3,
      sizeof(DumpableObject *), VAR_0);
  VAR_2 = 1;
 }






 if (VAR_3 <= 0)
  return ((void*)0);
 VAR_5 = VAR_1;
 VAR_6 = VAR_1 + (VAR_3 - 1);
 while (VAR_5 <= VAR_6)
 {
  DumpableObject **VAR_7;
  int VAR_8;

  VAR_7 = VAR_5 + (VAR_6 - VAR_5) / 2;

  VAR_8 = FUNC_2((*VAR_7)->catId.oid, VAR_4.oid);
  if (VAR_8 == 0)
   VAR_8 = FUNC_2((*VAR_7)->catId.tableoid, VAR_4.tableoid);
  if (VAR_8 == 0)
   return *VAR_7;
  else if (VAR_8 < 0)
   VAR_5 = VAR_7 + 1;
  else
   VAR_6 = VAR_7 - 1;
 }
 return ((void*)0);
}
