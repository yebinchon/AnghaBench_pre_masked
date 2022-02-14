
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; int dc; int handle; } ;
struct TYPE_5__ {int tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef TYPE_2__ GdiFont ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int,int) ;

GdiFont*
FUNC_5(const char *VAR_8, int VAR_9)
{
    TEXTMETRICW VAR_10;
    GdiFont *VAR_11 = (GdiFont*)FUNC_4(1, sizeof(GdiFont));
    if (!VAR_11)
        return ((void*)0);
    VAR_11->dc = FUNC_0(0);
    VAR_11->handle = FUNC_1(VAR_9, 0, 0, 0, VAR_6, VAR_4, VAR_4, VAR_4, VAR_2, VAR_7, VAR_1, VAR_0, VAR_3 | VAR_5, VAR_8);
    FUNC_3(VAR_11->dc, VAR_11->handle);
    FUNC_2(VAR_11->dc, &VAR_10);
    VAR_11->height = VAR_10.tmHeight;
    return VAR_11;
}
