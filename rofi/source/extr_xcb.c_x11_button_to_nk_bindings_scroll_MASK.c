
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint32 ;
typedef int gint32 ;
typedef int gboolean ;
typedef int NkBindingsScrollAxis ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static gboolean FUNC_0 ( guint32 VAR_4, NkBindingsScrollAxis *VAR_5, gint32 *VAR_6 )
{
    *VAR_6 = 1;
    switch ( VAR_4 )
    {
    case 4:
        *VAR_6 = -1;

    case 5:
        *VAR_5 = VAR_2;
        break;
    case 6:
        *VAR_6 = -1;

    case 7:
        *VAR_5 = VAR_1;
        break;
    default:
        return VAR_0;
    }
    return VAR_3;
}
