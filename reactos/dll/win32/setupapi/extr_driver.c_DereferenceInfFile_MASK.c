
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct InfFileDetails {int hInf; int References; } ;
typedef int VOID ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct InfFileDetails*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

VOID
FUNC_4(struct InfFileDetails* VAR_0)
{
    if (FUNC_2(&VAR_0->References) == 0)
    {
        FUNC_3(VAR_0->hInf);
        FUNC_1(FUNC_0(), 0, VAR_0);
    }
}
