
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct stream {TYPE_4__* parser; int codec_ctx; } ;
struct TYPE_6__ {int key_frame; } ;
struct TYPE_5__ {int size; int flags; int * data; } ;
typedef TYPE_1__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,int **,int*,int *,int,int ,int ,int) ;
 int FUNC_3 (struct stream*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_4(struct stream *VAR_2, AVPacket *VAR_3) {
    uint8_t *VAR_4 = VAR_3->data;
    int VAR_5 = VAR_3->size;
    uint8_t *VAR_6 = ((void*)0);
    int VAR_7 = 0;
    int VAR_8 = FUNC_2(VAR_2->parser, VAR_2->codec_ctx,
                             &VAR_6, &VAR_7, VAR_4, VAR_5,
                             VAR_0, VAR_0, -1);


    FUNC_1(VAR_8 == VAR_5);
    FUNC_1(VAR_7 == VAR_5);

    if (VAR_2->parser->key_frame == 1) {
        VAR_3->flags |= VAR_1;
    }

    bool VAR_9 = FUNC_3(VAR_2, VAR_3);
    if (!VAR_9) {
        FUNC_0("Could not process frame");
        return 0;
    }

    return 1;
}
