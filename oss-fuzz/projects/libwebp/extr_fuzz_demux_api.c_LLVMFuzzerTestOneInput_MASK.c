
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int bitstream; } ;
typedef TYPE_1__ WebPMuxFrameInfo ;
typedef int WebPMuxError ;
typedef int WebPMuxAnimParams ;
typedef int WebPMux ;
typedef int WebPIterator ;
typedef int WebPDemuxer ;
typedef scalar_t__ WebPDemuxState ;
struct TYPE_10__ {size_t size; int * bytes; } ;
typedef TYPE_2__ WebPData ;
typedef int WebPChunkIterator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*,int,int *) ;
 scalar_t__ FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_2__*,scalar_t__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (TYPE_2__*,size_t) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,char*,TYPE_2__*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int,TYPE_1__*) ;
 int VAR_3 ;

int FUNC_18(const uint8_t* const VAR_4, size_t VAR_5) {
  WebPData VAR_6;
  FUNC_1(&VAR_6);
  VAR_6.size = VAR_5;
  VAR_6.bytes = VAR_4;




  if (VAR_5 & 1) {

    WebPMux* VAR_7 = FUNC_12(&VAR_6, VAR_5 & 2);
    if (!VAR_7) return 0;

    WebPData VAR_8;
    FUNC_15(VAR_7, "EXIF", &VAR_8);
    FUNC_15(VAR_7, "ICCP", &VAR_8);
    FUNC_15(VAR_7, "FUZZ", &VAR_8);

    uint32_t VAR_9;
    FUNC_16(VAR_7, &VAR_9);

    WebPMuxAnimParams VAR_10;
    FUNC_14(VAR_7, &VAR_10);

    WebPMuxError VAR_11;
    WebPMuxFrameInfo VAR_12;
    for (int VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
      VAR_11 = FUNC_17(VAR_7, VAR_13 + 1, &VAR_12);
      if (VAR_11 == VAR_1) {
        break;
      } else if (VAR_11 == VAR_2) {
        FUNC_0(&VAR_12.bitstream);
      }
    }

    FUNC_13(VAR_7);
  } else {

    WebPDemuxer* VAR_14;
    if (VAR_5 & 2) {
      WebPDemuxState VAR_15;
      VAR_14 = FUNC_8(&VAR_6, &VAR_15);
      if (VAR_15 < VAR_0) {
        FUNC_3(VAR_14);
        return 0;
      }
    } else {
      VAR_14 = FUNC_2(&VAR_6);
      if (!VAR_14) return 0;
    }

    WebPChunkIterator VAR_16;
    if (FUNC_4(VAR_14, "EXIF", 1, &VAR_16)) {
      FUNC_6(&VAR_16);
    }
    FUNC_10(&VAR_16);
    if (FUNC_4(VAR_14, "ICCP", 0, &VAR_16)) {
      FUNC_9(&VAR_16);
    }
    FUNC_10(&VAR_16);


    WebPIterator VAR_17;
    if (FUNC_5(VAR_14, 1, &VAR_17)) {
      for (int VAR_18 = 1; VAR_18 < VAR_3; VAR_18++) {
        if (!FUNC_7(&VAR_17)) break;
      }
    }

    FUNC_11(&VAR_17);
    FUNC_3(VAR_14);
  }

  return 0;
}
