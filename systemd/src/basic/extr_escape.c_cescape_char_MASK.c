
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (unsigned char) ;

int FUNC_1(char VAR_0, char *VAR_1) {
        char *VAR_2 = VAR_1;



        switch (VAR_0) {

                case '\a':
                        *(VAR_1++) = '\\';
                        *(VAR_1++) = 'a';
                        break;
                case '\b':
                        *(VAR_1++) = '\\';
                        *(VAR_1++) = 'b';
                        break;
                case '\f':
                        *(VAR_1++) = '\\';
                        *(VAR_1++) = 'f';
                        break;
                case '\n':
                        *(VAR_1++) = '\\';
                        *(VAR_1++) = 'n';
                        break;
                case '\r':
                        *(VAR_1++) = '\\';
                        *(VAR_1++) = 'r';
                        break;
                case '\t':
                        *(VAR_1++) = '\\';
                        *(VAR_1++) = 't';
                        break;
                case '\v':
                        *(VAR_1++) = '\\';
                        *(VAR_1++) = 'v';
                        break;
                case '\\':
                        *(VAR_1++) = '\\';
                        *(VAR_1++) = '\\';
                        break;
                case '"':
                        *(VAR_1++) = '\\';
                        *(VAR_1++) = '"';
                        break;
                case '\'':
                        *(VAR_1++) = '\\';
                        *(VAR_1++) = '\'';
                        break;

                default:



                        if ((VAR_0 < ' ') || (VAR_0 >= 127)) {
                                *(VAR_1++) = '\\';
                                *(VAR_1++) = FUNC_0((unsigned char) VAR_0 >> 6);
                                *(VAR_1++) = FUNC_0((unsigned char) VAR_0 >> 3);
                                *(VAR_1++) = FUNC_0((unsigned char) VAR_0);
                        } else
                                *(VAR_1++) = VAR_0;
                        break;
        }

        return VAR_1 - VAR_2;
}
