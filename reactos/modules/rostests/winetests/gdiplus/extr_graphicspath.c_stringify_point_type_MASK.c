
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PathPointType ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(PathPointType VAR_3, char * VAR_4)
{
    *VAR_4 = '\0';

    switch(VAR_3 & VAR_2){
        case 128:
            FUNC_0(VAR_4, "PathPointTypeStart");
            break;
        case 129:
            FUNC_0(VAR_4, "PathPointTypeLine");
            break;
        case 130:
            FUNC_0(VAR_4, "PathPointTypeBezier");
            break;
        default:
            FUNC_0(VAR_4, "Unknown type");
            return;
    }

    VAR_3 &= ~VAR_2;
    if(VAR_3 & ~((VAR_1 | VAR_0))){
        *VAR_4 = '\0';
        FUNC_0(VAR_4, "Unknown type");
        return;
    }

    if(VAR_3 & VAR_1)
        FUNC_0(VAR_4, " | PathPointTypePathMarker");
    if(VAR_3 & VAR_0)
        FUNC_0(VAR_4, " | PathPointTypeCloseSubpath");
}
