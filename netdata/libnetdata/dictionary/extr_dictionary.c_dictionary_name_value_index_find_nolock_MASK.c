
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int avl ;
struct TYPE_7__ {int values_index; } ;
struct TYPE_6__ {char* name; scalar_t__ hash; } ;
typedef TYPE_1__ NAME_VALUE ;
typedef TYPE_2__ DICTIONARY ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static inline NAME_VALUE *FUNC_3(DICTIONARY *VAR_0, const char *VAR_1, uint32_t VAR_2) {
    NAME_VALUE VAR_3;
    VAR_3.hash = (VAR_2)?VAR_2:FUNC_2(VAR_1);
    VAR_3.name = (char *)VAR_1;

    FUNC_0(VAR_0);
    return (NAME_VALUE *)FUNC_1(&(VAR_0->values_index), (avl *) &VAR_3);
}
