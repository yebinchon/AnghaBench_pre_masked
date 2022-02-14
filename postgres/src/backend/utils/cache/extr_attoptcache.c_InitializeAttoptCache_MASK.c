
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef TYPE_1__ HASHCTL ;
typedef int Datum ;
typedef int AttoptCacheKey ;
typedef int AttoptCacheEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,int,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(void)
{
 HASHCTL VAR_6;


 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.keysize = sizeof(AttoptCacheKey);
 VAR_6.entrysize = sizeof(AttoptCacheEntry);
 VAR_1 =
  FUNC_3("Attopt cache", 256, &VAR_6,
     VAR_4 | VAR_3);


 if (!VAR_2)
  FUNC_1();


 FUNC_0(VAR_0,
          VAR_5,
          (Datum) 0);
}
