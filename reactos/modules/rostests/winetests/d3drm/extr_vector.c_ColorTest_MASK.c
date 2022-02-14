
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float D3DVALUE ;
typedef float D3DCOLOR ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 float FUNC_4 (float,float,float) ;
 float FUNC_5 (float,float,float,float) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_6 (float) ;
 int FUNC_7 (int,char*,float,float) ;

__attribute__((used)) static void FUNC_8(void)
{
    D3DCOLOR VAR_1, VAR_2, VAR_3;
    D3DVALUE VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;


    VAR_6=0.8f;
    VAR_7=0.3f;
    VAR_8=0.55f;
    VAR_2=0xffcc4c8c;
    VAR_3=FUNC_4(VAR_6,VAR_7,VAR_8);
    FUNC_7((VAR_2==VAR_3),"Expected color=%x, Got color=%x\n",VAR_2,VAR_3);


    VAR_6=0.1f;
    VAR_7=0.4f;
    VAR_8=0.7f;
    VAR_9=0.58f;
    VAR_2=0x931966b2;
    VAR_3=FUNC_5(VAR_6,VAR_7,VAR_8,VAR_9);
    FUNC_7((VAR_2==VAR_3),"Expected color=%x, Got color=%x\n",VAR_2,VAR_3);


    VAR_6=-0.88f;
    VAR_7=0.4f;
    VAR_8=0.6f;
    VAR_9=0.41f;
    VAR_2=0x68006699;
    VAR_3=FUNC_5(VAR_6,VAR_7,VAR_8,VAR_9);
    FUNC_7((VAR_2==VAR_3),"Expected color=%x, Got color=%x\n",VAR_2,VAR_3);


    VAR_6=2.37f;
    VAR_7=0.4f;
    VAR_8=0.6f;
    VAR_9=0.41f;
    VAR_2=0x68ff6699;
    VAR_3=FUNC_5(VAR_6,VAR_7,VAR_8,VAR_9);
    FUNC_7((VAR_2==VAR_3),"Expected color=%x, Got color=%x\n",VAR_2,VAR_3);


    VAR_1=0x0e4921bf;
    VAR_4=14.0f/255.0f;
    VAR_5=FUNC_0(VAR_1);
    FUNC_7((FUNC_6(VAR_4-VAR_5)<VAR_0),"Expected=%f, Got=%f\n",VAR_4,VAR_5);


    VAR_1=0xc82a1455;
    VAR_4=1.0f/3.0f;
    VAR_5=FUNC_1(VAR_1);
    FUNC_7((FUNC_6(VAR_4-VAR_5)<VAR_0),"Expected=%f, Got=%f\n",VAR_4,VAR_5);


    VAR_1=0xad971203;
    VAR_4=6.0f/85.0f;
    VAR_5=FUNC_2(VAR_1);
    FUNC_7((FUNC_6(VAR_4-VAR_5)<VAR_0),"Expected=%f, Got=%f\n",VAR_4,VAR_5);


    VAR_1=0xb62d7a1c;
    VAR_4=3.0f/17.0f;
    VAR_5=FUNC_3(VAR_1);
    FUNC_7((FUNC_6(VAR_4-VAR_5)<VAR_0),"Expected=%f, Got=%f\n",VAR_4,VAR_5);
}
