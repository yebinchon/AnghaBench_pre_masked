
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int const uint32_t ;
typedef scalar_t__ WebPInfoStatus ;
typedef int WebPInfo ;
struct TYPE_3__ {int* payload_; scalar_t__ size_; } ;
typedef TYPE_1__ ChunkData ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int const* const,int const*,size_t,int* const) ;
 scalar_t__ FUNC_4 (int const* const,int const*,size_t,int* const) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static WebPInfoStatus FUNC_7(const ChunkData* const VAR_4,
                                       const WebPInfo* const VAR_5) {
  const uint8_t* VAR_6 = VAR_4->payload_;
  size_t VAR_7 = VAR_4->size_ - VAR_0;
  const uint32_t VAR_8 = (uint32_t)VAR_6[0] | (VAR_6[1] << 8) | (VAR_6[2] << 16);
  const int VAR_9 = !(VAR_8 & 1);
  const int VAR_10 = (VAR_8 >> 1) & 7;
  const int VAR_11 = (VAR_8 >> 4) & 1;
  const uint32_t VAR_12 = (VAR_8 >> 5);
  WebPInfoStatus VAR_13 = VAR_2;
  uint64_t VAR_14 = 0;
  uint64_t* const VAR_15 = &VAR_14;
  int VAR_16, VAR_17;
  FUNC_6("  Parsing lossy bitstream...\n");

  FUNC_5(VAR_4->size_ >= VAR_0 + 10);
  if (VAR_10 > 3) {
    FUNC_2("Unknown profile.");
    return VAR_1;
  }
  if (!VAR_11) {
    FUNC_2("Frame is not displayable.");
    return VAR_1;
  }
  VAR_6 += 3;
  VAR_7 -= 3;
  FUNC_6("  Key frame:        %s\n"
         "  Profile:          %d\n"
         "  Display:          %s\n"
         "  Part. 0 length:   %d\n",
         VAR_9 ? "Yes" : "No", VAR_10,
         VAR_11 ? "Yes" : "No", VAR_12);
  if (VAR_9) {
    if (!(VAR_6[0] == 0x9d && VAR_6[1] == 0x01 && VAR_6[2] == 0x2a)) {
      FUNC_2("Invalid lossy bitstream signature.");
      return VAR_1;
    }
    FUNC_6("  Width:            %d\n"
           "  X scale:          %d\n"
           "  Height:           %d\n"
           "  Y scale:          %d\n",
           ((VAR_6[4] << 8) | VAR_6[3]) & 0x3fff, VAR_6[4] >> 6,
           ((VAR_6[6] << 8) | VAR_6[5]) & 0x3fff, VAR_6[6] >> 6);
    VAR_6 += 7;
    VAR_7 -= 7;
  } else {
    FUNC_2("Non-keyframe detected in lossy bitstream.");
    return VAR_1;
  }
  if (VAR_12 >= VAR_7) {
    FUNC_2("Bad partition length.");
    return VAR_1;
  }
  FUNC_0(VAR_16, 1);
  FUNC_0(VAR_17, 1);
  FUNC_6("  Color space:      %d\n", VAR_16);
  FUNC_6("  Clamp type:       %d\n", VAR_17);
  VAR_13 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_15);
  if (VAR_13 != VAR_2) return VAR_13;
  VAR_13 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_15);
  if (VAR_13 != VAR_2) return VAR_13;
  {
    const uint8_t* VAR_18 = VAR_6 + VAR_12;
    int VAR_19, VAR_20;
    size_t VAR_21;
    FUNC_0(VAR_19, 2);
    VAR_19 = 1 << VAR_19;
    if ((int)(VAR_7 - VAR_12) < (VAR_19 - 1) * 3) {
      FUNC_2("Truncated lossy bitstream.");
      return VAR_3;
    }
    VAR_21 = VAR_7 - VAR_12 - (VAR_19 - 1) * 3;
    FUNC_6("  Total partitions: %d\n", VAR_19);
    for (VAR_20 = 1; VAR_20 < VAR_19; ++VAR_20) {
      const size_t VAR_22 =
          VAR_18[0] | (VAR_18[1] << 8) | (VAR_18[2] << 16);
      if (VAR_22 > VAR_21) {
        FUNC_2("Truncated partition.");
        return VAR_3;
      }
      FUNC_6("  Part. %d length:   %d\n", VAR_20, (int)VAR_22);
      VAR_21 -= VAR_22;
      VAR_18 += 3;
    }
  }

  {
    int VAR_23, VAR_24;
    int VAR_25 = 0, VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;
    FUNC_0(VAR_23, 7);
    FUNC_0(VAR_24, 1);
    if (VAR_24) FUNC_1(VAR_25, 4);
    FUNC_0(VAR_24, 1);
    if (VAR_24) FUNC_1(VAR_26, 4);
    FUNC_0(VAR_24, 1);
    if (VAR_24) FUNC_1(VAR_27, 4);
    FUNC_0(VAR_24, 1);
    if (VAR_24) FUNC_1(VAR_28, 4);
    FUNC_0(VAR_24, 1);
    if (VAR_24) FUNC_1(VAR_29, 4);
    FUNC_6("  Base Q:           %d\n", VAR_23);
    FUNC_6("  DQ Y1 DC:         %d\n", VAR_25);
    FUNC_6("  DQ Y2 DC:         %d\n", VAR_26);
    FUNC_6("  DQ Y2 AC:         %d\n", VAR_27);
    FUNC_6("  DQ UV DC:         %d\n", VAR_28);
    FUNC_6("  DQ UV AC:         %d\n", VAR_29);
  }
  if ((*VAR_15 >> 3) >= VAR_12) {
    FUNC_2("Truncated lossy bitstream.");
    return VAR_3;
  }
  return VAR_2;
}
