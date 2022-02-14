
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* rxBuffer; int rxWindex; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1 (void) {

    FUNC_0 (VAR_1.rxBuffer, '\b', VAR_0 / 2);
    VAR_1.rxWindex = VAR_0 / 2;

    VAR_1.rxBuffer[VAR_1.rxWindex++] = '\r';
}
