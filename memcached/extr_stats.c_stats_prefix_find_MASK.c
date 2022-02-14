
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {char const prefix_delimiter; } ;
struct TYPE_7__ {char* prefix; size_t prefix_len; struct TYPE_7__* next; } ;
typedef TYPE_1__ PREFIX_STATS ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (char const*,size_t) ;
 char* FUNC_4 (size_t) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 TYPE_1__** VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char*,char const*,size_t) ;
 size_t VAR_4 ;

__attribute__((used)) static PREFIX_STATS *FUNC_8(const char *VAR_5, const size_t VAR_6) {
    PREFIX_STATS *VAR_7;
    uint32_t VAR_8;
    size_t VAR_9;
    bool VAR_10 = 1;

    FUNC_0(VAR_5 != ((void*)0));

    for (VAR_9 = 0; VAR_9 < VAR_6 && VAR_5[VAR_9] != '\0'; VAR_9++) {
        if (VAR_5[VAR_9] == VAR_3.prefix_delimiter) {
            VAR_10 = 0;
            break;
        }
    }

    if (VAR_10) {
        return ((void*)0);
    }

    VAR_8 = FUNC_3(VAR_5, VAR_9) % VAR_0;

    for (VAR_7 = VAR_2[VAR_8]; ((void*)0) != VAR_7; VAR_7 = VAR_7->next) {
        if (FUNC_6(VAR_7->prefix, VAR_5, VAR_9) == 0)
            return VAR_7;
    }

    VAR_7 = FUNC_1(sizeof(PREFIX_STATS), 1);
    if (((void*)0) == VAR_7) {
        FUNC_5("Can't allocate space for stats structure: calloc");
        return ((void*)0);
    }

    VAR_7->prefix = FUNC_4(VAR_9 + 1);
    if (((void*)0) == VAR_7->prefix) {
        FUNC_5("Can't allocate space for copy of prefix: malloc");
        FUNC_2(VAR_7);
        return ((void*)0);
    }

    FUNC_7(VAR_7->prefix, VAR_5, VAR_9);
    VAR_7->prefix[VAR_9] = '\0';
    VAR_7->prefix_len = VAR_9;

    VAR_7->next = VAR_2[VAR_8];
    VAR_2[VAR_8] = VAR_7;

    VAR_1++;
    VAR_4 += VAR_9;

    return VAR_7;
}
