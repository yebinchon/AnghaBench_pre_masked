
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct symt {int tag; } ;
struct TYPE_6__ {char const* name; } ;
struct symt_udt {struct symt symt; TYPE_1__ hash_elt; } ;
struct symt_enum {int dummy; } ;
struct ParseTypedefData {char* ptr; int idx; int module; int buf; } ;
typedef enum UdtKind { ____Placeholder_UdtKind } UdtKind ;
struct TYPE_10__ {struct symt symt; } ;
struct TYPE_9__ {struct symt symt; } ;
struct TYPE_8__ {struct symt symt; } ;
struct TYPE_7__ {struct symt symt; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ParseTypedefData*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,long,long,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (char const*) ;
 struct symt** FUNC_5 (long,long) ;
 int FUNC_6 (struct ParseTypedefData*,int,struct symt**) ;
 int FUNC_7 (struct ParseTypedefData*,struct symt_udt*) ;
 int FUNC_8 (struct ParseTypedefData*,struct symt**) ;
 int FUNC_9 (struct ParseTypedefData*,struct symt_enum*) ;
 int FUNC_10 (struct ParseTypedefData*) ;
 int FUNC_11 (struct ParseTypedefData*,long*) ;
 int FUNC_12 (struct ParseTypedefData*,char const*,struct symt**) ;
 int FUNC_13 (struct ParseTypedefData*,long*,long*) ;
 int FUNC_14 (char const*,char const*) ;
 unsigned int FUNC_15 (char const*) ;
 int FUNC_16 (struct symt*) ;
 TYPE_5__* FUNC_17 (int ,int ,char const*,int ) ;
 TYPE_4__* FUNC_18 (int ,char const*,struct symt*) ;
 TYPE_3__* FUNC_19 (int ,struct symt*,int) ;
 TYPE_2__* FUNC_20 (int ,struct symt*,int) ;
 struct symt_udt* FUNC_21 (int ,char const*,int ,int) ;

__attribute__((used)) static int FUNC_22(struct ParseTypedefData* VAR_4, const char* VAR_5,
                                   struct symt** VAR_6)
{
    int VAR_7;
    long VAR_8 = -1;
    struct symt* VAR_9 = ((void*)0);
    struct symt* VAR_10;
    long VAR_11, VAR_12, VAR_13;





    FUNC_1(VAR_4, FUNC_13(VAR_4, &VAR_11, &VAR_12) == -1);

