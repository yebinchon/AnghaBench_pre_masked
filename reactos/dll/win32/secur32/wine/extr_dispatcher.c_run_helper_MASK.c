
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* com_buf; int pipe_out; } ;
typedef int SECURITY_STATUS ;
typedef TYPE_1__* PNegoHelper ;


 int FUNC_0 (char*,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int ,char*,int) ;

SECURITY_STATUS FUNC_9(PNegoHelper VAR_4, char *VAR_5,
        unsigned int VAR_6, int *VAR_7)
{
    int VAR_8;
    SECURITY_STATUS VAR_9 = VAR_3;

    FUNC_1("In helper: sending %s\n", FUNC_2(VAR_5));


    FUNC_8(VAR_4->pipe_out, VAR_5, FUNC_3(VAR_5));
    FUNC_8(VAR_4->pipe_out, "\n", 1);

    if((VAR_9 = FUNC_6(VAR_4, &VAR_8)) != VAR_3)
    {
        return VAR_9;
    }

    FUNC_1("In helper: received %s\n", FUNC_2(VAR_4->com_buf));
    *VAR_7 = FUNC_3(VAR_4->com_buf);

    if( *VAR_7 > VAR_6)
    {
        FUNC_0("Buffer size too small(%d given, %d required) dropping data!\n",
                VAR_6, *VAR_7);
        return VAR_0;
    }

    if( *VAR_7 < 2 )
    {
        return VAR_1;
    }



    if(FUNC_7(VAR_4->com_buf, "ERR", 3) == 0)
    {
        return VAR_2;
    }

    FUNC_4(VAR_5, VAR_4->com_buf, *VAR_7+1);

    VAR_9 = FUNC_5(VAR_4, VAR_8);

    return VAR_9;
}
