
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int BlockBackend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,char const*,char*,char const*,int) ;

__attribute__((used)) static gboolean
FUNC_2 (BlockBackend *VAR_4,
                               const char *VAR_5,
                               int VAR_6,
                               const char *VAR_7)
{
    char VAR_8[VAR_2];

    FUNC_1 (VAR_4, VAR_7, VAR_8, VAR_5, VAR_6);
    if (FUNC_0 (VAR_8, VAR_1) == 0)
        return VAR_3;
    else
        return VAR_0;
}
