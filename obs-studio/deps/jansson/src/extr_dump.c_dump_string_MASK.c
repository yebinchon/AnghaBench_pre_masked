
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int seq ;
typedef int (* json_dump_callback_t ) (char*,int,void*) ;
typedef char int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,int,char*,unsigned int,...) ;
 char* FUNC_1 (char const*,int,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, size_t VAR_3, json_dump_callback_t VAR_4, void *VAR_5, size_t VAR_6)
{
    const char *VAR_7, *VAR_8, *VAR_9;
    int32_t VAR_10;

    if(VAR_4("\"", 1, VAR_5))
        return -1;

    VAR_8 = VAR_7 = VAR_2;
    VAR_9 = VAR_2 + VAR_3;
    while(1)
    {
        const char *VAR_11;
        char VAR_12[13];
        int VAR_13;

        while(VAR_8 < VAR_9)
        {
            VAR_8 = FUNC_1(VAR_7, VAR_9 - VAR_7, &VAR_10);
            if(!VAR_8)
                return -1;


            if(VAR_10 == '\\' || VAR_10 == '"' || VAR_10 < 0x20)
                break;


            if((VAR_6 & VAR_1) && VAR_10 == '/')
                break;


            if((VAR_6 & VAR_0) && VAR_10 > 0x7F)
                break;

            VAR_7 = VAR_8;
        }

        if(VAR_7 != VAR_2) {
            if(VAR_4(VAR_2, VAR_7 - VAR_2, VAR_5))
                return -1;
        }

        if(VAR_8 == VAR_7)
            break;


        VAR_13 = 2;
        switch(VAR_10)
        {
            case '\\': VAR_11 = "\\\\"; break;
            case '\"': VAR_11 = "\\\""; break;
            case '\b': VAR_11 = "\\b"; break;
            case '\f': VAR_11 = "\\f"; break;
            case '\n': VAR_11 = "\\n"; break;
            case '\r': VAR_11 = "\\r"; break;
            case '\t': VAR_11 = "\\t"; break;
            case '/': VAR_11 = "\\/"; break;
            default:
            {

                if(VAR_10 < 0x10000)
                {
                    FUNC_0(VAR_12, sizeof(VAR_12), "\\u%04X", (unsigned int)VAR_10);
                    VAR_13 = 6;
                }


                else
                {
                    int32_t VAR_14, VAR_15;

                    VAR_10 -= 0x10000;
                    VAR_14 = 0xD800 | ((VAR_10 & 0xffc00) >> 10);
                    VAR_15 = 0xDC00 | (VAR_10 & 0x003ff);

                    FUNC_0(VAR_12, sizeof(VAR_12), "\\u%04X\\u%04X", (unsigned int)VAR_14, (unsigned int)VAR_15);
                    VAR_13 = 12;
                }

                VAR_11 = VAR_12;
                break;
            }
        }

        if(VAR_4(VAR_11, VAR_13, VAR_5))
            return -1;

        VAR_2 = VAR_7 = VAR_8;
    }

    return VAR_4("\"", 1, VAR_5);
}
