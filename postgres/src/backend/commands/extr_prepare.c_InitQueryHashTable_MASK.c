
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_4__ {int entrysize; int keysize; } ;
typedef int PreparedStatement ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,TYPE_1__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 HASHCTL VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.keysize = VAR_1;
 VAR_3.entrysize = sizeof(PreparedStatement);

 VAR_2 = FUNC_1("Prepared Queries",
           32,
           &VAR_3,
           VAR_0);
}
