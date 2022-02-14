
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nk_context {int dummy; } ;
struct media {TYPE_3__* font_14; TYPE_2__* font_18; TYPE_1__* font_20; } ;
struct TYPE_6__ {int handle; } ;
struct TYPE_5__ {int handle; } ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct nk_context*,char*,int ,int) ;
 int FUNC_1 (struct nk_context*,char*,int*) ;
 scalar_t__ FUNC_2 (struct nk_context*,char const*,int ) ;
 int FUNC_3 (struct nk_context*) ;
 scalar_t__ FUNC_4 (struct nk_context*,char const*,int ) ;
 int FUNC_5 (struct nk_context*,int ,char*,int*,int,int ) ;
 int FUNC_6 (struct nk_context*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct nk_context*,char*,int ) ;
 int FUNC_8 (struct nk_context*,int,int) ;
 int FUNC_9 (int,int,int,int) ;
 int FUNC_10 (struct nk_context*,int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct nk_context*) ;

__attribute__((used)) static void
FUNC_13(struct nk_context *VAR_10, struct media *VAR_11)
{
    static char VAR_12[3][64];
    static int VAR_13[3];
    static const char *VAR_14[] = {"Item 0","item 1","item 2"};
    static int VAR_15 = 0;
    static int VAR_16 = 1;

    int VAR_17;
    FUNC_10(VAR_10, &VAR_11->font_20->handle);
    if (FUNC_0(VAR_10, "Grid Demo", FUNC_9(600, 350, 275, 250),
        VAR_6|VAR_3|VAR_4|
        VAR_5))
    {
        FUNC_10(VAR_10, &VAR_11->font_18->handle);
        FUNC_8(VAR_10, 30, 2);
        FUNC_7(VAR_10, "Floating point:", VAR_2);
        FUNC_5(VAR_10, VAR_0, VAR_12[0], &VAR_13[0], 64, VAR_8);
        FUNC_7(VAR_10, "Hexadecimal:", VAR_2);
        FUNC_5(VAR_10, VAR_0, VAR_12[1], &VAR_13[1], 64, VAR_9);
        FUNC_7(VAR_10, "Binary:", VAR_2);
        FUNC_5(VAR_10, VAR_0, VAR_12[2], &VAR_13[2], 64, VAR_7);
        FUNC_7(VAR_10, "Checkbox:", VAR_2);
        FUNC_1(VAR_10, "Check me", &VAR_16);
        FUNC_7(VAR_10, "Combobox:", VAR_2);
        if (FUNC_2(VAR_10, VAR_14[VAR_15], FUNC_11(FUNC_12(VAR_10), 200))) {
            FUNC_8(VAR_10, 25, 1);
            for (VAR_17 = 0; VAR_17 < 3; ++VAR_17)
                if (FUNC_4(VAR_10, VAR_14[VAR_17], VAR_1))
                    VAR_15 = VAR_17;
            FUNC_3(VAR_10);
        }
    }
    FUNC_6(VAR_10);
    FUNC_10(VAR_10, &VAR_11->font_14->handle);
}
