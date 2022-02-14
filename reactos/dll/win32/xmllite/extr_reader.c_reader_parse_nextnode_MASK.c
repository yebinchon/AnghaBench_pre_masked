
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int line_number; int line_position; } ;
struct TYPE_19__ {int instate; int nodetype; int state; int input; TYPE_1__ position; int empty_element; int is_empty_element; scalar_t__ chunk_read_off; } ;
typedef TYPE_2__ xmlreader ;
typedef size_t xml_encoding ;
typedef int XmlNodeType ;
struct TYPE_20__ {int name; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 size_t VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int * FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int *) ;
 int FUNC_18 (int ,size_t*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,size_t) ;
 TYPE_3__* VAR_7 ;

__attribute__((used)) static HRESULT FUNC_22(xmlreader *VAR_8)
{
    XmlNodeType VAR_9 = FUNC_8(VAR_8);
    HRESULT VAR_10;

    if (!FUNC_5(VAR_8))
    {
        VAR_8->chunk_read_off = 0;
        FUNC_6(VAR_8);
    }


    switch (VAR_9)
    {
    case 138:
        FUNC_7(VAR_8);

    case 137:
        if (VAR_8->is_empty_element)
            FUNC_17(VAR_8, &VAR_8->empty_element);
        else if (FUNC_0(VAR_10 = FUNC_10(VAR_8)))
            return VAR_10;
        break;
    case 136:
        FUNC_16(VAR_8);
        FUNC_7(VAR_8);
        break;
    default:
        ;
    }

    for (;;)
    {
        switch (VAR_8->instate)
        {

        case 130:
            {
                xml_encoding VAR_11;

                VAR_10 = FUNC_19(VAR_8->input);
                if (FUNC_0(VAR_10)) return VAR_10;

                VAR_8->position.line_number = 1;
                VAR_8->position.line_position = 1;


                VAR_10 = FUNC_18(VAR_8->input, &VAR_11);
                FUNC_2("detected encoding %s, 0x%08x\n", VAR_11 == VAR_4 ? "(unknown)" :
                        FUNC_4(VAR_7[VAR_11].name), VAR_10);
                if (FUNC_0(VAR_10)) return VAR_10;


                FUNC_21(VAR_8->input, VAR_11);


                VAR_10 = FUNC_15(VAR_8);
                if (FUNC_0(VAR_10)) return VAR_10;

                FUNC_20(VAR_8->input, -1);
                VAR_8->instate = 128;
                if (VAR_10 == VAR_2) return VAR_10;
            }
            break;
        case 128:
            VAR_10 = FUNC_14(VAR_8);
            if (FUNC_0(VAR_10)) return VAR_10;

            if (VAR_10 == VAR_1)
                VAR_8->instate = 134;
            else
                return VAR_10;
            break;
        case 134:
            VAR_10 = FUNC_12(VAR_8);
            if (FUNC_0(VAR_10)) return VAR_10;

            if (VAR_10 == VAR_2)
            {
                VAR_8->instate = 133;
                return VAR_10;
            }
            else
                VAR_8->instate = 132;
            break;
        case 133:
            VAR_10 = FUNC_14(VAR_8);
            if (FUNC_0(VAR_10)) return VAR_10;

            if (VAR_10 == VAR_1)
                VAR_8->instate = 132;
            else
                return VAR_10;
            break;
        case 132:
            return FUNC_13(VAR_8);
        case 135:
            return FUNC_11(VAR_8);
        case 129:
            VAR_10 = FUNC_14(VAR_8);
            if (VAR_10 != VAR_1) return VAR_10;

            if (*FUNC_9(VAR_8))
            {
                FUNC_3("found garbage in the end of XML\n");
                return VAR_3;
            }

            VAR_8->instate = 131;
            VAR_8->state = VAR_6;
            VAR_8->nodetype = VAR_5;
            return VAR_10;
        case 131:
            return VAR_1;
        default:
            FUNC_1("internal state %d not handled\n", VAR_8->instate);
            return VAR_0;
        }
    }

    return VAR_0;
}
