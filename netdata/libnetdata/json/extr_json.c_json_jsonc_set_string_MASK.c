
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* string; } ;
struct TYPE_5__ {int* name; TYPE_1__ data; int type; } ;
typedef TYPE_2__ JSON_ENTRY ;


 int VAR_0 ;
 int FUNC_0 (int*,char*,size_t) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static inline void FUNC_2(JSON_ENTRY *VAR_1,char *VAR_2,const char *VAR_3) {
    size_t VAR_4 = FUNC_1(VAR_2);
    VAR_1->type = VAR_0;
    FUNC_0(VAR_1->name,VAR_2,VAR_4);
    VAR_1->name[VAR_4] = 0x00;
    VAR_1->data.string = (char *) VAR_3;
}
