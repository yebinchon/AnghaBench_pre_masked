
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int avl ;
struct TYPE_9__ {int flags; int values_index; } ;
struct TYPE_8__ {char* name; void* value; scalar_t__ hash; } ;
typedef TYPE_1__ NAME_VALUE ;
typedef TYPE_2__ DICTIONARY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (void*,void*,size_t) ;
 scalar_t__ FUNC_8 (char*) ;
 char* FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static NAME_VALUE *FUNC_11(DICTIONARY *VAR_3, const char *VAR_4, void *VAR_5, size_t VAR_6, uint32_t VAR_7) {
    FUNC_4(VAR_2, "Creating name value entry for name '%s'.", VAR_4);

    NAME_VALUE *VAR_8 = FUNC_3(1, sizeof(NAME_VALUE));

    if(VAR_3->flags & VAR_0)
        VAR_8->name = (char *)VAR_4;
    else {
        VAR_8->name = FUNC_9(VAR_4);
    }

    VAR_8->hash = (VAR_7)?VAR_7:FUNC_8(VAR_8->name);

    if(VAR_3->flags & VAR_1)
        VAR_8->value = VAR_5;
    else {
        VAR_8->value = FUNC_6(VAR_6);
        FUNC_7(VAR_8->value, VAR_5, VAR_6);
    }


    FUNC_1(VAR_3);
    if(FUNC_10(FUNC_2(&((VAR_3)->values_index), (avl *)(VAR_8)) != (avl *)VAR_8))
        FUNC_5("dictionary: INTERNAL ERROR: duplicate insertion to dictionary.");

    FUNC_0(VAR_3);

    return VAR_8;
}
