
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* varValue; } ;
typedef TYPE_1__ rendezvousHashEntry ;
typedef int ctl ;
struct TYPE_6__ {int entrysize; int keysize; } ;
typedef int HTAB ;
typedef TYPE_2__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_2 ;
 int * FUNC_1 (char*,int,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,int*) ;

void **
FUNC_3(const char *VAR_3)
{
 static HTAB *VAR_4 = ((void*)0);

 rendezvousHashEntry *VAR_5;
 bool VAR_6;


 if (VAR_4 == ((void*)0))
 {
  HASHCTL VAR_7;

  FUNC_0(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.keysize = VAR_2;
  VAR_7.entrysize = sizeof(rendezvousHashEntry);
  VAR_4 = FUNC_1("Rendezvous variable hash",
          16,
          &VAR_7,
          VAR_0);
 }


 VAR_5 = (rendezvousHashEntry *) FUNC_2(VAR_4,
             VAR_3,
             VAR_1,
             &VAR_6);


 if (!VAR_6)
  VAR_5->varValue = ((void*)0);

 return &VAR_5->varValue;
}
