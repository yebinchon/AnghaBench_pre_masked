
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct recorder {int filename; TYPE_6__* ctx; } ;
struct TYPE_11__ {TYPE_3__** streams; } ;
struct TYPE_10__ {int size; int data; } ;
struct TYPE_9__ {TYPE_2__* codec; TYPE_1__* codecpar; } ;
struct TYPE_8__ {int extradata_size; int * extradata; } ;
struct TYPE_7__ {int extradata_size; int * extradata; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static bool
FUNC_5(struct recorder *VAR_0, const AVPacket *VAR_1) {
    AVStream *VAR_2 = VAR_0->ctx->streams[0];

    uint8_t *VAR_3 = FUNC_2(VAR_1->size * sizeof(uint8_t));
    if (!VAR_3) {
        FUNC_0("Could not allocate extradata");
        return 0;
    }


    FUNC_4(VAR_3, VAR_1->data, VAR_1->size);





    VAR_2->codec->extradata = VAR_3;
    VAR_2->codec->extradata_size = VAR_1->size;


    int VAR_4 = FUNC_3(VAR_0->ctx, ((void*)0));
    if (VAR_4 < 0) {
        FUNC_1("Failed to write header to %s", VAR_0->filename);
        return 0;
    }

    return 1;
}
