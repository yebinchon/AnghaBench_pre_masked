
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_2__ {scalar_t__ server_hashvalue; scalar_t__ mapping_hashvalue; int invalidated; int * conn; } ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;
typedef TYPE_1__ ConnCacheEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(Datum VAR_3, int VAR_4, uint32 VAR_5)
{
 HASH_SEQ_STATUS VAR_6;
 ConnCacheEntry *VAR_7;

 FUNC_0(VAR_4 == VAR_1 || VAR_4 == VAR_2);


 FUNC_1(&VAR_6, VAR_0);
 while ((VAR_7 = (ConnCacheEntry *) FUNC_2(&VAR_6)))
 {

  if (VAR_7->conn == ((void*)0))
   continue;


  if (VAR_5 == 0 ||
   (VAR_4 == VAR_1 &&
    VAR_7->server_hashvalue == VAR_5) ||
   (VAR_4 == VAR_2 &&
    VAR_7->mapping_hashvalue == VAR_5))
   VAR_7->invalidated = 1;
 }
}
