
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enumerator {int pEnumerator; int pDevices; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct enumerator*) ;

__attribute__((used)) static void FUNC_2(struct enumerator *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_0(VAR_0->pDevices);
    FUNC_0(VAR_0->pEnumerator);
    FUNC_1(VAR_0);
}
