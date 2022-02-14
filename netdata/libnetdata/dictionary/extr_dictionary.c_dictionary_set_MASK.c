
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {void* value; } ;
typedef TYPE_1__ NAME_VALUE ;
typedef TYPE_2__ DICTIONARY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,char const*,void*,size_t,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char const*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (void*,void*,size_t) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int) ;

void *FUNC_11(DICTIONARY *VAR_3, const char *VAR_4, void *VAR_5, size_t VAR_6) {
    FUNC_0(VAR_1, "SET dictionary entry with name '%s'.", VAR_4);

    uint32_t VAR_7 = FUNC_9(VAR_4);

    FUNC_4(VAR_3);

    NAME_VALUE *VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_7);
    if(FUNC_10(!VAR_8)) {
        FUNC_0(VAR_1, "Dictionary entry with name '%s' not found. Creating a new one.", VAR_4);

        VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        if(FUNC_10(!VAR_8))
            FUNC_5("Cannot create name_value.");
    }
    else {
        FUNC_0(VAR_1, "Dictionary entry with name '%s' found. Changing its value.", VAR_4);

        if(VAR_3->flags & VAR_0) {
            FUNC_0(VAR_2, "Dictionary: linking value to '%s'", VAR_4);
            VAR_8->value = VAR_5;
        }
        else {
            FUNC_0(VAR_2, "Dictionary: cloning value to '%s'", VAR_4);



            void *VAR_9 = FUNC_7(VAR_6),
                    *VAR_10 = VAR_8->value;

            FUNC_8(VAR_9, VAR_5, VAR_6);
            VAR_8->value = VAR_9;

            FUNC_0(VAR_2, "Dictionary: freeing old value of '%s'", VAR_4);
            FUNC_6(VAR_10);
        }
    }

    FUNC_3(VAR_3);

    return VAR_8->value;
}
