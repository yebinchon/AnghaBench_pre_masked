
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char id; scalar_t__ (* parse ) (char const**) ;} ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char const**) ;
 scalar_t__ FUNC_2 (char const**) ;

__attribute__((used)) static inline unsigned char FUNC_3(const char **VAR_2, int *VAR_3) {
    FUNC_1(VAR_2);

    int VAR_4;
    for(VAR_4 = 0 ; VAR_1[VAR_4].parse != ((void*)0) ; VAR_4++)
        if(VAR_1[VAR_4].parse(VAR_2)) {
            if(VAR_3) *VAR_3 = FUNC_0(VAR_1[VAR_4].id);
            return VAR_1[VAR_4].id;
        }

    return VAR_0;
}
