
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {unsigned int typestring_offset; int * attrs; TYPE_4__ const* type; } ;
typedef TYPE_3__ var_t ;
struct TYPE_21__ {int ptr_tfsoff; } ;
struct TYPE_22__ {TYPE_1__ array; } ;
struct TYPE_24__ {unsigned int typestring_offset; TYPE_2__ details; } ;
typedef TYPE_4__ type_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;

 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

 int VAR_5 ;

 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 unsigned char FUNC_1 (TYPE_4__ const*) ;
 unsigned char FUNC_2 (TYPE_4__ const*) ;
 unsigned char FUNC_3 (TYPE_4__ const*) ;
 int FUNC_4 (TYPE_4__ const*,int *,int) ;
 unsigned int FUNC_5 (TYPE_4__ const*,int *,int *,int,unsigned int*) ;
 unsigned int FUNC_6 (TYPE_3__ const*,int*) ;
 int FUNC_7 (TYPE_4__ const*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_4__ const*) ;
 int FUNC_10 (TYPE_4__ const*) ;
 int FUNC_11 (int *,TYPE_4__ const*) ;
 unsigned int VAR_16 ;
 int FUNC_12 (TYPE_4__ const*) ;
 unsigned int FUNC_13 (TYPE_4__ const*) ;
 TYPE_4__* FUNC_14 (TYPE_4__ const*) ;
 int FUNC_15 (TYPE_4__ const*,int *,int ) ;

__attribute__((used)) static unsigned char FUNC_16( const var_t *VAR_17, int VAR_18, unsigned short *VAR_19,
                                       unsigned int *VAR_20, unsigned int *VAR_21 )
{
    unsigned int VAR_22, VAR_23 = 0, VAR_24 = 0;
    unsigned char VAR_25 = 0;
    int VAR_26;
    int VAR_27 = FUNC_8(VAR_17->attrs, VAR_0);
    int VAR_28 = FUNC_8(VAR_17->attrs, VAR_1);

    if (VAR_18) VAR_28 = VAR_15;
    else if (!VAR_27 && !VAR_28) VAR_27 = VAR_15;

    *VAR_19 = 0;
    *VAR_20 = FUNC_6( VAR_17, &VAR_26 );
    *VAR_21 = VAR_17->typestring_offset;

    if (VAR_27) *VAR_19 |= VAR_8;
    if (VAR_28) *VAR_19 |= VAR_9;
    if (VAR_18) *VAR_19 |= VAR_10;

    if (!FUNC_11( VAR_17->attrs, VAR_17->type ))
        VAR_24 = FUNC_5( VAR_17->type, ((void*)0), VAR_17->attrs, VAR_15, &VAR_22 );

    switch (FUNC_15( VAR_17->type, VAR_17->attrs, VAR_14 ))
    {
    case 139:
        *VAR_19 |= VAR_6;
        VAR_25 = FUNC_2( VAR_17->type );
        if (VAR_25 == VAR_2)
        {
            VAR_24 = 4;
            VAR_25 = VAR_4;
        }
        break;
    case 136:
        *VAR_19 |= VAR_6;
        VAR_25 = FUNC_3( VAR_17->type );
        break;
    case 132:
        *VAR_19 |= VAR_7;
        break;
    case 130:
    case 129:
    case 128:
        *VAR_19 |= VAR_12 | (VAR_26 ? VAR_7 : VAR_11);
        break;
    case 135:
        *VAR_19 |= VAR_12;
        break;
    case 140:
        *VAR_19 |= VAR_12;
        if (FUNC_12(VAR_17->type) && VAR_17->type->details.array.ptr_tfsoff &&
            FUNC_4( VAR_17->type, VAR_17->attrs, !VAR_18 ) == VAR_5)
        {
            *VAR_21 = VAR_17->type->typestring_offset;
            *VAR_19 |= VAR_11;
        }
        break;
    case 131:
        *VAR_19 |= VAR_12;
        if (FUNC_10( VAR_17->type ) && FUNC_4( VAR_17->type, VAR_17->attrs, !VAR_18 ) == VAR_5)
        {

            if (FUNC_9( VAR_17->type )) *VAR_21 += 4;
            else *VAR_21 += 2;
            *VAR_19 |= VAR_11;
        }
        break;
    case 137:
        *VAR_19 |= VAR_11;
        *VAR_21 += 4;

    case 138:
        VAR_24 = 20;
        break;
    case 133:
        if (FUNC_4( VAR_17->type, VAR_17->attrs, !VAR_18 ) == VAR_5)
        {
            const type_t *VAR_29 = FUNC_14( VAR_17->type );

            if (!FUNC_11( VAR_17->attrs, VAR_29 ))
                VAR_24 = FUNC_5( VAR_29, ((void*)0), ((void*)0), VAR_15, &VAR_22 );

            switch (FUNC_15( VAR_29, ((void*)0), VAR_14 ))
            {
            case 139:
                *VAR_19 |= VAR_11 | VAR_6;
                VAR_25 = FUNC_1( VAR_29 );
                if (!VAR_27 && VAR_28) VAR_23 = VAR_16;
                break;
            case 136:
                if ((VAR_25 = FUNC_3( VAR_29 )) == VAR_3)
                {
                    *VAR_19 |= VAR_11 | VAR_6;
                    if (!VAR_27 && VAR_28) VAR_23 = VAR_16;
                }
                else
                {
                    VAR_23 = VAR_16;
                }
                break;
            case 129:
            case 128:
            case 132:
            case 140:
                *VAR_19 |= VAR_11 | VAR_12;
                *VAR_21 = VAR_29->typestring_offset;
                if (!VAR_27 && VAR_28) VAR_23 = FUNC_13( VAR_29 );
                break;
            case 131:
            case 133:
            case 138:
            case 137:
                *VAR_19 |= VAR_12;
                VAR_23 = VAR_16;
                break;
            case 135:
                *VAR_19 |= VAR_12;
                if (VAR_27 && VAR_28) VAR_23 = VAR_16;
                break;
            case 130:
                *VAR_19 |= VAR_11 | VAR_12;
                *VAR_21 = VAR_29->typestring_offset;
                switch (FUNC_7(VAR_29))
                {
                case 141:
                case 142:
                case 143:
                    if (!VAR_27 && VAR_28) VAR_23 = FUNC_13( VAR_29 );
                    break;
                default:
                    break;
                }
                break;
            case 134:
                FUNC_0(0);
            }
        }
        else
        {
            *VAR_19 |= VAR_12;
        }
        break;
    case 134:
        FUNC_0(0);
    }

    if (!VAR_24) *VAR_19 |= VAR_13;

    if (VAR_23)
    {
        VAR_23 = (VAR_23 + 7) / 8;
        if (VAR_23 < 8) *VAR_19 |= VAR_23 << 13;
    }
    return VAR_25;
}
