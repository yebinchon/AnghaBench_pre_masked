
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WebPMuxError ;
struct TYPE_7__ {int unknown_; } ;
typedef TYPE_1__ WebPMux ;
typedef int WebPData ;
struct TYPE_8__ {int data_; } ;
typedef TYPE_2__ WebPChunk ;
struct TYPE_9__ {int id; } ;
typedef size_t CHUNK_INDEX ;


 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 TYPE_2__* FUNC_2 (int ,int,int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__ const*,size_t,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;

WebPMuxError FUNC_5(const WebPMux* VAR_5, const char VAR_6[4],
                             WebPData* VAR_7) {
  CHUNK_INDEX VAR_8;
  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
    return VAR_1;
  }
  VAR_8 = FUNC_0(VAR_6);
  if (FUNC_3(VAR_4[VAR_8].id)) {
    return VAR_1;
  } else if (VAR_8 != VAR_0) {
    return FUNC_4(VAR_5, VAR_8, 1, VAR_7);
  } else {
    const WebPChunk* const VAR_9 =
        FUNC_2(VAR_5->unknown_, 1, FUNC_1(VAR_6));
    if (VAR_9 == ((void*)0)) return VAR_2;
    *VAR_7 = VAR_9->data_;
    return VAR_3;
  }
}
