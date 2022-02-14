
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* json_dump_callback_t ) (char*,int,void*) ;


 unsigned int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static int FUNC_1(size_t VAR_2, int VAR_3, int VAR_4, json_dump_callback_t VAR_5, void *VAR_6)
{
    if(FUNC_0(VAR_2) > 0)
    {
        unsigned int VAR_7 = FUNC_0(VAR_2), VAR_8 = VAR_3 * VAR_7;

        if(VAR_5("\n", 1, VAR_6))
            return -1;

        while(VAR_8 > 0)
        {
            int VAR_9 = VAR_8 < sizeof VAR_1 - 1 ? VAR_8 : sizeof VAR_1 - 1;

            if(VAR_5(VAR_1, VAR_9, VAR_6))
                return -1;

            VAR_8 -= VAR_9;
        }
    }
    else if(VAR_4 && !(VAR_2 & VAR_0))
    {
        return VAR_5(" ", 1, VAR_6);
    }
    return 0;
}
