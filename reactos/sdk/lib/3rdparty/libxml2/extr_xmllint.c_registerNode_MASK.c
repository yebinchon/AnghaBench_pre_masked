
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_3__ {int * _private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(xmlNodePtr VAR_3)
{
    VAR_3->_private = FUNC_2(sizeof(long));
    if (VAR_3->_private == ((void*)0)) {
        FUNC_1(VAR_2, "Out of memory in xmllint:registerNode()\n");
 FUNC_0(VAR_0);
    }
    *(long*)VAR_3->_private = (long) 0x81726354;
    VAR_1++;
}
