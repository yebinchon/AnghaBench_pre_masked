
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_bracket; int ellision_index; int index; int* tmp; } ;
struct RangeParser {int state; unsigned char tmp; int digit_count; unsigned int begin; unsigned int end; int addr; scalar_t__ char_number; int line_number; TYPE_1__ ipv6; } ;


 int FUNC_0 (struct RangeParser*,unsigned char) ;
 int FUNC_1 (struct RangeParser*) ;

__attribute__((used)) static int
FUNC_2(struct RangeParser *VAR_0, const unsigned char *VAR_1, size_t *VAR_2, size_t VAR_3,
                unsigned *VAR_4, unsigned *VAR_5)
{
    size_t VAR_6 = *VAR_2;
    enum RangeState {
        LINE_START, ADDR_START,
        COMMENT,
        NUMBER0, NUMBER1, NUMBER2, NUMBER3, NUMBER_ERR,
        SECOND0, SECOND1, SECOND2, SECOND3, SECOND_ERR,
        CIDR,
        UNIDASH1, UNIDASH2,
        IPV6_NUM, IPV6_COLON, IPV6_CIDR, IPV6_ENDBRACKET,
        ERROR
    } VAR_7 = VAR_0->state;
    int VAR_8 = 0;

    while (VAR_6 < VAR_3) {
        unsigned char VAR_9 = VAR_1[VAR_6++];
        VAR_0->char_number++;
        switch (VAR_7) {
            case LINE_START:
            case ADDR_START:
                switch (VAR_9) {
                    case ' ': case '\t': case '\r':

                        continue;
                    case '\n':
                        VAR_0->line_number++;
                        VAR_0->char_number = 0;
                        continue;
                    case '#': case ';': case '/': case '-':
                        VAR_7 = COMMENT;
                        continue;

                    case '0': case '1': case '2': case '3': case '4':
                    case '5': case '6': case '7': case '8': case '9':
                        VAR_0->tmp = (VAR_9 - '0');
                        VAR_0->digit_count = 1;
                        VAR_7 = NUMBER0;
                        break;
                    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
                        FUNC_1(VAR_0);
                        VAR_0->tmp = (VAR_9 - 'a' + 10);
                        VAR_0->digit_count = 1;
                        VAR_7 = IPV6_NUM;
                        break;
                    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
                        FUNC_1(VAR_0);
                        VAR_0->tmp = (VAR_9 - 'A' + 10);
                        VAR_0->digit_count = 1;
                        VAR_7 = IPV6_NUM;
                        break;
                    case '[':
                        FUNC_1(VAR_0);
                        VAR_0->ipv6.is_bracket = 1;
                        VAR_7 = IPV6_NUM;
                        break;
                    default:
                        VAR_7 = ERROR;
                        VAR_3 = VAR_6;
                        break;
                }
                break;
            case IPV6_COLON:
                VAR_0->digit_count = 0;
                VAR_0->tmp = 0;
                if (VAR_9 == ':') {
                    if (VAR_0->ipv6.ellision_index < 8) {
                        VAR_7 = ERROR;
                        VAR_3 = VAR_6;
                    } else {
                        VAR_0->ipv6.ellision_index = VAR_0->ipv6.index;
                        VAR_7 = IPV6_COLON;
                    }
                    break;
                }

            case IPV6_NUM:
                switch (VAR_9) {
                    case '0': case '1': case '2': case '3': case '4':
                    case '5': case '6': case '7': case '8': case '9':
                        if (VAR_0->digit_count >= 4) {
                            VAR_7 = ERROR;
                            VAR_3 = VAR_6;
                        } else {
                            VAR_0->tmp = VAR_0->tmp * 16 + (VAR_9 - '0');
                            VAR_0->digit_count++;
                        }
                        break;
                    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
                        if (VAR_0->digit_count >= 4) {
                            VAR_7 = ERROR;
                            VAR_3 = VAR_6;
                        } else {
                            VAR_0->tmp = VAR_0->tmp * 16 + (VAR_9 - 'a' + 10);
                            VAR_0->digit_count++;
                        }
                        break;
                    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
                        if (VAR_0->digit_count >= 4) {
                            VAR_7 = ERROR;
                            VAR_3 = VAR_6;
                        } else {
                            VAR_0->tmp = VAR_0->tmp * 16 + (VAR_9 - 'A' + 10);
                            VAR_0->digit_count++;
                        }
                        break;
                    case ':':
                        if (VAR_0->ipv6.index >= 8) {
                            VAR_7 = ERROR;
                            VAR_3 = VAR_6;
                        } else {
                            VAR_0->ipv6.tmp[VAR_0->ipv6.index++] = VAR_0->tmp;
                            VAR_7 = IPV6_COLON;
                        }
                        break;
                    case '/':
                    case ']':
                    case ' ':
                    case '\t':
                    case '\r':
                    case '\n':
                    case ',':
                    case '-':

                        VAR_0->ipv6.tmp[VAR_0->ipv6.index++] = VAR_0->tmp;
                        if (FUNC_0(VAR_0, VAR_9) != 0) {
                            VAR_7 = ERROR;
                            VAR_3 = VAR_6;
                            break;
                        }
                        switch (VAR_9) {
                            case '/':
                                VAR_7 = IPV6_CIDR;
                                break;
                            case ']':
                                if (!VAR_0->ipv6.is_bracket) {
                                    VAR_7 = ERROR;
                                    VAR_3 = VAR_6;
                                } else {
                                    VAR_7 = IPV6_ENDBRACKET;
                                }
                                break;
                            case '\n':
                                VAR_0->line_number++;
                                VAR_0->char_number = 0;

                            case ' ':
                            case '\t':
                            case '\r':
                            case ',':

                            case '-':
                                break;
                        }
                        break;
                    default:
                        VAR_7 = ERROR;
                        VAR_3 = VAR_6;
                        break;
                }
                break;
            case COMMENT:
                if (VAR_9 == '\n') {
                    VAR_7 = LINE_START;
                    VAR_0->line_number++;
                    VAR_0->char_number = 0;
                } else
                    VAR_7 = COMMENT;
                break;
            case CIDR:
                switch (VAR_9) {
                    case '0': case '1': case '2': case '3': case '4':
                    case '5': case '6': case '7': case '8': case '9':
                        if (VAR_0->digit_count == 3) {
                            VAR_7 = ERROR;
                            VAR_3 = VAR_6;
                        } else {
                            VAR_0->digit_count++;
                            VAR_0->tmp = VAR_0->tmp * 10 + (VAR_9 - '0');
                            if (VAR_0->tmp > 32) {
                                VAR_7 = ERROR;
                                VAR_3 = VAR_6;
                            }
                            continue;
                        }
                        break;
                    case ':':
                    case ',':
                    case ' ':
                    case '\t':
                    case '\r':
                    case '\n':
                        {
                            unsigned long long VAR_10 = VAR_0->tmp;
                            unsigned long long VAR_11 = 0xFFFFFFFF00000000ULL >> VAR_10;


                            VAR_0->begin &= (unsigned)VAR_11;



                            VAR_0->end = VAR_0->begin | (unsigned)~VAR_11;


                            VAR_7 = ADDR_START;
                            VAR_3 = VAR_6;
                            if (VAR_9 == '\n') {
                                VAR_0->line_number++;
                                VAR_0->char_number = 0;
                            }
                            *VAR_4 = VAR_0->begin;
                            *VAR_5 = VAR_0->end;
                            VAR_8 = 1;
                        }
                        break;
                    default:
                        VAR_7 = ERROR;
                        VAR_3 = VAR_6;
                        break;
                }
                break;

            case UNIDASH1:
                if (VAR_9 == 0x80)
                    VAR_7 = UNIDASH2;
                else {
                    VAR_7 = ERROR;
                    VAR_3 = VAR_6;
                }
                break;
            case UNIDASH2:
                if (VAR_9 < 0x90 || 0x95 < VAR_9) {
                    VAR_7 = ERROR;
                    VAR_3 = VAR_6;
                } else {
                    VAR_9 = '-';
                    VAR_7 = NUMBER3;

                }


            case NUMBER0:
            case NUMBER1:
            case NUMBER2:
            case NUMBER3:
            case SECOND0:
            case SECOND1:
            case SECOND2:
            case SECOND3:
                switch (VAR_9) {
                    case '.':
                        VAR_0->addr = (VAR_0->addr << 8) | VAR_0->tmp;
                        VAR_0->tmp = 0;
                        VAR_0->digit_count = 0;
                        if (VAR_7 == NUMBER3 || VAR_7 == SECOND3) {
                            VAR_3 = VAR_6;
                            VAR_7 = ERROR;
                        } else
                            VAR_7++;
                        break;
                    case '0': case '1': case '2': case '3': case '4':
                    case '5': case '6': case '7': case '8': case '9':
                        if (VAR_0->digit_count == 3) {
                            VAR_7 = ERROR;
                            VAR_3 = VAR_6;
                        } else {
                            VAR_0->digit_count++;
                            VAR_0->tmp = VAR_0->tmp * 10 + (VAR_9 - '0');
                            if (VAR_0->tmp > 255) {
                                VAR_7 = ERROR;
                                VAR_3 = VAR_6;
                            }
                            continue;
                        }
                        break;
                    case 0xe2:
                        if (VAR_7 == NUMBER3) {
                            VAR_7 = UNIDASH1;
                        } else {
                            VAR_7 = ERROR;
                            VAR_3 = VAR_6;
                        }
                        break;
                    case '-':
                    case 0x96:
                        if (VAR_7 == NUMBER3) {
                            VAR_0->begin = (VAR_0->addr << 8) | VAR_0->tmp;
                            VAR_0->tmp = 0;
                            VAR_0->digit_count = 0;
                            VAR_0->addr = 0;
                            VAR_7 = SECOND0;
                        } else {
                            VAR_7 = NUMBER_ERR;
                            VAR_3 = VAR_6;
                        }
                        break;
                    case '/':
                        if (VAR_7 == NUMBER3) {
                            VAR_0->begin = (VAR_0->addr << 8) | VAR_0->tmp;
                            VAR_0->tmp = 0;
                            VAR_0->digit_count = 0;
                            VAR_0->addr = 0;
                            VAR_7 = CIDR;
                        } else {
                            VAR_7 = NUMBER_ERR;
                            VAR_3 = VAR_6;
                        }
                        break;
                    case ':':
                    case ',':
                    case ' ':
                    case '\t':
                    case '\r':
                    case '\n':
                        if (VAR_7 == NUMBER3) {
                            VAR_0->begin = (VAR_0->addr << 8) | VAR_0->tmp;
                            VAR_0->end = VAR_0->begin;
                            VAR_0->tmp = 0;
                            VAR_0->digit_count = 0;
                            VAR_0->addr = 0;
                            VAR_7 = ADDR_START;
                            VAR_3 = VAR_6;
                            if (VAR_9 == '\n') {
                                VAR_0->line_number++;
                                VAR_0->char_number = 0;
                            }
                            *VAR_4 = VAR_0->begin;
                            *VAR_5 = VAR_0->end;
                            VAR_8 = 1;
                        } else if (VAR_7 == SECOND3) {
                            VAR_0->end = (VAR_0->addr << 8) | VAR_0->tmp;
                            VAR_0->tmp = 0;
                            VAR_0->digit_count = 0;
                            VAR_0->addr = 0;
                            VAR_7 = ADDR_START;
                            VAR_3 = VAR_6;
                            if (VAR_9 == '\n') {
                                VAR_0->line_number++;
                                VAR_0->char_number = 0;
                            }
                            *VAR_4 = VAR_0->begin;
                            *VAR_5 = VAR_0->end;
                            VAR_8 = 1;
                        } else {
                            VAR_7 = NUMBER_ERR;
                            VAR_3 = VAR_6;
                        }
                        break;
                    default:
                        VAR_7 = ERROR;
                        VAR_3 = VAR_6;
                        break;
                }
                break;

            default:
            case ERROR:
            case NUMBER_ERR:
            case SECOND_ERR:
                VAR_7 = ERROR;
                VAR_3 = VAR_6;
                break;
        }
    }

    *VAR_2 = VAR_6;
    VAR_0->state = VAR_7;
    if (VAR_7 == ERROR || VAR_7 == NUMBER_ERR || VAR_7 == SECOND_ERR)
        VAR_8 = -1;
    return VAR_8;
}
