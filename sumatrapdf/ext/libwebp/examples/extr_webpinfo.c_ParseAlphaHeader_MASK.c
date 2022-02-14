
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ WebPInfoStatus ;
typedef int WebPInfo ;
struct TYPE_3__ {int* payload_; size_t size_; } ;
typedef TYPE_1__ ChunkData ;


 size_t VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int * const,int const*,size_t,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char** VAR_7 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static WebPInfoStatus FUNC_4(const ChunkData* const VAR_8,
                                       WebPInfo* const VAR_9) {
  const uint8_t* VAR_10 = VAR_8->payload_;
  size_t VAR_11 = VAR_8->size_ - VAR_3;
  if (VAR_11 <= VAR_0) {
    FUNC_0("Truncated ALPH chunk.");
    return VAR_6;
  }
  FUNC_3("  Parsing ALPH chunk...\n");
  {
    const int VAR_12 = (VAR_10[0] >> 0) & 0x03;
    const int VAR_13 = (VAR_10[0] >> 2) & 0x03;
    const int VAR_14 = (VAR_10[0] >> 4) & 0x03;
    const int VAR_15 = (VAR_10[0] >> 6) & 0x03;
    FUNC_3("  Compression:      %d\n", VAR_12);
    FUNC_3("  Filter:           %s (%d)\n",
           VAR_7[VAR_13], VAR_13);
    FUNC_3("  Pre-processing:   %d\n", VAR_14);
    if (VAR_12 > VAR_1) {
      FUNC_0("Invalid Alpha compression method.");
      return VAR_4;
    }
    if (VAR_14 > VAR_2) {
      FUNC_0("Invalid Alpha pre-processing method.");
      return VAR_4;
    }
    if (VAR_15 != 0) {
      FUNC_1("Reserved bits in ALPH chunk header are not all 0.");
    }
    VAR_10 += VAR_0;
    VAR_11 -= VAR_0;
    if (VAR_12 == VAR_1) {
      uint64_t VAR_16 = 0;
      WebPInfoStatus VAR_17 =
          FUNC_2(VAR_9, VAR_10, VAR_11, &VAR_16);
      if (VAR_17 != VAR_5) return VAR_17;
    }
  }
  return VAR_5;
}
