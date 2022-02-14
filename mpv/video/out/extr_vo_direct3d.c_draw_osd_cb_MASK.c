
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vertex_osd ;
struct sub_bitmaps {scalar_t__ format; } ;
struct osdpart {int num_vertices; int vertices; int texture; } ;
struct TYPE_5__ {int d3d_device; } ;
typedef TYPE_1__ d3d_priv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (TYPE_1__*,int *) ;
 struct osdpart* FUNC_7 (TYPE_1__*,struct sub_bitmaps*) ;

__attribute__((used)) static void FUNC_8(void *VAR_16, struct sub_bitmaps *VAR_17)
{
    d3d_priv *VAR_18 = VAR_16;

    struct osdpart *VAR_19 = FUNC_7(VAR_18, VAR_17);
    if (!VAR_19)
        return;

    FUNC_5(VAR_18);

    FUNC_2(VAR_18->d3d_device,
                                    VAR_4, VAR_15);

    FUNC_3(VAR_18->d3d_device, 0,
                                FUNC_6(VAR_18, &VAR_19->texture));

    if (VAR_17->format == VAR_14) {

        FUNC_2(VAR_18->d3d_device,VAR_6,
                                        0xFFFFFFFF);
        FUNC_4(VAR_18->d3d_device,0,
                                            VAR_12, VAR_8);

        FUNC_4(VAR_18->d3d_device, 0,
                                            VAR_11, VAR_9);
    } else {
        FUNC_2(VAR_18->d3d_device, VAR_5,
                                        VAR_0);
    }

    FUNC_1(VAR_18->d3d_device, VAR_2);
    FUNC_0(VAR_18->d3d_device, VAR_3,
                                     VAR_19->num_vertices / 3,
                                     VAR_19->vertices, sizeof(vertex_osd));

    FUNC_4(VAR_18->d3d_device,0,
                                          VAR_12, VAR_7);
    FUNC_4(VAR_18->d3d_device, 0,
                                          VAR_11, VAR_10);
    FUNC_2(VAR_18->d3d_device,
                                    VAR_5, VAR_1);

    FUNC_3(VAR_18->d3d_device, 0, ((void*)0));

    FUNC_2(VAR_18->d3d_device,
                                    VAR_4, VAR_13);
}
