
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int relname; } ;
typedef TYPE_1__ RangeVar ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int,int) ;

Oid
FUNC_5(RangeVar *VAR_7, int VAR_8, bool VAR_9)
{
 Oid VAR_10;
 bool VAR_11;


 VAR_10 = FUNC_0(VAR_7,
            VAR_9 ? VAR_6 : VAR_5,
            0,
            VAR_4, ((void*)0));

 if (VAR_9)
 {
  VAR_11 = FUNC_1(VAR_10, VAR_8);

  if (!VAR_11)
   FUNC_2(VAR_0,
     (FUNC_3("table \"%s\" has no indexes that can be reindexed concurrently",
       VAR_7->relname)));
 }
 else
 {
  VAR_11 = FUNC_4(VAR_10,
          VAR_3 |
          VAR_2,
          VAR_8 | VAR_1);
  if (!VAR_11)
   FUNC_2(VAR_0,
     (FUNC_3("table \"%s\" has no indexes to reindex",
       VAR_7->relname)));
 }

 return VAR_10;
}
