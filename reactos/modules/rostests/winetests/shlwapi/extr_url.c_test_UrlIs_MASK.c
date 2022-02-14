
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ expect; scalar_t__ expectOpaque; scalar_t__ expectFile; int url; int path; } ;
typedef TYPE_1__ WCHAR ;
typedef scalar_t__ BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int,TYPE_1__*,size_t) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,char*,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    BOOL VAR_10;
    size_t VAR_11;
    WCHAR VAR_12[80];

    if (!&FUNC_3) {
        FUNC_6("UrlIsA not found\n");
        return;
    }

    FUNC_5(VAR_3);
    FUNC_5(VAR_4);
    FUNC_5(VAR_5);
    FUNC_5(VAR_6);
    FUNC_5(VAR_7);
    FUNC_5(VAR_8);
    FUNC_5(VAR_9);

    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_1); VAR_11++) {
        FUNC_1(VAR_0, 0, VAR_1[VAR_11].path, -1, VAR_12, FUNC_0(VAR_12));

        VAR_10 = FUNC_3( VAR_1[VAR_11].path, VAR_9 );
        FUNC_2( VAR_10 == VAR_1[VAR_11].expect,
            "returned %d from path %s, expected %d\n", VAR_10, VAR_1[VAR_11].path,
            VAR_1[VAR_11].expect );

        if (&FUNC_4) {
            VAR_10 = FUNC_4( VAR_12, VAR_9 );
            FUNC_2( VAR_10 == VAR_1[VAR_11].expect,
                "returned %d from path (UrlIsW) %s, expected %d\n", VAR_10,
                VAR_1[VAR_11].path, VAR_1[VAR_11].expect );
        }
    }
    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_2); VAR_11++) {
        FUNC_1(VAR_0, 0, VAR_2[VAR_11].url, -1, VAR_12, FUNC_0(VAR_12));

        VAR_10 = FUNC_3( VAR_2[VAR_11].url, VAR_8);
 FUNC_2( VAR_10 == VAR_2[VAR_11].expectOpaque,
     "returned %d for URLIS_OPAQUE, url \"%s\", expected %d\n", VAR_10, VAR_2[VAR_11].url,
     VAR_2[VAR_11].expectOpaque );
        VAR_10 = FUNC_3( VAR_2[VAR_11].url, VAR_5);
 FUNC_2( VAR_10 == VAR_2[VAR_11].expectFile,
     "returned %d for URLIS_FILEURL, url \"%s\", expected %d\n", VAR_10, VAR_2[VAR_11].url,
     VAR_2[VAR_11].expectFile );

        if (&FUNC_4) {
            VAR_10 = FUNC_4( VAR_12, VAR_8);
            FUNC_2( VAR_10 == VAR_2[VAR_11].expectOpaque,
                "returned %d for URLIS_OPAQUE (UrlIsW), url \"%s\", expected %d\n",
                VAR_10, VAR_2[VAR_11].url, VAR_2[VAR_11].expectOpaque );
            VAR_10 = FUNC_4( VAR_12, VAR_5);
            FUNC_2( VAR_10 == VAR_2[VAR_11].expectFile,
                "returned %d for URLIS_FILEURL (UrlIsW), url \"%s\", expected %d\n",
                VAR_10, VAR_2[VAR_11].url, VAR_2[VAR_11].expectFile );
        }
    }
}
