
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* extnodename; } ;
struct TYPE_6__ {int (* nodeRead ) (TYPE_2__*) ;int node_size; } ;
typedef TYPE_1__ ExtensibleNodeMethods ;
typedef TYPE_2__ ExtensibleNode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static ExtensibleNode *
FUNC_8(void)
{
 const ExtensibleNodeMethods *VAR_4;
 ExtensibleNode *VAR_5;
 const char *VAR_6;

 FUNC_2();

 VAR_3 = FUNC_6(&VAR_2);
 VAR_3 = FUNC_6(&VAR_2);

 VAR_6 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_6)
  FUNC_3(VAR_0, "extnodename has to be supplied");
 VAR_4 = FUNC_0(VAR_6, 0);

 VAR_5 = (ExtensibleNode *) FUNC_4(VAR_4->node_size,
           VAR_1);
 VAR_5->extnodename = VAR_6;


 VAR_4->nodeRead(VAR_5);

 FUNC_1();
}
