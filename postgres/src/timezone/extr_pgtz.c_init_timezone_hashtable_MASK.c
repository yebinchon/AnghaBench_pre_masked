
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pg_tz_cache ;
typedef int hash_ctl ;
struct TYPE_4__ {int entrysize; scalar_t__ keysize; } ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,TYPE_1__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_2(void)
{
 HASHCTL VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.keysize = VAR_1 + 1;
 VAR_3.entrysize = sizeof(pg_tz_cache);

 VAR_2 = FUNC_1("Timezones",
         4,
         &VAR_3,
         VAR_0);
 if (!VAR_2)
  return 0;

 return 1;
}
