
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int width; int precision; void* type; } ;
typedef TYPE_1__ WPRINTF_FORMAT ;
typedef char* LPCSTR ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;

__attribute__((used)) static INT FUNC_0( LPCSTR VAR_17, WPRINTF_FORMAT *VAR_18 )
{
    LPCSTR VAR_19 = VAR_17;

    VAR_18->flags = 0;
    VAR_18->width = 0;
    VAR_18->precision = 0;
    if (*VAR_19 == '-') { VAR_18->flags |= VAR_2; VAR_19++; }
    if (*VAR_19 == '#') { VAR_18->flags |= VAR_4; VAR_19++; }
    if (*VAR_19 == '0') { VAR_18->flags |= VAR_8; VAR_19++; }
    while ((*VAR_19 >= '0') && (*VAR_19 <= '9'))
    {
        VAR_18->width = VAR_18->width * 10 + *VAR_19 - '0';
        VAR_19++;
    }
    if (*VAR_19 == '.')
    {
        VAR_19++;
        while ((*VAR_19 >= '0') && (*VAR_19 <= '9'))
        {
            VAR_18->precision = VAR_18->precision * 10 + *VAR_19 - '0';
            VAR_19++;
        }
    }
    if (*VAR_19 == 'l') { VAR_18->flags |= VAR_3; VAR_19++; }
    else if (*VAR_19 == 'h') { VAR_18->flags |= VAR_5; VAR_19++; }
    else if (*VAR_19 == 'w') { VAR_18->flags |= VAR_7; VAR_19++; }
    else if (*VAR_19 == 'I')
    {
        if (VAR_19[1] == '6' && VAR_19[2] == '4') { VAR_18->flags |= VAR_0; VAR_19 += 3; }
        else if (VAR_19[1] == '3' && VAR_19[2] == '2') VAR_19 += 3;
        else { VAR_18->flags |= VAR_1; VAR_19++; }
    }
    switch(*VAR_19)
    {
    case 'c':
        VAR_18->type = (VAR_18->flags & VAR_3) ? VAR_15 : VAR_9;
        break;
    case 'C':
        VAR_18->type = (VAR_18->flags & VAR_5) ? VAR_9 : VAR_15;
        break;
    case 'd':
    case 'i':
        VAR_18->type = VAR_11;
        break;
    case 's':
        VAR_18->type = (VAR_18->flags & (VAR_3 |VAR_7)) ? VAR_16 : VAR_12;
        break;
    case 'S':
        VAR_18->type = (VAR_18->flags & (VAR_5|VAR_7)) ? VAR_12 : VAR_16;
        break;
    case 'u':
        VAR_18->type = VAR_14;
        break;
    case 'p':
        VAR_18->width = 2 * sizeof(void *);
        VAR_18->flags |= VAR_8 | VAR_1;

    case 'X':
        VAR_18->flags |= VAR_6;

    case 'x':
        VAR_18->type = VAR_10;
        break;
    default:
        VAR_18->type = VAR_13;
        VAR_19--;
        break;
    }
    return (INT)(VAR_19 - VAR_17) + 1;
}