    while (*VAR_4->ptr == '=')
    {
 VAR_4->ptr++;
 FUNC_1(VAR_4, VAR_9 != ((void*)0));


 switch (*VAR_4->ptr)
        {
 case '@':
     if (*++VAR_4->ptr == 's')
            {
  VAR_4->ptr++;
  if (FUNC_11(VAR_4, &VAR_8) == -1)
                {
      FUNC_0("Not an attribute... NIY\n");
      VAR_4->ptr -= 2;
      return -1;
  }
  FUNC_1(VAR_4, *VAR_4->ptr++ != ';');
     }
     break;
 }

 switch (*VAR_4->ptr++)
        {
 case '*':
        case '&':
     FUNC_1(VAR_4, FUNC_22(VAR_4, ((void*)0), &VAR_10) == -1);
     VAR_9 = &FUNC_20(VAR_4->module, VAR_10, sizeof(void*))->symt;
           break;
        case 'k':
        case 'B':

            FUNC_1(VAR_4, FUNC_22(VAR_4, VAR_5, &VAR_9) == -1);
     break;
 case '(':
     VAR_4->ptr--;
            FUNC_1(VAR_4, FUNC_22(VAR_4, VAR_5, &VAR_9) == -1);
     break;
 case 'a':
     FUNC_1(VAR_4, FUNC_8(VAR_4, &VAR_9) == -1);
     break;
 case 'r':
     FUNC_1(VAR_4, FUNC_12(VAR_4, VAR_5, &VAR_9) == -1);
     FUNC_3(!*FUNC_5(VAR_11, VAR_12));
     *FUNC_5(VAR_11, VAR_12) = VAR_9;
     break;
 case 'f':
     FUNC_1(VAR_4, FUNC_22(VAR_4, ((void*)0), &VAR_10) == -1);
     VAR_9 = &FUNC_19(VAR_4->module, VAR_10, -1)->symt;
     break;
 case 'e':
            FUNC_6(VAR_4, 1 , &VAR_10);
            VAR_9 = &FUNC_18(VAR_4->module, VAR_5, VAR_10)->symt;
     FUNC_1(VAR_4, FUNC_9(VAR_4, (struct symt_enum*)VAR_9) == -1);
     break;
 case 's':
 case 'u':
            {
                struct symt_udt* VAR_14;
                enum UdtKind VAR_15 = (VAR_4->ptr[-1] == 's') ? VAR_1 : VAR_2;

                VAR_14 = (struct symt_udt*)*FUNC_5(VAR_11, VAR_12);
                if (!VAR_14)
                {
                    VAR_14 = FUNC_21(VAR_4->module, VAR_5, 0, VAR_15);



                    VAR_9 = *FUNC_5(VAR_11, VAR_12) = &VAR_14->symt;
                }
                else
                {
                    unsigned VAR_16, VAR_17;
                    if (VAR_14->symt.tag != VAR_0)
                    {
                        FUNC_0("Forward declaration (%p/%s) is not an aggregate (%u)\n",
                            VAR_14, FUNC_16(&VAR_14->symt), VAR_14->symt.tag);
                        return -1;
                    }
                    VAR_16 = FUNC_15(VAR_14->hash_elt.name);
                    VAR_17 = FUNC_15(VAR_5);
                    if (VAR_16 > VAR_17 || FUNC_14(VAR_14->hash_elt.name, VAR_5 + VAR_17 - VAR_16))
                        FUNC_0("Forward declaration name mismatch %s <> %s\n",
                            VAR_14->hash_elt.name, VAR_5);
                    VAR_9 = &VAR_14->symt;
                }
                FUNC_1(VAR_4, FUNC_7(VAR_4, VAR_14) == -1);
     }
     break;
 case 'x':
     VAR_7 = VAR_4->idx;
            VAR_13 = *VAR_4->ptr++;
     FUNC_1(VAR_4, FUNC_10(VAR_4) == -1);
     switch (VAR_13)
            {
     case 'e':
                FUNC_6(VAR_4, 1 , &VAR_10);
                VAR_9 = &FUNC_18(VAR_4->module, VAR_4->buf + VAR_7, VAR_10)->symt;
                break;
     case 's':
                VAR_9 = &FUNC_21(VAR_4->module, VAR_4->buf + VAR_7, 0, VAR_1)->symt;
         break;
            case 'u':
                VAR_9 = &FUNC_21(VAR_4->module, VAR_4->buf + VAR_7, 0, VAR_2)->symt;
         break;
     default:
                return -1;
     }
     VAR_4->idx = VAR_7;
     break;
 case '-':
            {
                FUNC_1(VAR_4, FUNC_11(VAR_4, &VAR_13) == -1);
                FUNC_1(VAR_4, FUNC_6(VAR_4, VAR_13, &VAR_9) == -1);
                FUNC_1(VAR_4, *VAR_4->ptr++ != ';');
            }
     break;
        case '#':
            if (*VAR_4->ptr == '#')
            {
                VAR_4->ptr++;
                FUNC_1(VAR_4, FUNC_22(VAR_4, ((void*)0), &VAR_10) == -1);
                VAR_9 = &FUNC_19(VAR_4->module, VAR_10, -1)->symt;
            }
            else
            {
                struct symt* VAR_18;
                struct symt* VAR_19;

                FUNC_1(VAR_4, FUNC_22(VAR_4, ((void*)0), &VAR_18) == -1);
                FUNC_1(VAR_4, *VAR_4->ptr++ != ',');
                FUNC_1(VAR_4, FUNC_22(VAR_4, ((void*)0), &VAR_10) == -1);
                VAR_9 = &FUNC_19(VAR_4->module, VAR_10, -1)->symt;
                while (*VAR_4->ptr == ',')
                {
                    VAR_4->ptr++;
                    FUNC_1(VAR_4, FUNC_22(VAR_4, ((void*)0), &VAR_19) == -1);
                }
            }
            break;
        case 'R':
            {
                long VAR_20, VAR_21, VAR_22;
                int VAR_23;

                FUNC_1(VAR_4, FUNC_11(VAR_4, &VAR_20) == -1);
                FUNC_1(VAR_4, *VAR_4->ptr++ != ';');
                FUNC_1(VAR_4, FUNC_11(VAR_4, &VAR_21) == -1);
                FUNC_1(VAR_4, *VAR_4->ptr++ != ';');
                FUNC_1(VAR_4, FUNC_11(VAR_4, &VAR_22) == -1);
                FUNC_1(VAR_4, *VAR_4->ptr++ != ';');

                switch (VAR_20)
                {
                case 1: VAR_23 = 12; break;
                case 2: VAR_23 = 13; break;
                case 3: VAR_23 = 25; break;
                case 4: VAR_23 = 26; break;
                case 5: VAR_23 = 35; break;
                case 6: VAR_23 = 14; break;
                default: FUNC_1(VAR_4, 1);
                }
                FUNC_1(VAR_4, FUNC_6(VAR_4, VAR_23, &VAR_9) == -1);
            }
            break;
 default:
     FUNC_0("Unknown type '%c'\n", VAR_4->ptr[-1]);
     return -1;
 }
    }

    if (!VAR_9)
    {

 VAR_9 = *FUNC_5(VAR_11, VAR_12);



        if (!VAR_9 && VAR_5)
        {
            VAR_9 = &FUNC_17(VAR_4->module, VAR_3, VAR_5, 0)->symt;
            FUNC_1(VAR_4, FUNC_14(VAR_5, "void"));
        }
    }

    *FUNC_5(VAR_11, VAR_12) = *VAR_6 = VAR_9;

    FUNC_2("Adding (%ld,%ld) %s\n", VAR_11, VAR_12, FUNC_4(VAR_5));

    return 0;
}
