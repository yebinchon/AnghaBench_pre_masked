
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef int INT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static BOOL FUNC_2( int VAR_3, POINT *VAR_4)
{
    INT VAR_5, VAR_6;
    VAR_5=VAR_4[3].x-VAR_4[0].x;
    VAR_6=VAR_4[3].y-VAR_4[0].y;
    if(FUNC_1(VAR_6)<=FUNC_1(VAR_5)){

        if(VAR_4[1].x < VAR_4[0].x){
            if(VAR_4[1].x < VAR_4[3].x)
                return VAR_1;
        }else
            if(VAR_4[1].x > VAR_4[3].x)
                return VAR_1;
        if(VAR_4[2].x < VAR_4[0].x){
            if(VAR_4[2].x < VAR_4[3].x)
                return VAR_1;
        }else
            if(VAR_4[2].x > VAR_4[3].x)
                return VAR_1;
        VAR_5=FUNC_0(VAR_5);
        if(!VAR_5) return VAR_2;
        if(FUNC_1(VAR_4[1].y-VAR_4[0].y-(VAR_6/VAR_5)*
                FUNC_0(VAR_4[1].x-VAR_4[0].x)) > VAR_0 ||
           FUNC_1(VAR_4[2].y-VAR_4[0].y-(VAR_6/VAR_5)*
                   FUNC_0(VAR_4[2].x-VAR_4[0].x)) > VAR_0 )
            return VAR_1;
        else
            return VAR_2;
    }else{

        if(VAR_4[1].y < VAR_4[0].y){
            if(VAR_4[1].y < VAR_4[3].y)
                return VAR_1;
        }else
            if(VAR_4[1].y > VAR_4[3].y)
                return VAR_1;
        if(VAR_4[2].y < VAR_4[0].y){
            if(VAR_4[2].y < VAR_4[3].y)
                return VAR_1;
        }else
            if(VAR_4[2].y > VAR_4[3].y)
                return VAR_1;
        VAR_6=FUNC_0(VAR_6);
        if(!VAR_6) return VAR_2;
        if(FUNC_1(VAR_4[1].x-VAR_4[0].x-(VAR_5/VAR_6)*
                FUNC_0(VAR_4[1].y-VAR_4[0].y)) > VAR_0 ||
           FUNC_1(VAR_4[2].x-VAR_4[0].x-(VAR_5/VAR_6)*
                   FUNC_0(VAR_4[2].y-VAR_4[0].y)) > VAR_0 )
            return VAR_1;
        else
            return VAR_2;
    }
}
