
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ntokens; } ;
typedef TYPE_1__ json_stream ;
typedef enum json_type { ____Placeholder_json_type } json_type ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static enum json_type
FUNC_6(json_stream *VAR_6, int VAR_7)
{
    VAR_6->ntokens++;
    switch (VAR_7) {
    case 128:
        FUNC_2(VAR_6, "%s", "unexpected end of data");
        return VAR_1;
    case '{':
        return FUNC_3(VAR_6, VAR_4);
    case '[':
        return FUNC_3(VAR_6, VAR_0);
    case '"':
        return FUNC_5(VAR_6);
    case 'n':
        return FUNC_1(VAR_6, "ull", VAR_3);
    case 'f':
        return FUNC_1(VAR_6, "alse", VAR_2);
    case 't':
        return FUNC_1(VAR_6, "rue", VAR_5);
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case '-':
        if (FUNC_0(VAR_6) != 0)
            return VAR_1;
        return FUNC_4(VAR_6, VAR_7);
    default:
        FUNC_2(VAR_6, "unexpected byte, '%c'", VAR_7);
        return VAR_1;
    }
}
