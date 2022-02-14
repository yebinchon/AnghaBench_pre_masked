
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int remoteConnHashEnt ;
struct TYPE_3__ {int entrysize; int keysize; } ;
typedef int HTAB ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,int ,TYPE_1__*,int ) ;

__attribute__((used)) static HTAB *
FUNC_1(void)
{
 HASHCTL VAR_3;

 VAR_3.keysize = VAR_1;
 VAR_3.entrysize = sizeof(remoteConnHashEnt);

 return FUNC_0("Remote Con hash", VAR_2, &VAR_3, VAR_0);
}
