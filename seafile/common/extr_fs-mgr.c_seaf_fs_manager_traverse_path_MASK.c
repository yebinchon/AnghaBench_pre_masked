
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TraverseFSPathCallback ;
typedef int SeafFSManager ;
typedef int SeafDirent ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,int,char const*,char const*,int *) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 (int *,char const*,int,char const*,int *,int ,void*) ;

int
FUNC_4 (SeafFSManager *VAR_0,
                               const char *VAR_1,
                               int VAR_2,
                               const char *VAR_3,
                               const char *VAR_4,
                               TraverseFSPathCallback VAR_5,
                               void *VAR_6)
{
    SeafDirent *VAR_7;
    int VAR_8 = 0;

    VAR_7 = FUNC_1 (VAR_0, VAR_1, VAR_2,
                                               VAR_3, VAR_4, ((void*)0));
    if (!VAR_7) {
        FUNC_2 ("Failed to get dirent for %.8s:%s.\n", VAR_1, VAR_4);
        return -1;
    }

    VAR_8 = FUNC_3 (VAR_0, VAR_1, VAR_2, VAR_4, VAR_7,
                             VAR_5, VAR_6);

    FUNC_0 (VAR_7);
    return VAR_8;
}
