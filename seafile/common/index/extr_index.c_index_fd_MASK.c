
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_3__ {scalar_t__ st_size; } ;
typedef TYPE_1__ SeafStat ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned char*,void*,scalar_t__,int,char const*) ;
 char* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int *,scalar_t__,int ,int ,int,int ) ;
 int FUNC_5 (void*,scalar_t__) ;
 scalar_t__ FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(unsigned char *VAR_4, int VAR_5, SeafStat *VAR_6,
             enum object_type VAR_7, const char *VAR_8)
{
    int VAR_9;
    uint64_t VAR_10 = VAR_6->st_size;

    if (!VAR_10) {
        VAR_9 = FUNC_2(VAR_4, ((void*)0), VAR_10, VAR_7, VAR_8);
    } else if (VAR_10 <= VAR_2) {
        char *VAR_11 = FUNC_3(VAR_10);
        if (VAR_10 == FUNC_6(VAR_5, VAR_11, VAR_10)) {
            VAR_9 = FUNC_2(VAR_4, VAR_11, VAR_10, VAR_7, VAR_8);
        } else {
            FUNC_7("short read %s\n", FUNC_8(VAR_3));
            VAR_9 = -1;
        }
        FUNC_1(VAR_11);
    } else {
        void *VAR_12 = FUNC_4(((void*)0), VAR_10, VAR_1, VAR_0, VAR_5, 0);
        VAR_9 = FUNC_2(VAR_4, VAR_12, VAR_10, VAR_7, VAR_8);
        FUNC_5(VAR_12, VAR_10);
    }
    FUNC_0(VAR_5);
    return VAR_9;
}
