
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint32 ;
typedef int gboolean ;
typedef int NkBindingsMouseButton ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static gboolean FUNC_0 ( guint32 VAR_8, NkBindingsMouseButton *VAR_9 )
{
    switch ( VAR_8 )
    {
    case 1:
        *VAR_9 = VAR_5;
        break;
    case 3:
        *VAR_9 = VAR_6;
        break;
    case 2:
        *VAR_9 = VAR_4;
        break;
    case 8:
        *VAR_9 = VAR_1;
        break;
    case 9:
        *VAR_9 = VAR_3;
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        return VAR_0;
    default:
        *VAR_9 = VAR_2 + VAR_8;
    }
    return VAR_7;
}
