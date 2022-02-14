
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct _meta_flags {int locked; int vivify; int la; int no_update; int no_reply; int set_stale; } ;



__attribute__((used)) static int FUNC_0(char *VAR_0, size_t VAR_1, struct _meta_flags *VAR_2) {
    unsigned int VAR_3;



    uint8_t VAR_4[127] = {0};

    int VAR_5 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        uint8_t VAR_6 = (uint8_t)VAR_0[VAR_3];

        if (VAR_6 >= 127 || VAR_4[VAR_6] != 0) {
            return -1;
        }
        VAR_4[VAR_6] = 1;

        switch (VAR_0[VAR_3]) {
            case 'N':
                VAR_2->locked = 1;
                VAR_2->vivify = 1;
                VAR_5++;
                break;
            case 'T':
                VAR_5++;
                VAR_2->locked = 1;
                break;
            case 'R':
                VAR_2->locked = 1;
                VAR_5++;
                break;
            case 'l':
                VAR_2->la = 1;
                VAR_2->locked = 1;
                break;
            case 'O':
                VAR_5++;
                break;
            case 'k':
            case 's':
            case 't':
            case 'c':
            case 'v':
            case 'f':
                break;
            case 'h':
                VAR_2->locked = 1;
                break;
            case 'u':
                VAR_2->no_update = 1;
                break;
            case 'q':
                VAR_2->no_reply = 1;
                break;

            case 'F':
            case 'S':
            case 'C':
                VAR_5++;
                break;
            case 'I':
                VAR_2->set_stale = 1;
                break;
            default:
                return -1;
        }
    }

    return VAR_5;
}
