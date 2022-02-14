
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int end; int data; } ;
typedef TYPE_1__* STREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(STREAM VAR_3)
{
 int VAR_4 = VAR_3->end - VAR_3->data;
 int VAR_5 = 9 + 3 * 34 + 4 + VAR_4;
 STREAM VAR_6;

 VAR_6 = FUNC_1(VAR_5 + 5);

 FUNC_0(VAR_6, VAR_2, VAR_5);
 FUNC_0(VAR_6, VAR_1, 1);
 FUNC_4(VAR_6, 1);
 FUNC_0(VAR_6, VAR_1, 1);
 FUNC_4(VAR_6, 1);

 FUNC_0(VAR_6, VAR_0, 1);
 FUNC_4(VAR_6, 0xff);

 FUNC_3(VAR_6, 34, 2, 0, 0xffff);
 FUNC_3(VAR_6, 1, 1, 1, 0x420);
 FUNC_3(VAR_6, 0xffff, 0xfc17, 0xffff, 0xffff);

 FUNC_0(VAR_6, VAR_1, VAR_4);
 FUNC_5(VAR_6, VAR_3->data, VAR_4);

 FUNC_6(VAR_6);
 FUNC_2(VAR_6);
}
