
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int tableoid; int oid; } ;
struct TYPE_6__ {int tableoid; int oid; } ;
struct TYPE_7__ {int * ext; TYPE_1__ catId; } ;
typedef TYPE_2__ ExtensionMemberId ;
typedef int ExtensionInfo ;
typedef TYPE_3__ CatalogId ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

ExtensionInfo *
FUNC_1(CatalogId VAR_2)
{
 ExtensionMemberId *VAR_3;
 ExtensionMemberId *VAR_4;






 if (VAR_1 <= 0)
  return ((void*)0);
 VAR_3 = VAR_0;
 VAR_4 = VAR_0 + (VAR_1 - 1);
 while (VAR_3 <= VAR_4)
 {
  ExtensionMemberId *VAR_5;
  int VAR_6;

  VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;

  VAR_6 = FUNC_0(VAR_5->catId.oid, VAR_2.oid);
  if (VAR_6 == 0)
   VAR_6 = FUNC_0(VAR_5->catId.tableoid, VAR_2.tableoid);
  if (VAR_6 == 0)
   return VAR_5->ext;
  else if (VAR_6 < 0)
   VAR_3 = VAR_5 + 1;
  else
   VAR_4 = VAR_5 - 1;
 }
 return ((void*)0);
}
