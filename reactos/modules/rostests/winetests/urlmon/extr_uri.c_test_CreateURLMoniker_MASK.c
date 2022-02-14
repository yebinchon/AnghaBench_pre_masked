
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uri_url; int no_canon_url; int uniform_url; int legacy_url; int uri_flags; int base_uri_flags; int base_url; int url; } ;
typedef TYPE_1__ create_urlmon_test_t ;
typedef int WCHAR ;
typedef int IUri ;
typedef int IMoniker ;
typedef int HRESULT ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (int ) ;
 TYPE_1__ const* VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (int *,int *,int **,int ) ;
 int FUNC_8 (int *,int *,int **,int ) ;
 int FUNC_9 (int *,int ,int ,int **) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static void FUNC_12(void)
{
    const create_urlmon_test_t *VAR_5;
    IMoniker *VAR_6, *VAR_7;
    WCHAR *VAR_8, *VAR_9;
    IUri *VAR_10, *VAR_11;
    HRESULT VAR_12;

    for(VAR_5 = VAR_4; VAR_5 < VAR_4 + FUNC_0(VAR_4); VAR_5++) {
        VAR_8 = FUNC_4(VAR_5->url);
        VAR_9 = FUNC_4(VAR_5->base_url);

        if(VAR_9) {
            VAR_12 = FUNC_9(VAR_9, VAR_5->base_uri_flags, 0, &VAR_11);
            FUNC_6(VAR_12 == VAR_0, "CreateUri failed: %08x\n", VAR_12);

            VAR_12 = FUNC_8(((void*)0), VAR_11, &VAR_7, VAR_2);
            FUNC_6(VAR_12 == VAR_0, "CreateURLMonikerEx2 failed: %08x\n", VAR_12);
        }else {
            VAR_11 = ((void*)0);
            VAR_7 = ((void*)0);
        }

        VAR_12 = FUNC_1(VAR_7, VAR_8, &VAR_6);
        FUNC_6(VAR_12 == VAR_0, "CreateURLMoniker failed: %08x\n", VAR_12);
        FUNC_11(VAR_6, VAR_5->legacy_url);
        FUNC_10(VAR_6, VAR_5->legacy_url);
        FUNC_2(VAR_6);

        VAR_12 = FUNC_7(VAR_7, VAR_8, &VAR_6, VAR_1);
        FUNC_6(VAR_12 == VAR_0, "CreateURLMoniker failed: %08x\n", VAR_12);
        FUNC_11(VAR_6, VAR_5->legacy_url);
        FUNC_10(VAR_6, VAR_5->legacy_url);
        FUNC_2(VAR_6);

        VAR_12 = FUNC_7(VAR_7, VAR_8, &VAR_6, VAR_3);
        FUNC_6(VAR_12 == VAR_0, "CreateURLMoniker failed: %08x\n", VAR_12);
        FUNC_11(VAR_6, VAR_5->uniform_url);
        FUNC_10(VAR_6, VAR_5->uniform_url);
        FUNC_2(VAR_6);

        VAR_12 = FUNC_7(VAR_7, VAR_8, &VAR_6, VAR_2);
        FUNC_6(VAR_12 == VAR_0, "CreateURLMoniker failed: %08x\n", VAR_12);
        FUNC_11(VAR_6, VAR_5->no_canon_url);
        FUNC_10(VAR_6, VAR_5->no_canon_url);
        FUNC_2(VAR_6);

        VAR_12 = FUNC_9(VAR_8, VAR_5->uri_flags, 0, &VAR_10);
        FUNC_6(VAR_12 == VAR_0, "CreateUri failed: %08x\n", VAR_12);

        VAR_12 = FUNC_8(VAR_7, VAR_10, &VAR_6, VAR_1);
        FUNC_6(VAR_12 == VAR_0, "CreateURLMonikerEx2 failed: %08x\n", VAR_12);
        FUNC_11(VAR_6, VAR_9 ? VAR_5->legacy_url : VAR_5->uri_url);
        FUNC_10(VAR_6, VAR_9 ? VAR_5->legacy_url : VAR_5->uri_url);
        FUNC_2(VAR_6);

        VAR_12 = FUNC_8(VAR_7, VAR_10, &VAR_6, VAR_3);
        FUNC_6(VAR_12 == VAR_0, "CreateURLMonikerEx2 failed: %08x\n", VAR_12);
        FUNC_11(VAR_6, VAR_9 ? VAR_5->uniform_url : VAR_5->uri_url);
        FUNC_10(VAR_6, VAR_9 ? VAR_5->uniform_url : VAR_5->uri_url);
        FUNC_2(VAR_6);

        VAR_12 = FUNC_8(VAR_7, VAR_10, &VAR_6, VAR_2);
        FUNC_6(VAR_12 == VAR_0, "CreateURLMonikerEx2 failed: %08x\n", VAR_12);
        FUNC_11(VAR_6, VAR_9 ? VAR_5->no_canon_url : VAR_5->uri_url);
        FUNC_10(VAR_6, VAR_9 ? VAR_5->no_canon_url : VAR_5->uri_url);
        FUNC_2(VAR_6);

        FUNC_3(VAR_10);
        FUNC_5(VAR_8);
        FUNC_5(VAR_9);
        if(VAR_11)
            FUNC_3(VAR_11);
        if(VAR_7)
            FUNC_2(VAR_7);
    }
}
