
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef size_t uint32_t ;
struct TYPE_4__ {int compression; int compression_level; } ;
typedef TYPE_1__ RedisSock ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,int ) ;


 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (char*,size_t,char*,size_t,int) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (size_t) ;
 char* FUNC_8 (char*,size_t) ;
 size_t FUNC_9 (char*,size_t,char*,double) ;
 int FUNC_10 (TYPE_1__*,int *,char**,size_t*) ;

int
FUNC_11(RedisSock *VAR_3, zval *VAR_4, char **VAR_5, size_t *VAR_6)
{
    char *VAR_7;
    int VAR_8;
    size_t VAR_9;

    VAR_8 = FUNC_10(VAR_3, VAR_4, &VAR_7, &VAR_9);
    switch (VAR_3->compression) {
        case 129:
            break;
        case 128:
            break;
    }
    *VAR_5 = VAR_7;
    *VAR_6 = VAR_9;
    return VAR_8;
}
