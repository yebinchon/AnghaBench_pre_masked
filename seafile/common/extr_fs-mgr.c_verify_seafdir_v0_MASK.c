
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mode ;
typedef scalar_t__ guint32 ;
typedef int gsize ;
typedef scalar_t__ gboolean ;
typedef int SeafdirOndisk ;
typedef int GChecksum ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_6 (int const**) ;
 int FUNC_7 (char*,int const*,scalar_t__) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (char*,char const*) ;

__attribute__((used)) static gboolean
FUNC_11 (const char *VAR_7, const uint8_t *VAR_8, int VAR_9,
                   gboolean VAR_10)
{
    guint32 VAR_11;
    guint32 VAR_12;
    char VAR_13[41];
    guint32 VAR_14;
    char VAR_15[VAR_4];
    const uint8_t *VAR_16;
    int VAR_17;
    int VAR_18;
    GChecksum *VAR_19;
    uint8_t VAR_20[20];
    gsize VAR_21 = 20;
    char VAR_22[41];

    if (VAR_9 < sizeof(SeafdirOndisk)) {
        FUNC_9 ("[fs mgr] Corrupt seafdir object %s.\n", VAR_7);
        return VAR_0;
    }

    VAR_16 = VAR_8;
    VAR_17 = VAR_9;

    VAR_11 = FUNC_6 (&VAR_16);
    VAR_17 -= 4;
    if (VAR_11 != VAR_5) {
        FUNC_9 ("Data does not contain a directory.\n");
        return VAR_0;
    }

    if (VAR_10)
        VAR_19 = FUNC_4 (VAR_3);

    VAR_18 = 2 * sizeof(guint32) + 40;
    while (VAR_17 > VAR_18) {
        VAR_12 = FUNC_6 (&VAR_16);
        FUNC_7 (VAR_13, VAR_16, 40);
        VAR_13[40] = '\0';
        VAR_16 += 40;
        VAR_14 = FUNC_6 (&VAR_16);
        VAR_17 -= VAR_18;
        if (VAR_17 >= VAR_14) {
            VAR_14 = FUNC_1 (VAR_14, VAR_4 - 1);
            FUNC_7 (VAR_15, VAR_16, VAR_14);
            VAR_16 += VAR_14;
            VAR_17 -= VAR_14;
        } else {
            FUNC_9 ("Bad data format for dir objcet %s.\n", VAR_7);
            return VAR_0;
        }

        if (VAR_10) {

            if (VAR_2 == VAR_1)
                VAR_12 = FUNC_0 (VAR_12);

            FUNC_5 (VAR_19, (unsigned char *)VAR_13, 40);
            FUNC_5 (VAR_19, (unsigned char *)VAR_15, VAR_14);
            FUNC_5 (VAR_19, (unsigned char *)&VAR_12, sizeof(VAR_12));
        }
    }

    if (!VAR_10)
        return VAR_6;

    FUNC_3 (VAR_19, VAR_20, &VAR_21);
    FUNC_8 (VAR_20, VAR_22, 20);
    FUNC_2 (VAR_19);

    if (FUNC_10 (VAR_22, VAR_7) == 0)
        return VAR_6;
    else
        return VAR_0;
}
