
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_4__ {int ** tpixels; } ;


 int FUNC_0 (int,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int,int,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) inline static void FUNC_6(gdImagePtr VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12;
 VAR_6 = FUNC_5(VAR_4);
 VAR_7 = FUNC_4(VAR_4);
 VAR_8 = FUNC_3(VAR_4);

 VAR_9 = FUNC_1(VAR_1,VAR_2,VAR_3);
 VAR_10 = FUNC_5(VAR_9);
 VAR_11 = FUNC_4(VAR_9);
 VAR_12 = FUNC_3(VAR_9);

 FUNC_0(VAR_5, VAR_6, VAR_10, VAR_6);
 FUNC_0(VAR_5, VAR_7, VAR_11, VAR_7);
 FUNC_0(VAR_5, VAR_8, VAR_12, VAR_8);
 VAR_1->tpixels[VAR_3][VAR_2]=FUNC_2(VAR_6, VAR_7, VAR_8, VAR_0);
}
