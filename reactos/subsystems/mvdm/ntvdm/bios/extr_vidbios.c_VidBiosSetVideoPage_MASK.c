
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int VideoPage; int VideoPageOffset; int VideoPageSize; } ;
typedef int BYTE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static BOOLEAN FUNC_5(BYTE VAR_8)
{
    BYTE VAR_9, VAR_10;


    if (VAR_8 >= VAR_0) return VAR_2;


    if (VAR_8 == VAR_1->VideoPage) return VAR_3;


    VAR_1->VideoPage = VAR_8;
    VAR_1->VideoPageOffset = VAR_1->VideoPage * VAR_1->VideoPageSize;


    FUNC_1(VAR_5, VAR_7);
    FUNC_1(VAR_4 , FUNC_2(VAR_1->VideoPageOffset));
    FUNC_1(VAR_5, VAR_6);
    FUNC_1(VAR_4 , FUNC_0(VAR_1->VideoPageOffset));





    FUNC_3(&VAR_9, &VAR_10, VAR_8);
    FUNC_4( VAR_9, VAR_10, VAR_8);

    return VAR_3;
}
