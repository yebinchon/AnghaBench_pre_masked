
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DriverInfoElement {struct DriverInfoElement* MatchingId; int InfFileDetails; } ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct DriverInfoElement*) ;
 int VAR_0 ;

BOOL
FUNC_3(struct DriverInfoElement* VAR_1)
{
    FUNC_0(VAR_1->InfFileDetails);
    FUNC_2(FUNC_1(), 0, VAR_1->MatchingId);
    FUNC_2(FUNC_1(), 0, VAR_1);
    return VAR_0;
}
