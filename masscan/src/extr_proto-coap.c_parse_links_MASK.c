
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CoapLink {unsigned int parms_offset; unsigned int link_offset; int parms_length; int link_length; } ;


 struct CoapLink* FUNC_0 (int,int) ;
 struct CoapLink* FUNC_1 (struct CoapLink*,unsigned int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (unsigned char const) ;
 int FUNC_4 (unsigned char const) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static struct CoapLink *
FUNC_6(const unsigned char *VAR_1, unsigned VAR_2, unsigned VAR_3, size_t *VAR_4)
{
    struct CoapLink *VAR_5;
    struct CoapLink *VAR_6;
    unsigned VAR_7 = 0;
    enum {
        LINK_BEGIN=0,
        LINK_VALUE,
        LINK_END,
        PARM_BEGIN,
        PARM_NAME_BEGIN,
        PARM_VALUE_BEGIN,
        PARM_QUOTED,
        PARM_QUOTED_ESCAPE,
        PARM_NAME,
        PARM_VALUE,
        INVALID
    } VAR_8 = LINK_BEGIN;



    if (VAR_3 == ~0)
        VAR_3 = (unsigned)FUNC_5((const char *)VAR_1);


    VAR_6 = FUNC_0(1, sizeof(*VAR_6));
    VAR_5 = &VAR_6[0];
    VAR_5->parms_offset = VAR_2;
    VAR_5->link_offset = VAR_2;

    for (; VAR_2 < VAR_3; VAR_2++)
    switch (VAR_8) {
        case INVALID:
            VAR_2 = VAR_3;
            break;
        case LINK_BEGIN:

            if (FUNC_4(VAR_1[VAR_2]))
                continue;


            if (VAR_1[VAR_2] != '<') {
                VAR_8 = INVALID;
                break;
            }



            VAR_6 = FUNC_1(VAR_6, ++VAR_7+1, sizeof(*VAR_6));
            VAR_6[VAR_7].link_offset = VAR_3;
            VAR_6[VAR_7].link_length = 0;
            VAR_6[VAR_7].parms_offset = VAR_3;
            VAR_6[VAR_7].parms_length = 0;


            VAR_5 = &VAR_6[VAR_7-1];
            VAR_5->link_offset = VAR_2+1;
            VAR_5->parms_offset = VAR_5->link_offset;

            VAR_8 = LINK_VALUE;
            break;
        case LINK_VALUE:
            if (VAR_1[VAR_2] == '>') {

                VAR_8 = LINK_END;
            } else {
                VAR_5->link_length++;
            }
            break;
        case LINK_END:
            VAR_5->parms_offset = VAR_2+1;
            VAR_5->parms_length = 0;
            if (FUNC_4(VAR_1[VAR_2])) {
                continue;
            } else if (VAR_1[VAR_2] == ',') {

                VAR_8 = LINK_BEGIN;
            } else if (VAR_1[VAR_2] == ';') {
                VAR_8 = PARM_NAME_BEGIN;
            } else {
                VAR_8 = INVALID;
            }
            break;
        case PARM_BEGIN:
            if (FUNC_4(VAR_1[VAR_2])) {
                continue;
            } else if (VAR_1[VAR_2] == ',') {

                VAR_5->parms_length = VAR_2 - VAR_5->parms_offset;
                VAR_8 = LINK_BEGIN;
            } else if (VAR_1[VAR_2] == ';') {
                VAR_8 = PARM_NAME_BEGIN;
            } else {
                VAR_8 = INVALID;
            }
            break;
        case PARM_NAME_BEGIN:
            if (FUNC_4(VAR_1[VAR_2]))
                continue;
            if (!FUNC_3(VAR_1[VAR_2]))
                VAR_8 = INVALID;
            else
                VAR_8 = PARM_NAME;
            break;
        case PARM_NAME:
            if (FUNC_4(VAR_1[VAR_2])) {
                continue;
            } else if (VAR_1[VAR_2] == '=') {
                VAR_8 = PARM_VALUE_BEGIN;
            } else if (!FUNC_3(VAR_1[VAR_2])) {
                VAR_8 = INVALID;
            }
            break;
        case PARM_VALUE_BEGIN:
            if (FUNC_4(VAR_1[VAR_2]))
                continue;
            else if (VAR_1[VAR_2] == '\"') {
                VAR_8 = PARM_QUOTED;
            } else if (VAR_2 == ';') {
                VAR_8 = PARM_NAME_BEGIN;
            } else if (VAR_1[VAR_2] == ',') {
                VAR_5->parms_length = VAR_2 - VAR_5->parms_offset;
                VAR_8 = LINK_BEGIN;
            } else
                VAR_8 = PARM_VALUE;
            break;
        case PARM_VALUE:
            if (FUNC_4(VAR_1[VAR_2]))
                continue;
            else if (VAR_1[VAR_2] == ';')
                VAR_8 = PARM_NAME_BEGIN;
            else if (VAR_1[VAR_2] == ',') {
                VAR_5->parms_length = VAR_2 - VAR_5->parms_offset;
                VAR_8 = LINK_BEGIN;
            } else {
                ;
            }
            break;
        case PARM_QUOTED:





            if (VAR_1[VAR_2] == '\\') {
                VAR_8 = PARM_QUOTED_ESCAPE;
            } else if (VAR_1[VAR_2] == '\"') {
                VAR_8 = PARM_VALUE;
            }
            break;
        case PARM_QUOTED_ESCAPE:
            VAR_8 = PARM_QUOTED;
            break;
        default:
            FUNC_2(VAR_0, "invalid state\n");
            VAR_8 = INVALID;
            break;

    }


    *VAR_4 = VAR_7;
    return VAR_6;
}
