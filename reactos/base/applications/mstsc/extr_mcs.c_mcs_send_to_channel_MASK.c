
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_7__ {int end; int p; } ;
typedef TYPE_1__* STREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(STREAM VAR_3, uint16 VAR_4)
{
 uint16 VAR_5;

 FUNC_3(VAR_3, VAR_2);
 VAR_5 = VAR_3->end - VAR_3->p - 8;
 VAR_5 |= 0x8000;

 FUNC_2(VAR_3, (VAR_0 << 2));
 FUNC_1(VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_4);
 FUNC_2(VAR_3, 0x70);
 FUNC_1(VAR_3, VAR_5);

 FUNC_0(VAR_3);
}
