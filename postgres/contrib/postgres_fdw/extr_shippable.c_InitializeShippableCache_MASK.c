
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int ShippableCacheKey ;
typedef int ShippableCacheEntry ;
typedef TYPE_1__ HASHCTL ;
typedef int Datum ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (char*,int,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
 HASHCTL VAR_5;


 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.keysize = sizeof(ShippableCacheKey);
 VAR_5.entrysize = sizeof(ShippableCacheEntry);
 VAR_4 =
  FUNC_2("Shippability cache", 256, &VAR_5, VAR_2 | VAR_1);


 FUNC_0(VAR_0,
          VAR_3,
          (Datum) 0);
}
