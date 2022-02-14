
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int LastWriteTime; int encoding; int * filename; int * section; int changed; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    FUNC_2();
    FUNC_3( VAR_0->section );
    FUNC_1( FUNC_0(), 0, VAR_0->filename );
    VAR_0->changed = VAR_2;
    VAR_0->section = ((void*)0);
    VAR_0->filename = ((void*)0);
    VAR_0->encoding = VAR_1;
    FUNC_4(&VAR_0->LastWriteTime, sizeof(VAR_0->LastWriteTime));
}
