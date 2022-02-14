
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int url ;
struct location_test {int name; int url; } ;
typedef int WCHAR ;
typedef int IPersistMoniker ;
typedef int IMoniker ;
typedef int IHTMLLocation ;
typedef int IHTMLDocument6 ;
typedef int IHTMLDocument2 ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int *,int *,int **) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (int *,int ,int *,int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ,int,int *,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_14 (int,char*,int ,scalar_t__) ;
 int FUNC_15 (int *,struct location_test const*) ;
 int FUNC_16 (int *,struct location_test const*) ;
 int FUNC_17 (int *,int *,struct location_test const*) ;
 int FUNC_18 (int *,struct location_test const*) ;
 int FUNC_19 (int *,struct location_test const*) ;
 int FUNC_20 (int *,struct location_test const*) ;
 int FUNC_21 (int *,struct location_test const*) ;
 int FUNC_22 (int *,struct location_test const*) ;
 int FUNC_23 (char*,int ) ;

__attribute__((used)) static void FUNC_24(const struct location_test* VAR_12)
{
    WCHAR VAR_13[VAR_8];
    HRESULT VAR_14;
    IBindCtx *VAR_15;
    IMoniker *VAR_16;
    IPersistMoniker *VAR_17;
    IHTMLDocument2 *VAR_18;
    IHTMLDocument6 *VAR_19;
    IHTMLLocation *VAR_20;

    VAR_14 = FUNC_1(0, &VAR_15);
    FUNC_14(VAR_14 == VAR_11, "%s: CreateBindCtx failed: 0x%08x\n", VAR_12->name, VAR_14);
    if(FUNC_3(VAR_14))
        return;

    FUNC_13(VAR_3, 0, VAR_12->url, -1, VAR_13, sizeof(VAR_13)/sizeof(WCHAR));
    VAR_14 = FUNC_2(((void*)0), VAR_13, &VAR_16);
    FUNC_14(VAR_14 == VAR_11, "%s: CreateURLMoniker failed: 0x%08x\n", VAR_12->name, VAR_14);
    if(FUNC_3(VAR_14)){
        FUNC_4(VAR_15);
        return;
    }

    VAR_14 = FUNC_0(&VAR_2, ((void*)0),
            VAR_1 | VAR_0, &VAR_5,
            (void**)&VAR_18);
    FUNC_14(VAR_14 == VAR_11, "%s: CoCreateInstance failed: 0x%08x\n", VAR_12->name, VAR_14);
    if(FUNC_3(VAR_14)){
        FUNC_10(VAR_16);
        FUNC_4(VAR_15);
        return;
    }

    VAR_14 = FUNC_5(VAR_18, &VAR_6, (void**)&VAR_19);
    if(VAR_14 == VAR_11){
        FUNC_8(VAR_19);
    }else{
        FUNC_23("%s: Could not get IHTMLDocument6, probably too old IE. Requires IE 8+\n", VAR_12->name);
        FUNC_10(VAR_16);
        FUNC_4(VAR_15);
        return;
    }

    VAR_14 = FUNC_5(VAR_18, &VAR_7,
            (void**)&VAR_17);
    FUNC_14(VAR_14 == VAR_11, "%s: IHTMlDocument2_QueryInterface failed: 0x%08x\n", VAR_12->name, VAR_14);
    if(FUNC_3(VAR_14)){
        FUNC_6(VAR_18);
        FUNC_10(VAR_16);
        FUNC_4(VAR_15);
        return;
    }

    VAR_14 = FUNC_11(VAR_17, VAR_4, VAR_16, VAR_15,
            VAR_10 | VAR_9);
    FUNC_14(VAR_14 == VAR_11, "%s: IPersistMoniker_Load failed: 0x%08x\n", VAR_12->name, VAR_14);
    if(FUNC_3(VAR_14)){
        FUNC_12(VAR_17);
        FUNC_6(VAR_18);
        FUNC_10(VAR_16);
        FUNC_4(VAR_15);
        return;
    }

    VAR_14 = FUNC_7(VAR_18, &VAR_20);
    FUNC_14(VAR_14 == VAR_11, "%s: IHTMLDocument2_get_location failed: 0x%08x\n", VAR_12->name, VAR_14);
    if(FUNC_3(VAR_14)){
        FUNC_12(VAR_17);
        FUNC_6(VAR_18);
        FUNC_10(VAR_16);
        FUNC_4(VAR_15);
        return;
    }

    FUNC_18(VAR_20, VAR_12);
    FUNC_21(VAR_20, VAR_12);
    FUNC_16(VAR_20, VAR_12);
    FUNC_17(VAR_20, VAR_18, VAR_12);
    FUNC_20(VAR_20, VAR_12);
    FUNC_19(VAR_20, VAR_12);
    FUNC_22(VAR_20, VAR_12);
    FUNC_15(VAR_20, VAR_12);

    FUNC_9(VAR_20);
    FUNC_12(VAR_17);
    FUNC_6(VAR_18);
    FUNC_10(VAR_16);
    FUNC_4(VAR_15);
}
