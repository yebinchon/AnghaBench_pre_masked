
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_3__ {int size; int fns; int* buf; int occupancy; } ;
typedef TYPE_1__ bloom_t ;
typedef int SHA256_CTX ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,size_t) ;

__attribute__((used)) static bool FUNC_3(const uint8 *VAR_0, size_t VAR_1, bloom_t *VAR_2, bool VAR_3) {
  SHA256_CTX VAR_4;
  FUNC_1(&VAR_4);
  FUNC_2(&VAR_4, VAR_0, VAR_1);

  char VAR_5[32];
  FUNC_0(VAR_5, &VAR_4);

  int VAR_6;
  uint32 VAR_7 = VAR_2->size << 5;
  uint8 *VAR_8 = VAR_5;
  bool VAR_9 = 1;
  int VAR_10 = VAR_2->fns > 10 ? 2 : 3;
  for (VAR_6 = 0; VAR_6 < VAR_2->fns; VAR_6++) {
    uint32 VAR_11 = (((VAR_8[0] << 8) + VAR_8[1]) << 8) + VAR_8[2];
    VAR_8 += VAR_10;
    VAR_11 = VAR_11 % VAR_7;

    uint32 VAR_12 = VAR_11 >> 5;
    uint32 VAR_13 = 1 << (VAR_11 & 31);

    if (!(VAR_2->buf[VAR_12] & VAR_13)) {
      VAR_9 = 0;
      if (VAR_3) {
        VAR_2->buf[VAR_12] |= VAR_13;
        VAR_2->occupancy++;
      } else {
        break;
      }
    }
  }

  return VAR_9;
}
