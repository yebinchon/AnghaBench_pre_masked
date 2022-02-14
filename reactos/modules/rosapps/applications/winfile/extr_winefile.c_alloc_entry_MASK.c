
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hicon; int * folder; int * pidl; } ;
typedef TYPE_1__ Entry ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static Entry* FUNC_2(void)
{
 Entry* VAR_0 = FUNC_1(FUNC_0(), 0, sizeof(Entry));

 VAR_0->pidl = ((void*)0);
 VAR_0->folder = ((void*)0);
 VAR_0->hicon = 0;

 return VAR_0;
}
