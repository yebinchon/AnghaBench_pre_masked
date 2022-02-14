
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,char*,int,int ) ;
 int VAR_1 ;

int FUNC_3(int VAR_2, char *VAR_3, int VAR_4)
{
    int VAR_5;
    while(VAR_4) {
        if(VAR_0==(VAR_5=FUNC_2(VAR_2, VAR_3, VAR_4, 0)))
        {
            VAR_5=FUNC_0 ();
            FUNC_1(VAR_1,"fputcSocket: %d\n",VAR_5);
            return 0;
        }
        else {
            return VAR_4-=VAR_5;
        }
    }
    return 0;
}
