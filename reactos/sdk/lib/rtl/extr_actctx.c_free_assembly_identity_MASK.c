
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assembly_identity {int type; int language; int public_key; int arch; int name; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct assembly_identity *VAR_0)
{
    FUNC_0( FUNC_1(), 0, VAR_0->name );
    FUNC_0( FUNC_1(), 0, VAR_0->arch );
    FUNC_0( FUNC_1(), 0, VAR_0->public_key );
    FUNC_0( FUNC_1(), 0, VAR_0->language );
    FUNC_0( FUNC_1(), 0, VAR_0->type );
}
