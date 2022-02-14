
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int dummy; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef int UINT ;
typedef scalar_t__ LONGLONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct table const*,int ,struct expr const*,scalar_t__*,int *) ;

__attribute__((used)) static BOOL FUNC_1( const struct table *VAR_6, UINT VAR_7, const struct expr *VAR_8, enum fill_status *VAR_9 )
{
    LONGLONG VAR_10;
    UINT VAR_11;

    if (!VAR_8)
    {
        *VAR_9 = VAR_3;
        return VAR_5;
    }
    if (FUNC_0( VAR_6, VAR_7, VAR_8, &VAR_10, &VAR_11 ) != VAR_4)
    {
        *VAR_9 = VAR_1;
        return VAR_0;
    }
    *VAR_9 = VAR_2;
    return VAR_10 != 0;
}
