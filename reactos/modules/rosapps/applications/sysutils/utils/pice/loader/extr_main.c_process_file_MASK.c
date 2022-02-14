
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*,int) ;
 long FUNC_3 (int,void*,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*,int,void*,int) ;

int FUNC_8(char* VAR_4)
{
 int VAR_5;
 void* VAR_6;
 off_t VAR_7;
 int VAR_8=0;


    VAR_5 = FUNC_2(VAR_4,VAR_0|VAR_3);
    if(VAR_5>0)
    {


        VAR_7 = FUNC_1(VAR_5,0,VAR_1);
        FUNC_6("LOADER: file %s is %u bytes\n",VAR_4,(int)VAR_7);

        FUNC_1(VAR_5,0,VAR_2);

        VAR_6 = FUNC_4(VAR_7+16);
        if(VAR_6)
        {
   long VAR_9;

            FUNC_5(VAR_6,0,VAR_7+16);
            if(VAR_7 == (VAR_9 = FUNC_3(VAR_5,VAR_6,VAR_7)))
            {

                VAR_8 = FUNC_7(VAR_4,VAR_5,VAR_6,VAR_7);
            }
        }
        FUNC_0(VAR_5);
    }
    else
    {
        FUNC_6("LOADER: file %s could not be opened\n",VAR_4);
  VAR_8 = 1;
    }


    return VAR_8;
}
