
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct call_entry {int column; int line; } ;
typedef int ISAXLocator ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct call_entry*,int ,int) ;

__attribute__((used)) static void FUNC_3(ISAXLocator *VAR_0, struct call_entry *VAR_1)
{
    FUNC_2(VAR_1, 0, sizeof(*VAR_1));
    FUNC_1(VAR_0, &VAR_1->line);
    FUNC_0(VAR_0, &VAR_1->column);
}
