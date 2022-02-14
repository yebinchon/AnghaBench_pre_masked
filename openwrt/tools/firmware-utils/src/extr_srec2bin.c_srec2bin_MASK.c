
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bit32u ;
typedef int FILE ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int * VAR_5 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;

int FUNC_10(int VAR_7,char *VAR_8[],int VAR_9)
{
    int VAR_10,VAR_11,VAR_12;
    FILE *VAR_13;
    char VAR_14;
    char VAR_15[256];
    bit32u VAR_16 = 0xDEADBE42;
    bit32u VAR_17 = 0xFEEDFA42;

    bit32u VAR_18;


    if(VAR_7 < 3)
    {
      FUNC_6("\nError: <srec2bin <srec input file> <bin output file>\n\n");
      return(0);
    }

    if (VAR_7 > 3) VAR_1=VAR_4; else VAR_1=VAR_2;

    if (VAR_1)
        VAR_18 = VAR_16;
    else
        VAR_18 = VAR_17;

    if (VAR_9)
       FUNC_6("\nEndian: %s, Tag is 0x%8X\n",(VAR_1)?"BIG":"LITTLE", VAR_18);

    VAR_13 = FUNC_5(VAR_8[1],"rt");

    if (VAR_13==((void*)0))
    {
      FUNC_6("\nError: Opening input file, %s.", VAR_8[1]);
      return(0);
    }

    VAR_5 = FUNC_5( VAR_8[2], "wb");

    if (VAR_5==((void*)0))
    {
      FUNC_6("\nError: Opening Output file, %s.", VAR_8[2]);
      if(VAR_13) FUNC_4(VAR_13);
      return(0);
    }

    VAR_3 = VAR_2;

    VAR_0 = 0xFFFFFFFFL;



    FUNC_3("Tag", VAR_18);

    FUNC_1(VAR_18);


    VAR_6=0;
    VAR_12=VAR_4;

    VAR_11 = FUNC_7(VAR_13,VAR_15,sizeof VAR_15);

    while( (VAR_12) && (VAR_11 != -1))
    {
        if (FUNC_9(VAR_15))
        {
            VAR_12 &= FUNC_8(VAR_15);
            FUNC_0();
        }
       VAR_11 = FUNC_7(VAR_13,VAR_15,sizeof VAR_15);
    }




    FUNC_2();

    if(VAR_13) FUNC_4(VAR_13);
    if(VAR_5) FUNC_4(VAR_5);

    return(1);
}
