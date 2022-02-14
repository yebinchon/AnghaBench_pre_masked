
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {int dummy; } ;


 int FUNC_0 (int ,char*,unsigned int,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (struct RangeList*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (char*,char**,int ) ;

const char *
FUNC_6(struct RangeList *VAR_4, const char *VAR_5, unsigned *VAR_6, unsigned VAR_7)
{
    char *VAR_8 = (char*)VAR_5;

    *VAR_6 = 0;
    while (*VAR_8) {
        unsigned VAR_9;
        unsigned VAR_10;


        while (*VAR_8 && FUNC_3(*VAR_8 & 0xFF))
            VAR_8++;


        if (*VAR_8 == 0 || *VAR_8 == '#')
            break;



        if (FUNC_1(*VAR_8&0xFF) && VAR_8[1] == ':') {
            switch (*VAR_8) {
                case 'T': case 't':
                    VAR_7 = 0;
                    break;
                case 'U': case 'u':
                    VAR_7 = VAR_3;
                    break;
                case 'S': case 's':
                    VAR_7 = VAR_2;
                    break;
                case 'O': case 'o':
                    VAR_7 = VAR_1;
                    break;
                case 'I': case 'i':
                    VAR_7 = VAR_0;
                    break;
                default:
                    FUNC_0(0, "bad port charactern = %c\n", VAR_8[0]);
                    *VAR_6 = 1;
                    return VAR_8;
            }
            VAR_8 += 2;
        }

        if (!FUNC_2(VAR_8[0] & 0xFF))
            break;

        VAR_9 = (unsigned)FUNC_5(VAR_8, &VAR_8, 0);
        VAR_10 = VAR_9;
        if (*VAR_8 == '-') {
            VAR_8++;
            VAR_10 = (unsigned)FUNC_5(VAR_8, &VAR_8, 0);
        }

        if (VAR_9 > 0xFF && VAR_7 == VAR_1) {
            FUNC_0(0, "bad ports: %u-%u\n", VAR_9, VAR_10);
            *VAR_6 = 2;
            return VAR_8;
        } else if (VAR_9 > 0xFFFF || VAR_10 > 0xFFFF || VAR_10 < VAR_9) {
            FUNC_0(0, "bad ports: %u-%u\n", VAR_9, VAR_10);
            *VAR_6 = 2;
            return VAR_8;
        } else {
            FUNC_4(VAR_4, VAR_9+VAR_7, VAR_10+VAR_7);
        }
        if (*VAR_8 == ',')
            VAR_8++;
        else
            break;
    }

    return VAR_8;
}
