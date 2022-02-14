
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ name; } ;
struct TYPE_7__ {char* name; TYPE_1__* hash; TYPE_4__** options; } ;
struct TYPE_6__ {int hash_count; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,int ,unsigned char*) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 () ;
 TYPE_1__ VAR_3 ;

void FUNC_3()
{
 int VAR_4;

 VAR_2.name = "dhcp";
 VAR_2.hash = FUNC_2 ();
 if (!VAR_2.hash)
  FUNC_1 ("Can't allocate dhcp option hash table.");
 for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
  VAR_2.options [VAR_4] = &VAR_1 [VAR_4];
  FUNC_0 (VAR_2.hash,
     (unsigned char *)VAR_1 [VAR_4].name, 0,
     (unsigned char *)&VAR_1 [VAR_4]);
 }
 VAR_3.hash_count = VAR_0;
 FUNC_0 (&VAR_3,
    (unsigned char *)VAR_2.name, 0,
    (unsigned char *)&VAR_2);
}
