
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdengine_datafile {int dummy; } ;
typedef int path2 ;
typedef int path1 ;


 int VAR_0 ;
 int FUNC_0 (struct rrdengine_datafile*,char*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, const void *VAR_2)
{
    struct rrdengine_datafile *VAR_3, *VAR_4;
    char VAR_5[VAR_0], VAR_6[VAR_0];

    VAR_3 = *(struct rrdengine_datafile **)VAR_1;
    VAR_4 = *(struct rrdengine_datafile **)VAR_2;
    FUNC_0(VAR_3, VAR_5, sizeof(VAR_5));
    FUNC_0(VAR_4, VAR_6, sizeof(VAR_6));
    return FUNC_1(VAR_5, VAR_6);
}
