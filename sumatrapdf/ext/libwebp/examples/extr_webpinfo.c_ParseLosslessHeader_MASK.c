
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ WebPInfoStatus ;
typedef int WebPInfo ;
struct TYPE_3__ {scalar_t__* payload_; size_t size_; } ;
typedef TYPE_1__ ChunkData ;


 size_t VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int * const,scalar_t__ const*,size_t,int * const) ;
 size_t VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static WebPInfoStatus FUNC_4(const ChunkData* const VAR_6,
                                          WebPInfo* const VAR_7) {
  const uint8_t* VAR_8 = VAR_6->payload_;
  size_t VAR_9 = VAR_6->size_ - VAR_0;
  uint64_t VAR_10 = 0;
  uint64_t* const VAR_11 = &VAR_10;
  WebPInfoStatus VAR_12;
  FUNC_3("  Parsing lossless bitstream...\n");
  if (VAR_9 < VAR_1) {
    FUNC_1("Truncated lossless bitstream.");
    return VAR_5;
  }
  if (VAR_8[0] != VAR_2) {
    FUNC_1("Invalid lossless bitstream signature.");
    return VAR_3;
  }
  VAR_8 += 1;
  VAR_9 -= 1;
  {
    int VAR_13, VAR_14, VAR_15, VAR_16;
    FUNC_0(VAR_13, 14);
    FUNC_0(VAR_14, 14);
    FUNC_0(VAR_15, 1);
    FUNC_0(VAR_16, 3);
    VAR_13 += 1;
    VAR_14 += 1;
    FUNC_3("  Width:            %d\n", VAR_13);
    FUNC_3("  Height:           %d\n", VAR_14);
    FUNC_3("  Alpha:            %d\n", VAR_15);
    FUNC_3("  Version:          %d\n", VAR_16);
  }
  VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_11);
  if (VAR_12 != VAR_4) return VAR_12;
  return VAR_4;
}
