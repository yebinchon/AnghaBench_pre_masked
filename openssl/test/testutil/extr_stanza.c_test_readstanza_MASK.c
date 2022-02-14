
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* key; char* value; } ;
struct TYPE_5__ {scalar_t__ numpairs; char* buff; int curr; int start; int fp; TYPE_2__* pairs; } ;
typedef TYPE_1__ STANZA ;
typedef TYPE_2__ PAIR ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 char* FUNC_1 (char const*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 void* FUNC_8 (char*) ;

int FUNC_9(STANZA *VAR_1)
{
    PAIR *VAR_2 = VAR_1->pairs;
    char *VAR_3, *VAR_4, *VAR_5;
    const char *VAR_6;

    for (VAR_1->numpairs = 0; FUNC_0(VAR_1->fp, VAR_1->buff, sizeof(VAR_1->buff)); ) {
        VAR_1->curr++;
        if (!FUNC_4(VAR_3 = FUNC_6(VAR_1->buff, '\n'))) {
            FUNC_2("Line %d too long", VAR_1->curr);
            return 0;
        }
        *VAR_3 = '\0';


        if (VAR_1->buff[0] == '\0')
            break;


        if (VAR_1->buff[0] == '#')
            continue;


        if (!FUNC_4(VAR_4 = FUNC_6(VAR_1->buff, '='))) {
            FUNC_2("Missing = at line %d\n", VAR_1->curr);
            return 0;
        }
        *VAR_4++ = '\0';
        if (!FUNC_4(VAR_5 = FUNC_8(VAR_1->buff))) {
            FUNC_2("Empty field at line %d\n", VAR_1->curr);
            return 0;
        }
        if ((VAR_6 = FUNC_8(VAR_4)) == ((void*)0))
            VAR_6 = "";

        if (FUNC_7(VAR_5, "Title") == 0) {
            FUNC_2("Starting \"%s\" tests at line %d", VAR_6, VAR_1->curr);
            continue;
        }

        if (VAR_1->numpairs == 0)
            VAR_1->start = VAR_1->curr;

        if (FUNC_7(VAR_5, "PrivateKey") == 0) {
            if (!FUNC_5(VAR_1))
                return 0;
        }
        if (FUNC_7(VAR_5, "PublicKey") == 0) {
            if (!FUNC_5(VAR_1))
                return 0;
        }

        if (!FUNC_3(VAR_1->numpairs++, VAR_0)
                || !FUNC_4(VAR_2->key = FUNC_1(VAR_5))
                || !FUNC_4(VAR_2->value = FUNC_1(VAR_6)))
            return 0;
        VAR_2++;
    }


    return 1;
}
