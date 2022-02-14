
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PULONG ;
typedef scalar_t__ PDEBUG_MODULE ;
typedef char* LPSTR ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

BOOLEAN FUNC_6(LPSTR VAR_3,PULONG VAR_4)
{
    LPSTR VAR_5;
    char VAR_6[64];
    LPSTR VAR_7;
 PDEBUG_MODULE VAR_8;

    FUNC_0((0,"ConvertTokenToSymbol()\n"));

    FUNC_4(VAR_6,VAR_3);
    VAR_7 = VAR_6;


    VAR_5 = FUNC_3(VAR_7,'!');
    if(VAR_5)
    {
        FUNC_0((0,"ConvertTokenToSymbol(): module!symbol syntax detected\n"));

        *VAR_5 = 0;

        VAR_5++;
        FUNC_0((0,"ConvertTokenToSymbol(): module = %s symbol = %s\n",VAR_7,VAR_5));

  if( (VAR_8=FUNC_2(VAR_7)) )
        {
            if((*VAR_4 = FUNC_1(VAR_5,VAR_8)))
                return VAR_1;
        }
    }
    else
    {
        if(VAR_2)
        {
            if((*VAR_4 = FUNC_1(VAR_7,VAR_2)))
                return VAR_1;
        }
     return FUNC_5(VAR_7,VAR_4);
    }
    return VAR_0;
}
