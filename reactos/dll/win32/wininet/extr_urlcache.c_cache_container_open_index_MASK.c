
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int urlcache_header ;
struct TYPE_4__ {scalar_t__ mapping; int mutex; int path; scalar_t__ file_size; } ;
typedef TYPE_1__ cache_container ;
typedef char WCHAR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*,int,int,int *,int ,int ,int *) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (scalar_t__,int *) ;
 scalar_t__ FUNC_7 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int * FUNC_8 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,int ,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,char const*) ;
 int FUNC_19 (char*,int ) ;

__attribute__((used)) static DWORD FUNC_20(cache_container *VAR_13, DWORD VAR_14)
{
    static const WCHAR VAR_15[] = {'i','n','d','e','x','.','d','a','t',0};

    HANDLE VAR_16;
    WCHAR VAR_17[VAR_10];
    DWORD VAR_18;
    BOOL VAR_19;

    FUNC_13(VAR_13->mutex, VAR_6);

    if(VAR_13->mapping) {
        FUNC_9(VAR_13->mutex);
        return VAR_0;
    }

    FUNC_19(VAR_17, VAR_13->path);
    FUNC_18(VAR_17, VAR_15);

    VAR_16 = FUNC_2(VAR_17, VAR_4|VAR_5, VAR_2|VAR_3, ((void*)0), VAR_12, 0, ((void*)0));
    if(VAR_16 == VAR_8) {

 if(FUNC_1(VAR_13->path, 0))
            VAR_16 = FUNC_2(VAR_17, VAR_4|VAR_5, VAR_2|VAR_3, ((void*)0), VAR_12, 0, ((void*)0));
    }
    if(VAR_16 == VAR_8) {
        FUNC_10("Could not open or create cache index file \"%s\"\n", FUNC_17(VAR_17));
        FUNC_9(VAR_13->mutex);
        return FUNC_7();
    }

    VAR_18 = FUNC_6(VAR_16, ((void*)0));
    if(VAR_18 == VAR_7) {
        FUNC_0(VAR_16);
 FUNC_9(VAR_13->mutex);
        return FUNC_7();
    }

    if(VAR_14 < VAR_11)
        VAR_14 = VAR_11;
    else if(VAR_14 > VAR_9)
        VAR_14 = VAR_9;

    if(VAR_18 < FUNC_4(VAR_14)) {
        DWORD VAR_20 = FUNC_16(VAR_13, VAR_16, VAR_14);
        FUNC_0(VAR_16);
        FUNC_9(VAR_13->mutex);
        return VAR_20;
    }

    VAR_13->file_size = VAR_18;
    VAR_13->mapping = FUNC_15(VAR_16, VAR_13->path, VAR_18, &VAR_19);
    FUNC_0(VAR_16);
    if(VAR_13->mapping && VAR_19) {
        urlcache_header *VAR_21 = FUNC_8(VAR_13->mapping, VAR_1, 0, 0, 0);

        if(VAR_21 && !FUNC_14(VAR_21, VAR_18)) {
            FUNC_12("detected old or broken index.dat file\n");
            FUNC_11(VAR_21);
            FUNC_5(VAR_13->path, 100, 0);
        }else if(VAR_21) {
            FUNC_11(VAR_21);
        }else {
            FUNC_0(VAR_13->mapping);
            VAR_13->mapping = ((void*)0);
        }
    }

    if(!VAR_13->mapping)
    {
        FUNC_3("Couldn't create file mapping (error is %d)\n", FUNC_7());
        FUNC_9(VAR_13->mutex);
        return FUNC_7();
    }

    FUNC_9(VAR_13->mutex);
    return VAR_0;
}
