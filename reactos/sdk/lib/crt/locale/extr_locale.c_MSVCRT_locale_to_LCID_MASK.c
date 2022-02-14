
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* search_language; char* search_country; char* search_codepage; int match_flags; char* found_codepage; int found_lang_id; } ;
typedef TYPE_1__ locale_search_t ;
typedef int LPSTR ;
typedef int LPCSTR ;
typedef int LONG_PTR ;
typedef int LCID ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned short) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned short FUNC_5 (char*) ;
 int VAR_8 ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char const*,char) ;

LCID FUNC_12(const char *VAR_9, unsigned short *VAR_10)
{
    LCID VAR_11;
    locale_search_t VAR_12;
    const char *VAR_13, *VAR_14;

    FUNC_8(&VAR_12, 0, sizeof(locale_search_t));

    VAR_13 = FUNC_11(VAR_9, '.');
    VAR_14 = FUNC_11(VAR_9, '_');

    FUNC_6(VAR_12.search_language, VAR_9, VAR_5);
    if(VAR_14) {
        FUNC_6(VAR_12.search_country, VAR_14+1, VAR_5);
        if(VAR_14-VAR_9 < VAR_5)
            VAR_12.search_language[VAR_14-VAR_9] = '\0';
    } else
        VAR_12.search_country[0] = '\0';

    if(VAR_13) {
        FUNC_6(VAR_12.search_codepage, VAR_13+1, VAR_5);
        if(VAR_14 && VAR_13-VAR_14-1<VAR_5)
          VAR_12.search_country[VAR_13-VAR_14-1] = '\0';
        if(VAR_13-VAR_9 < VAR_5)
            VAR_12.search_language[VAR_13-VAR_9] = '\0';
    } else
        VAR_12.search_codepage[0] = '\0';

    if(!VAR_12.search_country[0] && !VAR_12.search_codepage[0])
        FUNC_9(VAR_12.search_language);

    FUNC_0(FUNC_2("KERNEL32"), (LPSTR)VAR_6,
            (LPCSTR)VAR_4,VAR_8,
            (LONG_PTR)&VAR_12);

    if (!VAR_12.match_flags)
        return -1;


    if (VAR_12.search_country[0] && !(VAR_12.match_flags & VAR_1))
        return -1;

    VAR_11 = FUNC_4(VAR_12.found_lang_id, VAR_7);


    if (!(VAR_12.match_flags & VAR_0)) {


        if (VAR_12.search_codepage[0]) {
            if (FUNC_3(FUNC_5(VAR_12.search_codepage)))
                FUNC_7(VAR_12.found_codepage,VAR_12.search_codepage,VAR_5);
            else {

                if (!FUNC_10(VAR_12.search_codepage,"OCP")) {
                    FUNC_1(VAR_11, VAR_3,
                            VAR_12.found_codepage, VAR_5);
                } else if (!FUNC_10(VAR_12.search_codepage,"ACP")) {
                    FUNC_1(VAR_11, VAR_2,
                            VAR_12.found_codepage, VAR_5);
                } else
                    return -1;

                if (!FUNC_5(VAR_12.found_codepage))
                    return -1;
            }
        } else {

            FUNC_1(VAR_11, VAR_2,
                    VAR_12.found_codepage, VAR_5);
            if (!VAR_12.found_codepage[0] || !FUNC_5(VAR_12.found_codepage))
                FUNC_1(VAR_11, VAR_3,
                        VAR_12.found_codepage, VAR_5);
        }
    }
    if (VAR_10)
        *VAR_10 = FUNC_5(VAR_12.found_codepage);

    return VAR_11;
}
