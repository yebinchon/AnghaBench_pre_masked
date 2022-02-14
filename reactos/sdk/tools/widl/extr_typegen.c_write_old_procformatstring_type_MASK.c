
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {unsigned short typestring_offset; TYPE_5__* type; int attrs; } ;
typedef TYPE_3__ var_t ;
struct TYPE_11__ {scalar_t__ ptr_tfsoff; } ;
struct TYPE_12__ {TYPE_1__ array; } ;
struct TYPE_14__ {unsigned short typestring_offset; TYPE_2__ details; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char FUNC_0 (TYPE_5__*) ;
 unsigned char FUNC_1 (TYPE_5__*) ;
 unsigned int FUNC_2 (TYPE_3__ const*,int *) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ) ;
 unsigned int VAR_7 ;
 int FUNC_5 (int *,int,char*,...) ;
 unsigned short FUNC_6 (unsigned char) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static unsigned int FUNC_9(FILE *VAR_8, int VAR_9, const var_t *VAR_10,
                                                    int VAR_11, int VAR_12)
{
    unsigned int VAR_13;

    int VAR_14 = FUNC_4(VAR_10->attrs, VAR_0);
    int VAR_15 = FUNC_4(VAR_10->attrs, VAR_1);

    if (!VAR_14 && !VAR_15) VAR_14 = VAR_4;

    if (FUNC_8(VAR_10->type) == VAR_5 ||
        FUNC_8(VAR_10->type) == VAR_6)
    {
        unsigned char VAR_16;

        if (VAR_11)
            FUNC_5(VAR_8, VAR_9, "0x53,    /* FC_RETURN_PARAM_BASETYPE */\n");
        else
            FUNC_5(VAR_8, VAR_9, "0x4e,    /* FC_IN_PARAM_BASETYPE */\n");

        if (FUNC_8(VAR_10->type) == VAR_6)
        {
            VAR_16 = FUNC_1(VAR_10->type);
        }
        else
        {
            VAR_16 = FUNC_0(VAR_10->type);

            if (VAR_16 == VAR_2)
                VAR_16 = VAR_3;
        }

        FUNC_5(VAR_8, VAR_9, "0x%02x,    /* %s */\n",
                   VAR_16, FUNC_6(VAR_16));
        VAR_13 = 2;
    }
    else
    {
        unsigned short VAR_17 = VAR_10->typestring_offset;

        if (!VAR_12 && FUNC_3(VAR_10->type) &&
            FUNC_7(VAR_10->type) &&
            VAR_10->type->details.array.ptr_tfsoff)
            VAR_17 = VAR_10->type->typestring_offset;

        if (VAR_11)
            FUNC_5(VAR_8, VAR_9, "0x52,    /* FC_RETURN_PARAM */\n");
        else if (VAR_14 && VAR_15)
            FUNC_5(VAR_8, VAR_9, "0x50,    /* FC_IN_OUT_PARAM */\n");
        else if (VAR_15)
            FUNC_5(VAR_8, VAR_9, "0x51,    /* FC_OUT_PARAM */\n");
        else
            FUNC_5(VAR_8, VAR_9, "0x4d,    /* FC_IN_PARAM */\n");

        VAR_13 = FUNC_2( VAR_10, ((void*)0) );
        FUNC_5(VAR_8, VAR_9, "0x%02x,\n", VAR_13 / VAR_7 );
        FUNC_5(VAR_8, VAR_9, "NdrFcShort(0x%x),	/* type offset = %u */\n", VAR_17, VAR_17);
        VAR_13 = 4;
    }
    return VAR_13;
}
