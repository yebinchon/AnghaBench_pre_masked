
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,int*,char*) ;
 int FUNC_3 (int,char**,int*,char,int ,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;

int FUNC_7(int VAR_7, char* VAR_8[])
{
    int VAR_9, VAR_10 = 0, VAR_11 = 0;

    for (VAR_9 = 1; VAR_9 < VAR_7; ++VAR_9)
    {
        char* VAR_12 = VAR_8[VAR_9];
        if (FUNC_4(VAR_12, "d"))
        {
            FUNC_6("Calling ApphelpCacheServiceDump\n");
            FUNC_0(VAR_0, ((void*)0));
            VAR_10 = 0;
        }
        else if (FUNC_4(VAR_12, "h"))
        {
            FUNC_1(VAR_12[1] == 'h');
            VAR_10 = 0;
        }
        else if (FUNC_4(VAR_12, "f"))
        {
            FUNC_6("Calling ApphelpCacheServiceFlush\n");
            FUNC_0(VAR_1, ((void*)0));
            VAR_10 = 0;
        }
        else if (FUNC_4(VAR_12, "z"))
        {
            FUNC_6("Calling ApphelpDBGReadRegistry\n");
            FUNC_0(VAR_5, ((void*)0));
            VAR_10 = 0;
        }
        else if (FUNC_4(VAR_12, "x"))
        {
            FUNC_6("Calling ApphelpDBGWriteRegistry\n");
            FUNC_0(VAR_6, ((void*)0));
            VAR_10 = 0;
        }
        else if (FUNC_4(VAR_12, "l"))
        {
            VAR_10 |= FUNC_3(VAR_7, VAR_8, &VAR_9, 'l',
                        VAR_2, "ApphelpCacheServiceLookup");
        }
        else if (FUNC_4(VAR_12, "u"))
        {
            VAR_10 |= FUNC_3(VAR_7, VAR_8, &VAR_9, 'u',
                        VAR_4, "ApphelpCacheServiceUpdate");
        }
        else if (FUNC_4(VAR_12, "r"))
        {
            VAR_10 |= FUNC_3(VAR_7, VAR_8, &VAR_9, 'r',
                        VAR_3, "ApphelpCacheServiceRemove");
        }
        else if (FUNC_4(VAR_12, "a"))
        {
            VAR_10 |= FUNC_2(VAR_7, VAR_8, &VAR_9, "a");
        }
        else if (FUNC_4(VAR_12, "k"))
        {
            VAR_11 = 1;
        }
        else
        {
            VAR_10 = 1;
        }
    }
    if (VAR_10 || VAR_7 == 1)
    {
        FUNC_6("Usage: %s [-d|-z|-x|-h|-H|-f|-[l|L] <image>|-[u|U] <image>|-[r|R] <image>|-k]\n", VAR_8[0]);
        FUNC_6("           -d: Dump shim cache over debug output\n");
        FUNC_6("           -z: DEBUG Read shim cache from registry\n");
        FUNC_6("           -x: DEBUG Write shim cache to registry\n");
        FUNC_6("           -h: Hexdump shim registry key\n");
        FUNC_6("           -H: Crc + Length from shim registry key only\n");
        FUNC_6("           -f: Flush (clear) the shim cache\n");
        FUNC_6("           -l: Lookup <image> in the shim cache\n");
        FUNC_6("           -L: Lookup <image> in the shim cache without mapping it\n");
        FUNC_6("           -u: Update (insert) <image> in the shim cache\n");
        FUNC_6("           -U: Update (insert) <image> in the shim cache without mapping it\n");
        FUNC_6("           -r: Remove <image> from the shim cache\n");
        FUNC_6("           -R: Remove <image> from the shim cache without mapping it\n");
        FUNC_6("           -a: Dump file attributes as used in the appcompat database\n");
        FUNC_6("           -k: Keep the console open\n");
    }
    if (VAR_11)
    {
        FUNC_5();
    }
    return VAR_10;
}
