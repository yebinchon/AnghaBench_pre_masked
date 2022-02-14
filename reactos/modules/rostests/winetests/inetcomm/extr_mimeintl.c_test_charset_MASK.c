
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cpiWindows; scalar_t__ cpiInternet; scalar_t__ hCharset; int szName; } ;
struct TYPE_6__ {scalar_t__ uiCodePage; scalar_t__ uiInternetEncoding; } ;
typedef TYPE_1__ MIMECSETINFO ;
typedef TYPE_2__ INETCSETINFO ;
typedef int IMimeInternational ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HCHARSET ;


 int CHARSET_BODY ;
 scalar_t__ IMimeInternational_FindCharset (int *,char*,scalar_t__*) ;
 scalar_t__ IMimeInternational_GetCharsetInfo (int *,scalar_t__,TYPE_2__*) ;
 scalar_t__ IMimeInternational_GetCodePageCharset (int *,int,int ,scalar_t__*) ;
 int IMimeInternational_Release (int *) ;
 scalar_t__ MIME_E_NOT_FOUND ;
 scalar_t__ MimeOleGetInternat (int **) ;
 scalar_t__ S_OK ;
 scalar_t__ mlang_getcsetinfo (char*,TYPE_1__*) ;
 scalar_t__ mlang_getcsetinfo_from_cp (int,int ,TYPE_1__*) ;
 int ok (int,char*,...) ;
 int strcmp (int ,char*) ;

__attribute__((used)) static void test_charset(void)
{
    IMimeInternational *internat;
    HRESULT hr;
    HCHARSET hcs, hcs_windows_1252, hcs_windows_1251;
    INETCSETINFO cs_info;
    MIMECSETINFO mlang_cs_info;

    hr = MimeOleGetInternat(&internat);
    ok(hr == S_OK, "ret %08x\n", hr);

    hr = IMimeInternational_FindCharset(internat, "nonexistent", &hcs);
    ok(hr == MIME_E_NOT_FOUND, "got %08x\n", hr);

    hr = IMimeInternational_FindCharset(internat, "windows-1252", &hcs_windows_1252);
    ok(hr == S_OK, "got %08x\n", hr);
    hr = IMimeInternational_FindCharset(internat, "windows-1252", &hcs);
    ok(hr == S_OK, "got %08x\n", hr);
    ok(hcs_windows_1252 == hcs, "got different hcharsets for the same name\n");
    hr = IMimeInternational_FindCharset(internat, "WiNdoWs-1252", &hcs);
    ok(hr == S_OK, "got %08x\n", hr);
    ok(hcs_windows_1252 == hcs, "got different hcharsets for the same name\n");

    hr = IMimeInternational_FindCharset(internat, "windows-1251", &hcs_windows_1251);
    ok(hr == S_OK, "got %08x\n", hr);
    ok(hcs_windows_1252 != hcs_windows_1251, "got the same hcharset for the different names\n");

    hr = IMimeInternational_GetCharsetInfo(internat, hcs_windows_1252, &cs_info);
    ok(hr == S_OK, "got %08x\n", hr);

    hr = mlang_getcsetinfo("windows-1252", &mlang_cs_info);
    ok(hr == S_OK, "got %08x\n", hr);
    ok(cs_info.cpiWindows == mlang_cs_info.uiCodePage, "cpiWindows %d while mlang uiCodePage %d\n",
       cs_info.cpiWindows, mlang_cs_info.uiCodePage);
    ok(cs_info.cpiInternet == mlang_cs_info.uiInternetEncoding, "cpiInternet %d while mlang uiInternetEncoding %d\n",
       cs_info.cpiInternet, mlang_cs_info.uiInternetEncoding);
    ok(cs_info.hCharset == hcs_windows_1252, "hCharset doesn't match requested\n");
    ok(!strcmp(cs_info.szName, "windows-1252"), "szName doesn't match requested\n");

    hr = IMimeInternational_GetCodePageCharset(internat, 1252, CHARSET_BODY, &hcs);
    ok(hr == S_OK, "got %08x\n", hr);
    hr = IMimeInternational_GetCharsetInfo(internat, hcs, &cs_info);
    ok(hr == S_OK, "got %08x\n", hr);

    hr = mlang_getcsetinfo_from_cp(1252, CHARSET_BODY, &mlang_cs_info);
    ok(hr == S_OK, "got %08x\n", hr);
    ok(cs_info.cpiWindows == mlang_cs_info.uiCodePage, "cpiWindows %d while mlang uiCodePage %d\n",
       cs_info.cpiWindows, mlang_cs_info.uiCodePage);
    ok(cs_info.cpiInternet == mlang_cs_info.uiInternetEncoding, "cpiInternet %d while mlang uiInternetEncoding %d\n",
       cs_info.cpiInternet, mlang_cs_info.uiInternetEncoding);

    IMimeInternational_Release(internat);
}
