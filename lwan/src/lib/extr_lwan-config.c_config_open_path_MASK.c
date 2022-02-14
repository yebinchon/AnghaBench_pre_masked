
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_2__ {void* addr; size_t sz; } ;
struct config {TYPE_1__ mapped; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,char const*) ;
 struct config* FUNC_3 (int) ;
 void* FUNC_4 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_5 (void*,size_t) ;
 int FUNC_6 (char const*,int) ;

__attribute__((used)) static struct config *
FUNC_7(const char *VAR_5, void **VAR_6, size_t *VAR_7)
{
    struct config *VAR_8;
    struct stat VAR_9;
    void *VAR_10;
    int VAR_11;

    VAR_11 = FUNC_6(VAR_5, VAR_3 | VAR_2);
    if (VAR_11 < 0) {
        FUNC_2("Could not open configuration file: %s", VAR_5);
        return ((void*)0);
    }

    if (FUNC_1(VAR_11, &VAR_9) < 0) {
        FUNC_0(VAR_11);
        return ((void*)0);
    }

    VAR_10 = FUNC_4(((void*)0), (size_t)VAR_9.st_size, VAR_4, VAR_1, VAR_11, 0);
    FUNC_0(VAR_11);
    if (VAR_10 == VAR_0)
        return ((void*)0);

    VAR_8 = FUNC_3(sizeof(*VAR_8));
    if (!VAR_8) {
        FUNC_5(VAR_10, (size_t)VAR_9.st_size);
        return ((void*)0);
    }

    *VAR_6 = VAR_8->mapped.addr = VAR_10;
    *VAR_7 = VAR_8->mapped.sz = (size_t)VAR_9.st_size;

    return VAR_8;
}
