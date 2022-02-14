
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * conn; } ;
typedef TYPE_1__ ConnCacheEntry ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(ConnCacheEntry *VAR_0)
{
 if (VAR_0->conn != ((void*)0))
 {
  FUNC_0(VAR_0->conn);
  VAR_0->conn = ((void*)0);
 }
}
