
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct symt_udt {int dummy; } ;
struct symt {int dummy; } ;
struct location {scalar_t__ kind; int offset; } ;
struct TYPE_9__ {unsigned long uvalue; int * string; } ;
struct attribute {TYPE_1__ u; } ;
struct TYPE_10__ {int module; } ;
typedef TYPE_2__ dwarf2_parse_context_t ;
typedef int dwarf2_debug_info_t ;
typedef scalar_t__ DWORD64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct symt_udt*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int ,struct location*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,int ,struct attribute*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *) ;
 struct symt* FUNC_8 (TYPE_2__*,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int ,struct symt_udt*,int *,struct symt*,int,int) ;
 scalar_t__ FUNC_10 (int ,struct symt*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_11(dwarf2_parse_context_t* VAR_7,
                                    dwarf2_debug_info_t* VAR_8,
                                    struct symt_udt* VAR_9)
{
    struct symt* VAR_10;
    struct attribute VAR_11;
    struct attribute VAR_12;
    struct attribute VAR_13;
    struct location VAR_14;

    FUNC_2(VAR_9);

    FUNC_1("%s, for %s\n", FUNC_4(VAR_7), FUNC_5(VAR_8));

    if (!FUNC_6(VAR_7, VAR_8, VAR_4, &VAR_11)) VAR_11.u.string = ((void*)0);
    VAR_10 = FUNC_8(VAR_7, VAR_8);
    if (FUNC_3(VAR_7, VAR_8, VAR_3, &VAR_14, ((void*)0)))
    {
        if (VAR_14.kind != VAR_6)
        {
           FUNC_0("Found register, while not expecting it\n");
           VAR_14.offset = 0;
        }
        else
            FUNC_1("found member_location at %s -> %lu\n",
                  FUNC_4(VAR_7), VAR_14.offset);
    }
    else
        VAR_14.offset = 0;
    if (!FUNC_6(VAR_7, VAR_8, VAR_1, &VAR_12))
        VAR_12.u.uvalue = 0;
    if (FUNC_6(VAR_7, VAR_8, VAR_0, &VAR_13))
    {



        struct attribute VAR_15;
        if (!FUNC_6(VAR_7, VAR_8, VAR_2, &VAR_15))
        {
            DWORD64 VAR_16;
            VAR_15.u.uvalue = FUNC_10(VAR_7->module, VAR_10, VAR_5, &VAR_16) ?
                (unsigned long)VAR_16 : 0;
        }
        VAR_13.u.uvalue = VAR_15.u.uvalue * 8 - VAR_13.u.uvalue - VAR_12.u.uvalue;
    }
    else VAR_13.u.uvalue = 0;
    FUNC_9(VAR_7->module, VAR_9, VAR_11.u.string, VAR_10,
                         (VAR_14.offset << 3) + VAR_13.u.uvalue,
                         VAR_12.u.uvalue);

    if (FUNC_7(VAR_7, VAR_8)) FUNC_0("Unsupported children\n");
}
